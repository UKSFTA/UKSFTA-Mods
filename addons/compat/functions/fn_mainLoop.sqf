params ["_args", "_handle"];

//Check for sleep timer timeout
if (time < DIS_incog_sleepTimerPFH) exitWith {};

//Sanitary checks for pass through
if (!DIS_incog_enabled || ((DIS_incog_pSide != DIS_incog_allowedSide) && (DIS_incog_pSide != 3))) exitWith {};

//Checks to see players incognito status and adds or removes EHs to lower weapon when entering or exiting a vehicle
if (DIS_incog_lastState) then {
	
	if (isNil "DIS_incog_GetOutManEH") then {
		DIS_incog_getOutManEH = player addEventHandler ["GetOutMan", {
			DIS_incog_safeTime = time + 2;
			[] spawn {
				sleep 1;
				player action ["WeaponOnBack", player];
			};
		}];
	};
	
	//Checks to see if position is not FFV and puts weapon on back, otherwise just lower
	if (isNil "DIS_incog_GetInManEH") then {
		DIS_incog_GetInManEH = player addEventHandler ["GetInMan", {
			DIS_incog_safeTime = time + 2;
			[] spawn {
				sleep 1;
				private _isFFV = (assignedVehicleRole player isEqualType []) && {(assignedVehicleRole player findIf {_x isEqualType []}) != -1};
				if (!_isFFV) then {		
					player action ["SwitchWeapon", player, player, 100];
				} else {
					player action ["WeaponOnBack", player];
				};
			};
		}];
	};
	
} else {
	
	//Remove EHs when detected
	if (!isNil "DIS_incog_GetOutManEH") then {
		player removeEventHandler ["GetOutMan", DIS_incog_GetOutManEH];
		DIS_incog_GetOutManEH = nil;
	};
	
	if (!isNil "DIS_incog_GetInManEH") then {
		player removeEventHandler ["GetInMan", DIS_incog_GetInManEH];
		DIS_incog_GetInManEH = nil;
	};
};

//Get the vehicle the player is in
private _veh = vehicle player;

//Declaring bool for uniform check
private _uniformNotAllowed = false;
private _vestNotAllowed = false;
private _headgearNotAllowed = false;
private _backpackNotAllowed = false;
private _weaponNotAllowed = false;

//Switches to identify clothes check variable
switch (DIS_incog_UniformMode) do
	{
		case 0: {if !(uniform player in DIS_incog_UniformList) then {_uniformNotAllowed = true;}};
		case 1: {if (uniform player in DIS_incog_UniformList) then {_uniformNotAllowed = true;}};
		case 2: {_uniformNotAllowed = false};
	};

switch (DIS_incog_VestMode) do
	{
		case 0: {if !(vest player in DIS_incog_VestList) then {_vestNotAllowed = true;}};
		case 1: {if (vest player in DIS_incog_VestList) then {_vestNotAllowed = true;}};
		case 2: {_vestNotAllowed = false};
	};
	
switch (DIS_incog_HeadGearMode) do
	{
		case 0: {if !(headgear player in DIS_incog_HeadGearList) then {_headgearNotAllowed = true;}};
		case 1: {if (headgear player in DIS_incog_HeadGearList) then {_headgearNotAllowed = true;}};
		case 2: {_headgearNotAllowed = false};
	};
	
switch (DIS_incog_BackPackMode) do
	{
		case 0: {if !(backpack player in DIS_incog_BackPackList) then {_backpackNotAllowed = true;}};
		case 1: {if (backpack player in DIS_incog_BackPackList) then {_backpackNotAllowed = true;}};
		case 2: {_backpackNotAllowed = false};
	};

switch (DIS_incog_WeaponMode) do
{
    case 0: {if !(currentWeapon player in DIS_incog_WeaponList) then {_weaponNotAllowed = true;}};
    case 1: {if (currentWeapon player in DIS_incog_WeaponList) then {_weaponNotAllowed = true;}};
    case 2: {_weaponNotAllowed = false};
};

//Set clothes check variable
private _clothesNotAllowed = _uniformNotAllowed || _vestNotAllowed || _headgearNotAllowed || _backpackNotAllowed;

//Check for the player sprinting
private _isSprinting = (isNull objectParent player) && (speed player > 13) && (isTouchingGround player);

//Check for main weapon state and define it
private _raisedWeapon = DIS_incog_weaponHeldAllowed && !DIS_incog_inventoryOpen && (_veh == player || currentWeapon player != "") && (time > DIS_incog_safeTime) && !(_isSprinting && DIS_incog_AllowSprinting) && !weaponLowered player;

