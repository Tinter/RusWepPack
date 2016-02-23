class CfgPatches
{
	class wpn_r_f_side_amba
	{
		requiredversion=1;
		units[]={};
	};
};
class CfgWeapons
{
	class acc_pointer_IR;
	class InventoryFlashLightItem_Base_F;
	class str_amba: acc_pointer_IR
	{
		author="Street-you";
		displayName="$STR_ambapp";
		descriptionUse="$STR_amba_desc";
		picture="\wpn_r_f_side\amba\pp_ic.paa";
		model="\wpn_r_f_side\amba\amba_pp";
		descriptionShort="$STR_amba_desc";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			class Pointer
			{
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				irDistance=5;
				dayLight="true";
			};
			class FlashLight
			{
			};
		};
		inertia=0.1;
	};
	class str_amba_pm: acc_pointer_IR
	{
		author="Street-you";
		displayName="$STR_ambapm";
		descriptionUse="$STR_amba_desc";
		picture="\wpn_r_f_side\amba\pp_ic.paa";
		model="\wpn_r_f_side\amba\amba_pm";
		descriptionShort="$STR_amba_desc";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=6;
			class Pointer
			{
				irLaserPos="laser pos";
				irLaserEnd="laser dir";
				irDistance=5;
			};
			class FlashLight
			{
			};
		};
		inertia=0.1;
	};
	class str_amba_plnk: str_amba
	{
		author="Street-you";
		displayName="$STR_amba_plk";
		descriptionUse="$STR_amba_desc";
		picture="\wpn_r_f_side\amba\pp_pl_ic.paa";
		model="\wpn_r_f_side\amba\amba_pp_pla";
		descriptionShort="$STR_amba_desc";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
