#include "..\main\script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Compat {
        name = "UKSF Taskforce Alpha Mods - Compatibility & Fixes";
        units[] = {
            "UKSFTA_TOYOTA_HZJ79_Tough",
            "UKSFTA_TOYOTA_HZJ79_M240_Tough",
            "UKSFTA_TOYOTA_HZJ79_M2_Tough",
            "UKSFTA_TOYOTA_HZJ79_Logi_Tough"
        };
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
    class Arlit_TOYOTA_LC_HZJ79;
    class UKSFTA_TOYOTA_HZJ79_Tough: Arlit_TOYOTA_LC_HZJ79 {
        displayName = "[UKSF] Toyota HZJ79 (Reinforced)";
        scope = 2;
        armor = 800;          
        armorStructural = 15; 
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; }; 
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M240;
    class UKSFTA_TOYOTA_HZJ79_M240_Tough: Arlit_TOYOTA_LC_HZJ79_M240 {
        displayName = "[UKSF] Toyota HZJ79 M240 (Reinforced)";
        scope = 2;
        armor = 800;
        armorStructural = 15;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_M2;
    class UKSFTA_TOYOTA_HZJ79_M2_Tough: Arlit_TOYOTA_LC_HZJ79_M2 {
        displayName = "[UKSF] Toyota HZJ79 M2 (Reinforced)";
        scope = 2;
        armor = 800;
        armorStructural = 15;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };

    class Arlit_TOYOTA_LC_HZJ79_Logi;
    class UKSFTA_TOYOTA_HZJ79_Logi_Tough: Arlit_TOYOTA_LC_HZJ79_Logi {
        displayName = "[UKSF] Toyota HZJ79 Logi (Reinforced)";
        scope = 2;
        armor = 800;
        armorStructural = 15;
        class HitPoints {
            class HitBody { armor = 50; minimalHit = 0.1; passThrough = 0.1; };
            class HitEngine { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
            class HitFuel { armor = 60; minimalHit = 0.8; passThrough = 0.05; };
        };
    };
};
