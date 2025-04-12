class CfgMods {
    action = "https://uksfta.github.io/";
    actionName = "Website";
    author = "UKSF Taskforce Alpha Team";
    logo = "z\uksfta\addons\main\data\icon_128_ca.paa";
    logoOver = "z\uksfta\addons\main\data\icon_128_highlight_ca.paa";
    logoSmall = "z\uksfta\addons\main\data\icon_64_ca.paa";
    name = "UKSF Taskforce Alpha Mods";
    overview = "UKSF Taskforce Alpha";
    picture = "z\uksfta\addons\main\data\title_co.paa";
    tooltip = "UKSFTA";
    tooltipOwned = "UKSF Taskforce Alpha";
};

class CfgPatches {
    class Ammo {
        authors[] = {"Jack","Matt"};
        requiredAddons[] = {
            "UK3CB_BAF_Weapons_Ammo",
            "rhsusf_c_weapons",
            "uksfammo"
        };
        requiredVersion = 1.56;
        units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons {
    class SF_L119_BASE;
    class SF_L403A1_B: SF_L119_BASE {
        displayName = "[UKSF] KS-1 Black";
        magazines[] = {
            "rhs_mag_30Rnd_556x45_M855_Stanag",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "UK3CB_BAF_556_30Rnd",
            "UK3CB_BAF_556_30Rnd_Blank",
            "UK3CB_BAF_556_30Rnd_T"
        };
    };
    class SF_L403A1_D: SF_L403A1_B {
        displayName = "[UKSF] KS-1 Desert";
        magazines[] = {
            "rhs_mag_30Rnd_556x45_M855_Stanag",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "UK3CB_BAF_556_30Rnd",
            "UK3CB_BAF_556_30Rnd_Blank",
            "UK3CB_BAF_556_30Rnd_T"
        };
    };
    class SF_SIG_MCX: SF_L119_BASE {
        displayName = "[UKSF] MCX Black";
        magazines[] = {
            "rhs_mag_30Rnd_556x45_M855_Stanag",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
            "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
            "rhs_mag_30Rnd_556x45_Mk318_Stanag",
            "rhs_mag_30Rnd_556x45_Mk262_Stanag",
            "rhs_mag_30Rnd_556x45_M200_Stanag",
            "30Rnd_556x45_Stanag",
            "30Rnd_556x45_Stanag_Tracer_Red",
            "30Rnd_556x45_Stanag_Tracer_Green",
            "30Rnd_556x45_Stanag_Tracer_Yellow",
            "UK3CB_BAF_556_30Rnd",
            "UK3CB_BAF_556_30Rnd_Blank",
            "UK3CB_BAF_556_30Rnd_T",
            "SF_30Rnd_762x35_FMJ",
            "SF_30Rnd_762x35_SS"
        };
    };
};