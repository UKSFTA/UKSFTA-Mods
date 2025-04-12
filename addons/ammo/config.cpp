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
        weapons[] = {
            "UKSF_KS1_B",
            "UKSF_KS1_D",
            "UKSF_MCX"
        };
    };
};

class CfgWeapons {
    class SF_L403A1_B;
    class UKSF_KS1_B: SF_L403A1_B {
        displayName = "[UKSF] KS-1 Black";
        author = "Jack";
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

    class SF_L403A1_D;
    class UKSF_KS1_D: SF_L403A1_D {
        displayName = "[UKSF] KS-1 Desert";
        author = "Jack";
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

    class SF_SIG_MCX;
    class UKSF_MCX: SF_SIG_MCX {
        displayName = "[UKSF] MCX";
        author = "Jack";
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
