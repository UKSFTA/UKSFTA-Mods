// --- DEBUG SCRIPT START ---
diag_log ">>> ATrag Preset Script: Started";

// User-configurable variable for Zero Range
private _userZeroRange = 100;    // Set your preferred zero range here


// Get the currently selected weapon and its magazine.
private _weaponsInfo = player weaponsInfo ["", true];
private _selectedWeaponInfo = _weaponsInfo findIf { _x select 1 };
if (_selectedWeaponInfo == -1) exitWith {
    hint "Error: No selected weapon found. Please ensure you are holding a primary weapon with a loaded magazine.";
};

private _weapon = (_weaponsInfo select _selectedWeaponInfo) select 2;
private _magazine = (_weaponsInfo select _selectedWeaponInfo) select 5;

if (_weapon == "" || _magazine == "") exitWith {
    hint "Error: Could not retrieve weapon or magazine name. Please ensure you are holding a primary weapon with a loaded magazine.";
};
diag_log format ["ATrag Preset Script: Found weapon '%1' and magazine '%2'", _weapon, _magazine];

// Get the ammunition class name using the correct method.
private _ammoClassName = getText (configFile >> "CfgMagazines" >> _magazine >> "ammo");

if (_ammoClassName == "") exitWith {
    hint "Error: Ammunition class name not found for the current magazine.";
};

// Define config paths for the weapon and ammo.
private _weaponConfig = configFile >> "CfgWeapons" >> _weapon;
private _ammoConfig = configFile >> "CfgAmmo" >> _ammoClassName;

// Check if the ammo class exists.
if (!isClass _ammoConfig) exitWith {
    hint format ["Error: The ammo class '%1' does not exist in the game config.", _ammoClassName];
};

// --- Read raw weapon and ammo data for ATrag storage ---

// Weapon data
private _barrelTwist = 0 max getNumber(_weaponConfig >> "ACE_barrelTwist");
private _rifleTwist = _barrelTwist;

// Bore height is the distance from the bore to the scope.
// It's a key value in ACE, so we can retrieve it directly.
private _boreHeight = getNumber(_weaponConfig >> "ACE_barrelBoreHeight");
if (_boreHeight isEqualTo 0) then {
    // If the value is not found, use a common default.
    _boreHeight = 3.81;
};

// Ammo data
private _airFriction = getNumber(_ammoConfig >> "airFriction");

// Bullet Caliber: Get as an array, then take the first number.
private _caliber_array = getArray(_ammoConfig >> "ACE_caliber");
private _caliber = if (count _caliber_array > 0) then { _caliber_array select 0 } else { 0 };

private _bulletMass = 0 max getNumber(_ammoConfig >> "ACE_bulletMass");
private _dragModel = getNumber(_ammoConfig >> "ACE_dragModel");
private _ballisticCoefficients = getArray(_ammoConfig >> "ACE_ballisticCoefficients");
if (_ballisticCoefficients isEqualTo []) then { _ballisticCoefficients = [0.5]; };
private _atmosphereModel = getText(_ammoConfig >> "ACE_standardAtmosphere");
if (_atmosphereModel isEqualTo "") then { _atmosphereModel = "ICAO"; };
private _ammoTempMuzzleVelocityShifts = getArray(_ammoConfig >> "ACE_ammoTempMuzzleVelocityShifts");
private _muzzleVelocityTable = getArray(_ammoConfig >> "ACE_muzzleVelocities");


// --- Helper function to calculate the average of an array ---
private _getAverage = {
    params ["_array"];
    private _count = count _array;
    if (_count == 0) exitWith { 0 };
    private _sum = 0;
    { _sum = _sum + _x } forEach _array;
    _sum / _count; // FIXED: Removed the 'round' function
};


// --- Process data to match ATrag's expected format ---

// Muzzle Velocity: Calculate the average for display
private _muzzleVel_avg = [_muzzleVelocityTable] call _getAverage;

// Ballistic Coefficient: Calculate the average
private _bc_avg = [_ballisticCoefficients] call _getAverage;

// Bullet Diameter: Convert from mm to cm
private _caliber_cm = _caliber / 10;

// Muzzle Velocity vs. Temp: Convert flat array to nested array of arrays
private _mvTempInterp_formatted = [];
{
    _mvTempInterp_formatted pushBack [_x, 0];
} forEach _ammoTempMuzzleVelocityShifts;


// --- Create the new ATrag preset array matching internal format ---
private _newPreset = [
    _weapon,                           // 0: Profile Name (String)
    _muzzleVel_avg,                    // 1: Muzzle Velocity (Number)
    _userZeroRange,                    // 2: Zero Range (Number)
    0,                                 // 3: Scope Base Angle (Number)
    _airFriction,                      // 4: AirFriction (Number)
    _boreHeight,                       // 5: Bore Height (Number)
    0,                                 // 6: Scope Unit (Number)
    0,                                 // 7: Scope Click Unit (Number)
    0,                                 // 8: Scope Click Number (Number)
    0,                                 // 9: Maximum Elevation (Number)
    0,                                 // 10: Dialed Elevation (Number)
    0,                                 // 11: Dialed Windage (Number)
    _bulletMass,                       // 12: Mass (Number)
    _caliber_cm,                       // 13: Bullet Diameter (Number)
    _rifleTwist,                       // 14: Rifle Twist (Number)
    _bc_avg,                           // 15: Ballistic Coefficient (Number)
    _dragModel,                        // 16: Drag Model (Number)
    _atmosphereModel,                  // 17: Atmosphere Model (String)
    _mvTempInterp_formatted,           // 18: Muzzle Velocity vs. Temperature (Array of Arrays)
    [],                                // 19: BC vs. Distance Interpolation (Array)
    true                               // 20: Persistent (Boolean)
];

// --- LOGGING FOR DEBUGGING ---
diag_log "--- ATrag Preset Script: Processing Raw Data ---";
diag_log format ["Raw Caliber Array: %1", _caliber_array];
diag_log format ["Final Caliber (mm): %1", _caliber];
diag_log format ["Final Caliber (cm): %1", _caliber_cm];
diag_log format ["Final Muzzle Velocity (avg): %1", _muzzleVel_avg];
diag_log format ["Final BC (avg): %1", _bc_avg];
diag_log format ["Final Preset Array: %1", _newPreset];


// --- Add or update the new preset in the ATrag presets list ---
private _presets = profileNamespace getVariable ["ACE_ATragMX_gunList", []];
private _foundIndex = _presets findIf { (_x select 0) == _weapon };

if (_foundIndex != -1) then {
    _presets set [_foundIndex, _newPreset];
    hint format ["Updated ATrag preset for %1.", _weapon];
} else {
    _presets pushBack _newPreset;
    hint format ["Added new ATrag preset for %1.", _weapon];
};

// Save the updated list to your profile
profileNamespace setVariable ["ACE_ATragMX_gunList", _presets];
saveProfileNamespace;

diag_log ">>> ATrag Preset Script: Finished successfully. Check the ATrag UI to confirm."