if (!hasInterface) exitWith {};

// Wait for player object to exist
waitUntil { !isNull player };

// Safety delay to ensure original DIS postInit has run
// Since we are not modifying config.cpp dependencies, we wait slightly
[] spawn {
    sleep 2;

    // 1. Find and remove the original "Check Incognito Status" action
    private _actions = actionIDs player;
    {
        private _params = player actionParams _x;
        if ("Check Incognito Status" in (_params select 0)) then {
            player removeAction _x;
        };
    } forEach _actions;

    // 2. Re-add the action with the conditional visibility
    player addAction [
        "<t color='#FFFF00'>Check Incognito Status</t>",
        {
            params ["_target", "_caller"];
            private _isIncog = missionNamespace getVariable ["DIS_incog_lastState", false];
            private _color = ["#FF0000", "#00FF00"] select _isIncog;
            private _status = ["EXPOSED", "UNDERCOVER"] select _isIncog;
            titleText [format ["<t color='%1' align='center'>%2</t>", _color, _status], "PLAIN DOWN", 0.5, true, true];                },
        nil, 6, true, true, "",
        "(missionNamespace getVariable ['DIS_incog_enabled', true]) && (missionNamespace getVariable ['DIS_incog_ShowUI', true])"
    ];
};
