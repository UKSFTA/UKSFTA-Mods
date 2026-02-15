class CfgPatches {
    class UKSFTA_Flags {
        author = "Jack + Ross";
        name = "[UKSF] Flags";
        units[] = {"UKSFTA_Flag_TFA", "Banner_UKSFTA"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Structures_F_Mil_Flags"};
    };
};
class CfgVehicles {
    class FlagCarrier;
    class UKSFTA_Flag_TFA: FlagCarrier {
        author = "Jack + Ross";
        _generalMacro = "UKSFTA_Flag_TFA";
        scope = 2;
        scopeCurator = 2;
        displayName = "Flag (Task Force Alpha)";
        editorCategory = "EdCat_Flags";
        editorSubcategory = "EdSubcat_Flags";
        editorPreview = "z\uksfta\addons\flags\Files\preview\preview_TFA.jpg";
        hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
        hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag", 0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\uksfta\addons\flags\Files\Flags\flag_tfa.paa'";
        };
    };
    class Banner_01_F;
    class Banner_UKSFTA: Banner_01_F {
        displayName = "Banner (Task Force Alpha)";
        editorCategory = "EdCat_Flags";
        editorSubcategory = "EdSubcat_Flags";
        editorPreview = "z\uksfta\addons\flags\Files\preview\preview_TFA.jpg";
        hiddenSelectionsTextures[] = {"z\uksfta\addons\flags\Files\Flags\flag_tfa.paa"};
    };
};
