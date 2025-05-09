class CfgPatches {
    class Sapin_TFA {
        author = "Jack + Ross";
        units[] = {"UKSFTA_Flag"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
    };
    class Markers {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1;
    };
};
class CfgVehicles {
    class FlagCarrier;
    class UKSFTA_Flag_F: FlagCarrier {
        author = "Jack + Ross";
        _generalMacro = "UKSFTA_Flag_F";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Task Force Alpha)";
        editorPreview = "z\uksfta\addons\flags\Files\preview\preview_TFA.jpg";
        hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
        hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\uksfta\addons\flags\Files\Flags\flag_tfa.paa'";
        };
    };
    class Banner_01_F;
    class Banner_UKSFTA: Banner_01_F {
        displayName = "Banner (Task Force Alpha)";
        editorPreview = "z\uksfta\addons\flags\Files\preview\preview_TFA.jpg";
        hiddenSelectionsTextures[] = {"z\uksfta\addons\flags\Files\Flags\flag_tfa.paa"};
    };
};
