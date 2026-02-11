#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {"UKSF_LHA"};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "UKSFTA_Mods_Main",
            "Peral_LHA",
            "Arlit_Toyota",
            "rhsusf_c_weapons",
            "rhsusf_main",
            "rhsusf_c_identity"
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
    class arlit_mag_762x51_M240_200: rhs_mag_762x51_M240_200 {
        scope = 2;
    };

    class rhs_mag_100rnd_127x99_mag_Tracer_Red;
    class arlit_mag_100rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red {
        scope = 2;
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
    class Car_F;
    class Arlit_TOYOTA_BASE: Car_F {
        armor = 400;          // Significantly tougher base
        armorStructural = 12; // Prevents "one-shot" component failures
        damageResistance = 0.01;
        
        class HitPoints {
            class HitBody {
                armor = 50;
                minimalHit = 0.1;
                passThrough = 0.1;
            };
            class HitEngine {
                armor = 40;
                minimalHit = 0.5; // High threshold: small rounds won't cause smoke
                passThrough = 0.1;
            };
            class HitFuel {
                armor = 40;
                minimalHit = 0.5;
                passThrough = 0.1;
            };
            class HitLFWheel { armor = 20; minimalHit = 0.1; };
            class HitLF2Wheel { armor = 20; minimalHit = 0.1; };
            class HitRFWheel { armor = 20; minimalHit = 0.1; };
            class HitRF2Wheel { armor = 20; minimalHit = 0.1; };
        };
    };

    // Variants automatically inherit the new base values
    class Arlit_TOYOTA_LC_HZJ79;
    class Arlit_TOYOTA_LC_HZJ79_M240;
    class Arlit_TOYOTA_LC_HZJ79_M2;
    class Arlit_TOYOTA_LC_HZJ79_Logi;
};

// Weapons Patches
class CfgWeapons {
    // Placeholder for weapon patches
};

// Ammo Patches
class CfgAmmo {
    // Placeholder for ammo patches
};
