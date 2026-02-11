#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {"UKSF_LHA"};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "UKSFTA_Mods_Main",
            "Arlit_Toyota",
            "Peral_LHA"
        };
        author = "UKSF Taskforce Alpha Team";
        authors[] = {"UKSF Taskforce Alpha Team"};
        version = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionStr = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionAr[] = {MAJOR,MINOR,PATCHLVL};
    };
};

class CfgVehicles {
    class Car_F;
    class Peral_LHA;

    // --- LHA Boat Patch ---
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        displayName = "UKSF LHA";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- REINFORCED VEHICLE PATCHES (Direct Class Overwrites) ---
    // Toyota Technicals - Reinforced (Ignores 5.56mm)
    class Arlit_TOYOTA_BASE: Car_F {
        armor = 300;
        armorStructural = 8;
        class HitPoints;
    };

    // Unarmed
    class Arlit_TOYOTA_LC_HZJ79: Arlit_TOYOTA_BASE {
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    // Logi
    class Arlit_TOYOTA_LC_HZJ79_Logi: Arlit_TOYOTA_BASE {
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    // M240
    class Arlit_TOYOTA_LC_HZJ79_M240: Arlit_TOYOTA_BASE {
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    // M2
    class Arlit_TOYOTA_LC_HZJ79_M2: Arlit_TOYOTA_BASE {
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    // Land Cruiser 200 - Armoured Spec (Ignores 5.56mm & 7.62mm)
    class arlit_200_16_base: Car_F {
        armor = 550;
        armorStructural = 10;
        class HitPoints;
    };

    class arlit_200_VX_16: arlit_200_16_base {
        class HitPoints: HitPoints {
            class HitEngine { armor = 60; minimalHit = 0.5; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.5; passThrough = 0.05; };
        };
    };
};
