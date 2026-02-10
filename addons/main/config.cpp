#include "script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Main {
        name = "UKSF Taskforce Alpha Mods - Main";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {};
        author = "UKSF Taskforce Alpha Team";
        authors[] = {"UKSF Taskforce Alpha Team"};
        version = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionStr = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionAr[] = {MAJOR,MINOR,PATCHLVL};
    };
};

class CfgMods {
    author = "UKSF Taskforce Alpha Team";
    logo = "z\uksfta\core\data\icon_128_ca.paa";
    logoOver = "z\uksfta\core\data\icon_128_highlight_ca.paa";
    logoSmall = "z\uksfta\core\data\icon_64_ca.paa";
    name = "UKSF Taskforce Alpha Mods";
    overview = "UKSF Taskforce Alpha";
    picture = "z\uksfta\core\data\title_co.paa";
    tooltip = "UKSFTA";
    tooltipOwned = "UKSF Taskforce Alpha";
};
