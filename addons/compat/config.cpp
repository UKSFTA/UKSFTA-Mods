#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {
            "UKSF_LHA",
            "UKSFTA_TOYOTA_HZJ79_Tough",
            "UKSFTA_TOYOTA_HZJ79_Logi_Tough",
            "UKSFTA_TOYOTA_HZJ79_M240_Tough",
            "UKSFTA_TOYOTA_HZJ79_M2_Tough",
            "UKSFTA_LC200_VX_16_Tough"
        };
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
    class Peral_LHA;

    // --- LHA Boat Patch ---
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        displayName = "UKSF LHA";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- REINFORCED UKSFTA VARIANTS ---
    
    // Parent references
    class Arlit_TOYOTA_LC_HZJ79;
    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class Arlit_TOYOTA_LC_HZJ79_M240;
    class Arlit_TOYOTA_LC_HZJ79_M2;
    class arlit_200_VX_16;

    // Toyota Technical Unarmed (Reinforced)
    class UKSFTA_TOYOTA_HZJ79_Tough: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        side = 1; // BLUFOR
        faction = "BLU_F";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    // Toyota Technical Logi (Reinforced)
    class UKSFTA_TOYOTA_HZJ79_Logi_Tough: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota J79 (Logistics)";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    // Toyota Technical M240 (Reinforced)
    class UKSFTA_TOYOTA_HZJ79_M240_Tough: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota J79 (M240)";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    // Toyota Technical M2 (Reinforced)
    class UKSFTA_TOYOTA_HZJ79_M2_Tough: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota J79 (M2)";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    // Land Cruiser Armoured (Reinforced)
    class UKSFTA_LC200_VX_16_Tough: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 650;
        armorStructural = 12;
        class HitPoints {
            class HitBody { armor = 60; minimalHit = 0.2; passThrough = 0.1; };
            class HitEngine { armor = 70; minimalHit = 0.6; passThrough = 0.05; }; 
            class HitFuel { armor = 70; minimalHit = 0.6; passThrough = 0.05; };
        };
    };
};
