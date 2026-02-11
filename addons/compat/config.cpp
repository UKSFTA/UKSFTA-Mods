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
            "rhsusf_main"
        };
        author = "UKSF Taskforce Alpha Team";
        authors[] = {"UKSF Taskforce Alpha Team"};
        version = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionStr = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionAr[] = {MAJOR,MINOR,PATCHLVL};
    };
};

class CfgVehicles {
    // --- TOP-LEVEL FORWARD DECLARATIONS ---
    class HitPoints;
    class HitBody;
    class HitEngine;
    class HitFuel;
    class HitGlass1;
    class HitGlass2;
    class HitGlass3;
    class HitGlass4;
    class HitGlass5;
    class HitGlass6;
    class HitGlass7;
    class HitGlass8;

    class Peral_LHA;
    class Arlit_TOYOTA_LC_HZJ79;
    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class Arlit_TOYOTA_LC_HZJ79_M240;
    class Arlit_TOYOTA_LC_HZJ79_M2;
    class arlit_200_VX_16;

    // --- UKSF LHA ---
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        displayName = "[UKSF] LHA"; 
        vehicleClass = "Ships";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Amphibious[] = { "", "", "" };
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- UKSF Toyota Technicals ---
    class UKSF_Toyota_HZJ79: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2; scopeCurator = 2; side = 1; faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat"; editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 200; armorStructural = 6; damageResistance = 0.004; crewVulnerable = 1;
        class HitPoints: HitPoints {
            class HitGlass1: HitGlass1 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass2: HitGlass2 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass3: HitGlass3 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass4: HitGlass4 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass5: HitGlass5 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass6: HitGlass6 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass7: HitGlass7 { armor = 0.1; minimalHit = 0.001; };
            class HitGlass8: HitGlass8 { armor = 0.1; minimalHit = 0.001; };
            class HitBody: HitBody { armor = 2; minimalHit = 0.01; };
            class HitEngine: HitEngine { armor = 2; minimalHit = 0.01; }; 
            class HitFuel: HitFuel { armor = 2; minimalHit = 0.01; };
        };
    };

    class UKSF_Toyota_HZJ79_Logi: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota J79 (Logistics)";
        scope = 2; scopeCurator = 2; side = 1; faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat"; editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 200; armorStructural = 6; damageResistance = 0.004; crewVulnerable = 1;
        class HitPoints: HitPoints {
            class HitBody: HitBody { armor = 2; minimalHit = 0.01; };
            class HitEngine: HitEngine { armor = 2; minimalHit = 0.01; }; 
        };
    };

    class UKSF_Toyota_HZJ79_M240: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota J79 (M240)";
        scope = 2; scopeCurator = 2; side = 1; faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat"; editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 200; armorStructural = 6; damageResistance = 0.004; crewVulnerable = 1;
        class HitPoints: HitPoints {
            class HitBody: HitBody { armor = 2; minimalHit = 0.01; };
            class HitEngine: HitEngine { armor = 2; minimalHit = 0.01; }; 
        };
    };

    class UKSF_Toyota_HZJ79_M2: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota J79 (M2)";
        scope = 2; scopeCurator = 2; side = 1; faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat"; editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 200; armorStructural = 6; damageResistance = 0.004; crewVulnerable = 1;
        class HitPoints: HitPoints {
            class HitBody: HitBody { armor = 2; minimalHit = 0.01; };
            class HitEngine: HitEngine { armor = 2; minimalHit = 0.01; }; 
        };
    };

    // --- UKSF Land Cruiser (Armoured SUV) ---
    class UKSF_LC200_VX_16: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2; scopeCurator = 2; side = 1; faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat"; editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 450; armorStructural = 10; damageResistance = 0.004; crewVulnerable = 1;
        class HitPoints: HitPoints {
            class HitGlass1: HitGlass1 { armor = 1.0; minimalHit = 0.01; };
            class HitGlass2: HitGlass2 { armor = 1.0; minimalHit = 0.01; };
            class HitGlass3: HitGlass3 { armor = 1.0; minimalHit = 0.01; };
            class HitGlass4: HitGlass4 { armor = 1.0; minimalHit = 0.01; };
            class HitGlass5: HitGlass5 { armor = 1.0; minimalHit = 0.01; };
            class HitGlass6: HitGlass6 { armor = 1.0; minimalHit = 0.01; };
            class HitBody: HitBody { armor = 4; minimalHit = 0.01; };
            class HitEngine: HitEngine { armor = 4; minimalHit = 0.01; }; 
            class HitFuel: HitFuel { armor = 4; minimalHit = 0.01; };
        };
    };
};
