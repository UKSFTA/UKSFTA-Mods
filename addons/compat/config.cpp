#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {
            "UKSFTA_Mods_Main",
            "Arlit_Toyota"
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

    // 1. Comprehensive Patch for Toyota Pickup Base
    class Arlit_TOYOTA_BASE: Car_F {
        armor = 800;
        armorStructural = 15;
        
        // Wheel Durability Thresholds
        wheelDamageThreshold = 0.8;
        wheelDestroyThreshold = 1.0;
        wheelDamageRadiusCoef = 0.5;
        wheelDestroyRadiusCoef = 0.25;

        class HitPoints {
            // Glass - Hardened
            class HitGlass1 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass2 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass3 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass4 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass5 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass6 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass7 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass8 { armor = 2; minimalHit = 0.1; passThrough = 0; };

            // Wheels - Reinforced
            class HitLFWheel { armor = 20; minimalHit = 0.1; passThrough = 0; };
            class HitLF2Wheel { armor = 20; minimalHit = 0.1; passThrough = 0; };
            class HitRFWheel { armor = 20; minimalHit = 0.1; passThrough = 0; };
            class HitRF2Wheel { armor = 20; minimalHit = 0.1; passThrough = 0; };

            // Core Integrity - Buffed
            class HitBody {
                armor = 50;
                minimalHit = 0.1;
                passThrough = 0.1;
            };
            class HitEngine {
                armor = 60;
                minimalHit = 0.8; // High threshold for engine smoke
                passThrough = 0.05;
            };
            class HitFuel {
                armor = 60;
                minimalHit = 0.8;
                passThrough = 0.05;
            };
        };
    };

    // 2. Comprehensive Patch for Land Cruiser 200 Base
    class arlit_200_16_base: Car_F {
        armor = 800;
        armorStructural = 15;

        wheelDamageThreshold = 0.8;
        wheelDestroyThreshold = 1.0;

        class HitPoints {
            class HitGlass1 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass2 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass3 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass4 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass5 { armor = 2; minimalHit = 0.1; passThrough = 0; };
            class HitGlass6 { armor = 2; minimalHit = 0.1; passThrough = 0; };

            class HitLFWheel { armor = 20; minimalHit = 0.1; passThrough = 0; };
            class HitLF2Wheel { armor = 20; minimalHit = 0.1; passThrough = 0; };
            class HitRFWheel { armor = 20; minimalHit = 0.1; passThrough = 0; };
            class HitRF2Wheel { armor = 20; minimalHit = 0.1; passThrough = 0; };

            class HitBody {
                armor = 50;
                minimalHit = 0.1;
                passThrough = 0.1;
            };
            class HitEngine {
                armor = 60;
                minimalHit = 0.8;
                passThrough = 0.05;
            };
            class HitFuel {
                armor = 60;
                minimalHit = 0.8;
                passThrough = 0.05;
            };
        };
    };
};
