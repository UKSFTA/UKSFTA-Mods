#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "UKSFTA_Mods_Main",
            "Peral_LHA",
            "Arlit_Toyota",
            "rhsusf_c_weapons",
            "rhsusf_main"
        };
        author = "UKSF Taskforce Alpha Team";
        authors[] = {"UKSF Taskforce Alpha Team"};
        version = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionStr = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionAr[] = {MAJOR,MINOR,PATCHLVL};
    };
};

// Technical Fixes for Malformed Magazines
class CfgMagazines {
    class rhs_mag_762x51_M240_200;
    class arlit_mag_762x51_M240_200: rhs_mag_762x51_M240_200 { scope = 2; };
    class rhs_mag_100rnd_127x99_mag_Tracer_Red;
    class arlit_mag_100rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red { scope = 2; };
};

class CfgVehicles {
    class Peral_LHA;
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        displayName = "UKSF LHA";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // Arlit Toyota Reinforced Variants (UKSF Specific)
    class Arlit_TOYOTA_LC_HZJ79;
    class UKSFTA_TOYOTA_HZJ79_Tough: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota HZJ79 (Reinforced)";
        scope = 2;
        side = 1; // BLUFOR
        faction = "BLU_F";
        armor = 800;          
        armorStructural = 15; 
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; }; 
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M240;
    class UKSFTA_TOYOTA_HZJ79_M240_Tough: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota HZJ79 M240 (Reinforced)";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 800;
        armorStructural = 15;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M2;
    class UKSFTA_TOYOTA_HZJ79_M2_Tough: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota HZJ79 M2 (Reinforced)";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 800;
        armorStructural = 15;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class UKSFTA_TOYOTA_HZJ79_Logi_Tough: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota HZJ79 Logi (Reinforced)";
        scope = 2;
        side = 1;
        faction = "BLU_F";
        armor = 800;
        armorStructural = 15;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };
};
