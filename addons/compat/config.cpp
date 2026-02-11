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
    // Toyota Pickups Global Patch
    class Arlit_TOYOTA_BASE {
        armor = 800;
        armorStructural = 15;

        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; }; 
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    // Land Cruiser 200 Global Patch
    class arlit_200_16_base {
        armor = 800;
        armorStructural = 15;

        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };
};
