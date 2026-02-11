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
    class Peral_LHA;

    // --- UKSF LHA ---
    // Moving to 'Static' category to ensure it shows in Objects/Ships
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

    // --- UKSF Toyota Technicals (Triple Durability / Realistic Vulnerability) ---
    class Arlit_TOYOTA_LC_HZJ79;
    class UKSF_Toyota_HZJ79: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        
        armor = 360;          // Tripled health pool
        armorStructural = 4;  // Improved resistance to "one-shots"
        
        class HitPoints {
            // Glass: Very fragile (Threshold: 0.36 damage)
            class HitGlass1 { armor = 0.5; minimalHit = 0.001; passThrough = 0; };
            class HitGlass2: HitGlass1 {};
            class HitGlass3: HitGlass1 {};
            class HitGlass4: HitGlass1 {};
            class HitGlass5: HitGlass1 {};
            class HitGlass6: HitGlass1 {};
            class HitGlass7: HitGlass1 {};
            class HitGlass8: HitGlass1 {};

            // Components: Vulnerable to 5.56 (Threshold: 3.6 damage)
            class HitBody { armor = 2; minimalHit = 0.01; passThrough = 0.1; };
            class HitEngine { armor = 2; minimalHit = 0.01; passThrough = 0.1; }; 
            class HitFuel { armor = 2; minimalHit = 0.01; passThrough = 0.1; };
        };
    };

    class UKSF_Toyota_HZJ79_Logi: UKSF_Toyota_HZJ79 { displayName = "[UKSF] Toyota J79 (Logistics)"; };
    class UKSF_Toyota_HZJ79_M240: UKSF_Toyota_HZJ79 { displayName = "[UKSF] Toyota J79 (M240)"; };
    class UKSF_Toyota_HZJ79_M2: UKSF_Toyota_HZJ79 { displayName = "[UKSF] Toyota J79 (M2)"; };

    // --- UKSF Land Cruiser (Armoured SUV Logic) ---
    class arlit_200_VX_16;
    class UKSF_LC200_VX_16: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        
        armor = 550; 
        armorStructural = 6;
        
        class HitPoints {
            // SUV Glass: Tougher (Threshold: 5.5 damage - 5.56 will crack it eventually)
            class HitGlass1 { armor = 1.0; minimalHit = 0.01; passThrough = 0; };
            class HitGlass2: HitGlass1 {};
            class HitGlass3: HitGlass1 {};
            class HitGlass4: HitGlass1 {};
            class HitGlass5: HitGlass1 {};
            class HitGlass6: HitGlass1 {};

            // SUV Engine: Ignores 5.56 (hit 8), but 7.62 (hit 12) damages it (Threshold: 11 damage)
            class HitBody { armor = 4; minimalHit = 0.02; passThrough = 0.1; };
            class HitEngine { armor = 4; minimalHit = 0.02; passThrough = 0.05; }; 
            class HitFuel { armor = 4; minimalHit = 0.02; passThrough = 0.05; };
        };
    };
};
