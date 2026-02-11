#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {"UKSF_LHA"};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"UKSFTA_Mods_Main", "Peral_LHA", "Arlit_Toyota"};
        author = "UKSF Taskforce Alpha Team";
        authors[] = {"UKSF Taskforce Alpha Team"};
        version = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionStr = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionAr[] = {MAJOR,MINOR,PATCHLVL};
    };
};

// LHA Boat Patch
class CfgVehicles {
    class Peral_LHA;
    class UKSF_LHA: Peral_LHA {
        scope = 2; 
        displayName = "UKSF LHA";
        editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\default_editorPreview.paa";
        Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
        Amphibious[] = { "", "", "" };
        Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
        hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
        hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
    };

    // Arlit Toyota Global Patches (Direct Overwrites)
    class Arlit_TOYOTA_LC_HZJ79 {
        armor = 250; // Increased from 120
        armorStructural = 10; // Increased from 4
        class HitPoints {
            class HitBody {
                armor = 10; // Increased from 2
                passThrough = 0.2; // Reduced from 0.5
            };
            class HitEngine {
                armor = 5; // Increased from 1
                passThrough = 0.1;
            };
            class HitFuel {
                armor = 5; // Increased from 1
                passThrough = 0.1;
            };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M240: Arlit_TOYOTA_LC_HZJ79 {
        armor = 250;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 10; passThrough = 0.2; };
            class HitEngine { armor = 5; passThrough = 0.1; };
            class HitFuel { armor = 5; passThrough = 0.1; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M2: Arlit_TOYOTA_LC_HZJ79_M240 {
        armor = 250;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 10; passThrough = 0.2; };
            class HitEngine { armor = 5; passThrough = 0.1; };
            class HitFuel { armor = 5; passThrough = 0.1; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_Logi: Arlit_TOYOTA_LC_HZJ79 {
        armor = 250;
        armorStructural = 10;
        class HitPoints {
            class HitBody { armor = 10; passThrough = 0.2; };
            class HitEngine { armor = 5; passThrough = 0.1; };
            class HitFuel { armor = 5; passThrough = 0.1; };
        };
    };
};

// Weapons Patches
class CfgWeapons {
    // Placeholder for weapon patches
};

// Ammo Patches
class CfgAmmo {
    // Placeholder for ammo patches
};
