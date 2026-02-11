#include "script_version.hpp"

#define QUOTE(var) #var

class CfgPatches {
    class UKSFTA_Mods_Main {
        name = "UKSF Taskforce Alpha Mods - Main";
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.62;
        requiredAddons[] = {"A3_Data_F"};
        author = "UKSF Taskforce Alpha Team";
        authors[] = {"UKSF Taskforce Alpha Team"};
        version = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionStr = QUOTE(MAJOR.MINOR.PATCHLVL);
        versionAr[] = {MAJOR,MINOR,PATCHLVL};
    };
};

// Global Editor Category (The "NATO/CSAT" level tab)
class CfgEditorCategories {
    class UKSFTA_Editor_Cat {
        displayName = "UKSF Taskforce Alpha"; 
    };
};

// Global Subcategory (The "Infantry/Cars" folder inside the tab)
class CfgEditorSubcategories {
    class UKSFTA_SubCat_Vehicles {
        displayName = "Vehicles (Reinforced)";
    };
};

// Global Faction (Links to Side and Category)
class CfgFactionClasses {
    class UKSFTA_Faction {
        displayName = "UKSF Taskforce Alpha";
        side = 1; // BLUFOR
        priority = 1;
    };
};

class CfgMods {
    author = "UKSF Taskforce Alpha Team";
    logo = "z\uksfta\addons\main\data\icon_128_ca.paa";
    logoOver = "z\uksfta\addons\main\data\icon_128_highlight_ca.paa";
    logoSmall = "z\uksfta\addons\main\data\icon_64_ca.paa";
    name = "UKSF Taskforce Alpha Mods";
    overview = "UKSF Taskforce Alpha";
    picture = "z\uksfta\addons\main\data\title_co.paa";
    tooltip = "UKSFTA";
    tooltipOwned = "UKSF Taskforce Alpha";
};
