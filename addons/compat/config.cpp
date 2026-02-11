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
    class Car_F;
    class StaticShip;

    // --- UKSF LHA ---
    class Peral_LHA;
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        vehicleClass = "UKSFTA_Vehicles"; // Legacy support
        displayName = "[UKSF] LHA"; 
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // --- UKSF Toyota Variants ---
    class Arlit_TOYOTA_LC_HZJ79;
    class UKSF_Toyota_HZJ79: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota J79";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 250;          // Realistic reinforced health
        armorStructural = 6; 
        class HitPoints {
            class HitBody { armor = 20; minimalHit = 0.05; passThrough = 0.1; };
            class HitEngine { armor = 30; minimalHit = 0.1; passThrough = 0.1; }; // 5.56mm will do damage
            class HitFuel { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class UKSF_Toyota_HZJ79_Logi: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota J79 (Logistics)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 250;
        armorStructural = 6;
        class HitPoints {
            class HitBody { armor = 20; minimalHit = 0.05; passThrough = 0.1; };
            class HitEngine { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitFuel { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M240;
    class UKSF_Toyota_HZJ79_M240: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota J79 (M240)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 250;
        armorStructural = 6;
        class HitPoints {
            class HitBody { armor = 20; minimalHit = 0.05; passThrough = 0.1; };
            class HitEngine { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitFuel { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M2;
    class UKSF_Toyota_HZJ79_M2: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota J79 (M2)";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 250;
        armorStructural = 6;
        class HitPoints {
            class HitBody { armor = 20; minimalHit = 0.05; passThrough = 0.1; };
            class HitEngine { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitFuel { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
        };
    };

    // --- UKSF Land Cruiser ---
    class arlit_200_VX_16;
    class UKSF_LC200_VX_16: arlit_200_VX_16 {
        displayName = "[UKSF] Land Cruiser VX '16";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "UKSFTA_Faction";
        editorCategory = "UKSFTA_Editor_Cat";
        editorSubcategory = "UKSFTA_SubCat_Vehicles";
        armor = 400; // Stronger, but vulnerable to heavy fire
        armorStructural = 8;
        class HitPoints {
            class HitBody { armor = 40; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 50; minimalHit = 0.2; passThrough = 0.05; }; // Ignores 5.56, but not 7.62
            class HitFuel { armor = 50; minimalHit = 0.2; passThrough = 0.05; };
        };
    };
};
