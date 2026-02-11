#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {"Peral_LHA","Arlit_TOYOTA_LC_HZJ79","Arlit_TOYOTA_LC_HZJ79_Logi","Arlit_TOYOTA_LC_HZJ79_M240","Arlit_TOYOTA_LC_HZJ79_M2","arlit_200_VX_16"}; // Hook will sync these
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

    // --- UKSF LHA (Direct Overwrite of Peral_LHA) ---
    class Peral_LHA: StaticShip {
        scope = 2; 
        scopeCurator = 2;
        displayName = "UKSF LHA"; 
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\default_editorPreview.paa";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Amphibious[] = { "", "", "" };
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- Toyota Technicals Global Armor Base ---
    class Arlit_TOYOTA_BASE: Car_F {
        armor = 300;
        armorStructural = 8;
        class HitPoints;
    };

    // --- UKSF Toyota Overwrites ---
    class Arlit_TOYOTA_LC_HZJ79: Arlit_TOYOTA_BASE {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        scopeCurator = 2;
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_Logi: Arlit_TOYOTA_BASE {
        displayName = "[UKSF] Toyota J79 (Logistics)";
        scope = 2;
        scopeCurator = 2;
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M240: Arlit_TOYOTA_BASE {
        displayName = "[UKSF] Toyota J79 (M240)";
        scope = 2;
        scopeCurator = 2;
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M2: Arlit_TOYOTA_BASE {
        displayName = "[UKSF] Toyota J79 (M2)";
        scope = 2;
        scopeCurator = 2;
        class HitPoints: HitPoints {
            class HitEngine { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.3; passThrough = 0.05; };
        };
    };

    // --- UKSF Land Cruiser Overwrite ---
    class arlit_200_16_base: Car_F {
        armor = 550;
        armorStructural = 10;
        class HitPoints;
    };

    class arlit_200_VX_16: arlit_200_16_base {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        scopeCurator = 2;
        class HitPoints: HitPoints {
            class HitEngine { armor = 60; minimalHit = 0.5; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.5; passThrough = 0.05; };
        };
    };
};
