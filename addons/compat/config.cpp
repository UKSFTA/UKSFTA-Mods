#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {"UKSF_LHA","UKSFTA_TOYOTA_HZJ79_Tough","UKSFTA_TOYOTA_HZJ79_Logi_Tough","UKSFTA_TOYOTA_HZJ79_M240_Tough","UKSFTA_TOYOTA_HZJ79_M2_Tough","UKSFTA_LC200_VX_16_Tough"}; // Hook will sync these
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "UKSFTA_Mods_Main",
            "Arlit_Toyota",
            "Peral_LHA",
            "rhsusf_c_weapons",
            "rhsusf_main",
            "rhsusf_c_mrzr",
            "uk3cb_baf_vehicles",
            "vtx_factions_us",
            "fza_ah64_weapons"
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
    class StaticShip;

    // --- UKSF LHA (Unique Variant) ---
    class Peral_LHA;
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_Boats";
        displayName = "[UKSF] LHA"; 
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\default_editorPreview.paa";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Amphibious[] = { "", "", "" };
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- UKSF Toyota Variants ---
    class Arlit_TOYOTA_LC_HZJ79;
    class UKSFTA_TOYOTA_HZJ79_Tough: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_Cars";
        armor = 300;
        armorStructural = 8;
        class HitPoints {
            class HitBody { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class UKSFTA_TOYOTA_HZJ79_Logi_Tough: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota J79 (Logistics)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_Cars";
        armor = 300;
        armorStructural = 8;
        class HitPoints {
            class HitBody { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M240;
    class UKSFTA_TOYOTA_HZJ79_M240_Tough: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota J79 (M240)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_Cars";
        armor = 300;
        armorStructural = 8;
        class HitPoints {
            class HitBody { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M2;
    class UKSFTA_TOYOTA_HZJ79_M2_Tough: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota J79 (M2)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_Cars";
        armor = 300;
        armorStructural = 8;
        class HitPoints {
            class HitBody { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    // --- UKSF Land Cruiser Variant ---
    class arlit_200_VX_16;
    class UKSFTA_LC200_VX_16_Tough: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorSubcategory = "EdSubcat_Cars";
        armor = 550;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.2; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.5; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.5; passThrough = 0.05; };
        };
    };
};
