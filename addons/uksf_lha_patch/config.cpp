class CfgPatches
{
	class LHA_Patch
	{
		name = "[UKSF] LHA";
		requiredAddons[] = {"Peral_LHA"};
		requiredVersion = 1.60;
		units[] = {"UKSF_LHA"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class StaticShip;
	class Peral_LHA;
	class UKSF_LHA: Peral_LHA
	{
		scope = 2; 
		displayName = "UKSF LHA";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\default_editorPreview.paa";
		Aircraft[] = {"fza_ah64d_b2e","TF373_RAF_HC5","vtx_MH60M","UK3CB_BAF_Wildcat_AH1_TRN_8A_Tropical"};
		Amphibious[] = { "", "", "" };
		Boats[] = {{"rhsgref_hidf_assault_boat",8,1,0.2},{"UK3CB_BAF_RHIB_HMG_MTP_RM",9,1.2,2},{"UK3CB_BAF_RHIB_GPMG_MTP_RM",9,1.2,2}};
		hiddenSelections[] = {"screen_01","screen_02","lha_number","flag_01","flag_02"};
		hiddenSelectionsTextures[] = {"Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","Peral_LHA\data\clear_empty_ca.paa","\A3\Data_F\Flags\flag_uk_co.paa","Peral_LHA\data\clear_empty_ca.paa"};
	};
};
