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
    class Arlit_TOYOTA_LC_HZJ79;
    class UKSF_Toyota_HZJ79: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        
        // REINFORCED LOGIC:
        // High armorStructural means it takes more hits to die.
        // Moderate armor/minimalHit means bullets always cause some damage.
        armor = 200;           // Doubled base health
        armorStructural = 10;  // Tripled (Original is ~2). This is the "Triple Durability"
        
        class HitPoints {
            // Glass: Fragile (Always breaks)
            class HitGlass1 { armor = 0.1; minimalHit = 0.001; passThrough = 0; };
            class HitGlass2: HitGlass1 {};
            class HitGlass3: HitGlass1 {};
            class HitGlass4: HitGlass1 {};
            class HitGlass5: HitGlass1 {};
            class HitGlass6: HitGlass1 {};
            class HitGlass7: HitGlass1 {};
            class HitGlass8: HitGlass1 {};

            // Components: Vulnerable but tough (Threshold: 1.0 damage)
            // Even an ACE 5.56mm round at 800m will still cause damage.
            class HitBody { armor = 2; minimalHit = 0.005; passThrough = 0.1; };
            class HitEngine { armor = 2; minimalHit = 0.005; passThrough = 0.1; }; 
            class HitFuel { armor = 2; minimalHit = 0.005; passThrough = 0.1; };
        };
    };

    class UKSF_Toyota_HZJ79_Logi: UKSF_Toyota_HZJ79 { displayName = "[UKSF] Toyota J79 (Logistics)"; };
    class UKSF_Toyota_HZJ79_M240: UKSF_Toyota_HZJ79 { displayName = "[UKSF] Toyota J79 (M240)"; };
    class UKSF_Toyota_HZJ79_M2: UKSF_Toyota_HZJ79 { displayName = "[UKSF] Toyota J79 (M2)"; };

    // --- UKSF Land Cruiser (Armoured SUV) ---
    class arlit_200_VX_16;
    class UKSF_LC200_VX_16: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        
        armor = 450; 
        armorStructural = 15; // Extremely tanky health pool
        
        class HitPoints {
            // SUV Glass (Threshold: 4.5 damage - 5.56 cracks it easily)
            class HitGlass1 { armor = 1.0; minimalHit = 0.01; passThrough = 0; };
            class HitGlass2: HitGlass1 {};
            class HitGlass3: HitGlass1 {};
            class HitGlass4: HitGlass1 {};
            class HitGlass5: HitGlass1 {};
            class HitGlass6: HitGlass1 {};

            // SUV Components (Threshold: 4.5 damage - 5.56 damages it slowly)
            class HitBody { armor = 4; minimalHit = 0.01; passThrough = 0.1; };
            class HitEngine { armor = 4; minimalHit = 0.01; passThrough = 0.05; }; 
            class HitFuel { armor = 4; minimalHit = 0.01; passThrough = 0.05; };
        };
    };
};
