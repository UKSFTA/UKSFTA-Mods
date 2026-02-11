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
            "Arlit_Toyota",
            "Peral_LHA"
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
    class Peral_LHA;

    // --- LHA Boat Patch ---
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

    // --- Toyota Pickup Base - Reinforced (Ignores 5.56mm) ---
    class Arlit_TOYOTA_BASE: Car_F {
        armor = 300;
        armorStructural = 8;
        wheelDamageThreshold = 0.7;
        wheelDestroyThreshold = 0.9;

        class HitPoints {
            class HitGlass1 { armor = 1; minimalHit = 0.05; passThrough = 0; };
            class HitGlass2: HitGlass1 {};
            class HitGlass3: HitGlass1 {};
            class HitGlass4: HitGlass1 {};
            class HitGlass5: HitGlass1 {};
            class HitGlass6: HitGlass1 {};
            class HitGlass7: HitGlass1 {};
            class HitGlass8: HitGlass1 {};

            class HitLFWheel { armor = 10; minimalHit = 0.05; passThrough = 0; };
            class HitLF2Wheel: HitLFWheel {};
            class HitRFWheel: HitLFWheel {};
            class HitRF2Wheel: HitLFWheel {};

            class HitBody { armor = 30; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 40; minimalHit = 0.15; passThrough = 0.05; };
            class HitFuel { armor = 40; minimalHit = 0.15; passThrough = 0.05; };
        };
    };

    // --- Land Cruiser 200 Base - Armoured Spec (Ignores 5.56mm & 7.62mm) ---
    class arlit_200_16_base: Car_F {
        armor = 550;
        armorStructural = 10;
        wheelDamageThreshold = 0.8;
        wheelDestroyThreshold = 1.0;

        class HitPoints {
            class HitGlass1 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass2: HitGlass1 {};
            class HitGlass3: HitGlass1 {};
            class HitGlass4: HitGlass1 {};
            class HitGlass5: HitGlass1 {};
            class HitGlass6: HitGlass1 {};

            class HitLFWheel { armor = 15; minimalHit = 0.1; passThrough = 0; };
            class HitLF2Wheel: HitLFWheel {};
            class HitRFWheel: HitLFWheel {};
            class HitRF2Wheel: HitLFWheel {};

            class HitBody { armor = 50; minimalHit = 0.2; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.35; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.35; passThrough = 0.05; };
        };
    };
};
