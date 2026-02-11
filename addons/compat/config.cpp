#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {"UKSF_LHA","UKSF_Toyota_HZJ79","UKSF_Toyota_HZJ79_Logi","UKSF_Toyota_HZJ79_M240","UKSF_Toyota_HZJ79_M2","UKSF_LC200_VX_16"}; // Hook will sync these
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

class CfgEditorCategories {
    class UKSFTA_Campaign {
        displayName = "UKSF - Campaign";
    };
};

class CfgEditorSubcategories {
    class UKSFTA_Vehicles {
        displayName = "Reinforced Vehicles";
    };
};

class CfgVehicles {
    class Peral_LHA;
    class Arlit_TOYOTA_LC_HZJ79;
    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class Arlit_TOYOTA_LC_HZJ79_M240;
    class Arlit_TOYOTA_LC_HZJ79_M2;
    class arlit_200_VX_16;

    // --- UKSF LHA (Reinforced Variant) ---
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorCategory = "UKSFTA_Campaign";
        editorSubcategory = "UKSFTA_Vehicles";
        displayName = "[UKSF] LHA"; 
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\default_editorPreview.paa";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Amphibious[] = { "", "", "" };
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- UKSF Toyota Technicals (Reinforced Variants) ---
    class UKSF_Toyota_HZJ79: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorCategory = "UKSFTA_Campaign";
        editorSubcategory = "UKSFTA_Vehicles";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    class UKSF_Toyota_HZJ79_Logi: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota J79 (Logistics)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorCategory = "UKSFTA_Campaign";
        editorSubcategory = "UKSFTA_Vehicles";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    class UKSF_Toyota_HZJ79_M240: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota J79 (M240)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorCategory = "UKSFTA_Campaign";
        editorSubcategory = "UKSFTA_Vehicles";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    class UKSF_Toyota_HZJ79_M2: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota J79 (M2)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorCategory = "UKSFTA_Campaign";
        editorSubcategory = "UKSFTA_Vehicles";
        armor = 400;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.4; passThrough = 0.05; }; 
            class HitFuel { armor = 50; minimalHit = 0.4; passThrough = 0.05; };
        };
    };

    // --- UKSF Land Cruiser (Reinforced Variant) ---
    class UKSF_LC200_VX_16: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "BLU_F";
        editorCategory = "UKSFTA_Campaign";
        editorSubcategory = "UKSFTA_Vehicles";
        armor = 650;
        armorStructural = 12;
        class HitPoints {
            class HitBody { armor = 60; minimalHit = 0.2; passThrough = 0.1; };
            class HitEngine { armor = 70; minimalHit = 0.6; passThrough = 0.05; }; 
            class HitFuel { armor = 70; minimalHit = 0.6; passThrough = 0.05; };
        };
    };
};