//Check for holsted handgun and define it
private _holsteredHandgun =
    DIS_incog_holstedAllowed && !_raisedWeapon &&
    {currentWeapon player == ""} &&
    {handgunWeapon player != ""};

//Check for any weapons and define it
private _hasAnyWeapon =
    !_holsteredHandgun && !_raisedWeapon && 
    (
        (primaryWeapon player != "") ||
        (handgunWeapon player != "") ||
        (secondaryWeapon player != "")
    ) &&
    !DIS_incog_weaponHeldAllowed;

//Get proximity values and check for nearby units and define it
if (DIS_incog_proximityDetection) then {
	private _nearbyUnits = player nearEntities ["CAManBase", DIS_incog_Proximity];
	{
		if (!isPlayer _x && side _x != side player && alive _x) then
		{
			DIS_incog_enemyProximity = true;
		};
	} forEach _nearbyUnits;
};

//Get current tracked vehicle and cooldown timer value if there is one
//Check if tracked vehicles cooldown is complete and remove tracker		
if (_veh != player && {_veh != DIS_incog_trackedVeh}) then {
    if (!isNull DIS_incog_trackedVeh && {DIS_incog_firedEH >= 0}) then {
        DIS_incog_trackedVeh removeEventHandler ["Fired", DIS_incog_firedEH];
        DIS_incog_trackedVeh setVariable ["DIS_incog_firedEH", nil];
    };
	
	//Add new tracked vehicle
    DIS_incog_trackedVeh = _veh;

	//If vehicle is untracked, add tracking data and the fired EH
    if (isNil {_veh getVariable "DIS_incog_firedEH"}) then {
        DIS_incog_firedEH = _veh addEventHandler [
            "Fired",
            {
                (_this select 0) setVariable ["DIS_incog_firedUntil", time + DIS_incog_vehCooldown, true];
            }
        ];
        _veh setVariable ["DIS_incog_firedEH", DIS_incog_firedEH, true];
    };
};

//Declare bool for vehicle fired check
private _vehHasFired = false;

//Declare int for vehicle side check
private _vehSideNum = -1;

//Get time since fired last and define it
if (_veh != player) then {
    _vehHasFired = time < (_veh getVariable ["DIS_incog_firedUntil", -1]);
	
	//Check vehicle side
    private _cfg = configOf _veh;
    if (isNumber (_cfg >> "side")) then {
        _vehSideNum = getNumber (_cfg >> "side");
    };
};

//Check each player state and define if they should be incognito
private _shouldBeCaptive = !(_hasAnyWeapon || _vehHasFired || _raisedWeapon || _clothesNotAllowed || _weaponNotAllowed || DIS_incog_weaponThrown || DIS_incog_enemyProximity);

//Override previous value if vehicle is of player side
if (_vehSideNum == DIS_incog_allowedSide) then {
    _shouldBeCaptive = false;
};

if (DIS_incog_ShowUI) then {
	
};

//Set Incognito mode
if (DIS_incog_lastState isNotEqualTo _shouldBeCaptive) then {
	
	//With ACE and Without ACE
    if (DIS_incog_hasACE) then {
        [player, "setCaptive", "DIS_incog", _shouldBeCaptive] call ace_common_fnc_statusEffect_set;
    } else {
        player setCaptive _shouldBeCaptive;
    };
	
	//Set incog_state Variable value
    player setVariable ["DIS_incog_state", _shouldBeCaptive, true];
    DIS_incog_lastState = _shouldBeCaptive;
	
	// Show coloured notification for the new state
	if (DIS_incog_ShowUI) then {
		private _color = ["#FF0000", "#00FF00"] select _shouldBeCaptive;
		private _status = ["EXPOSED", "UNDERCOVER"] select _shouldBeCaptive;
		
		titleText [format ["<t color='%1' align='center'>%2</t>",_color,_status],"PLAIN DOWN",0.5,true,true   ];
	};
};

//If incognito set incogTimer
if (_shouldBeCaptive) then {
    DIS_incog_sleepTimerPFH = time + DIS_incog_incogTimer;

} else {
	//If not incognito set nonIncogTimer
    DIS_incog_sleepTimerPFH = time + DIS_incog_nonIncogTimer;
	DIS_incog_weaponThrown = false;
	DIS_incog_enemyProximity = false;
};


