class CfgPatches
{
	class wpn_r_f_side_2
	{
		requiredversion=1;
		units[]={};
	};
};
class CfgWeapons
{
	class acc_pointer_IR;
	class InventoryFlashLightItem_Base_F;
	class str_4tik: acc_pointer_IR
	{
		author="Street-you";
		displayName="$STR_4tik";
		descriptionUse="$STR_4tik_desc";
		picture="\wpn_r_f_side\4tik\4-ic.paa";
		model="\wpn_r_f_side\4tik\4tik";
		descriptionShort="$STR_4tik_desc";
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
	class str_4tik_plank: str_4tik
	{
		author="Street-you";
		displayName="$STR_4tik_pn";
		descriptionUse="$STR_4tik_desc";
		picture="\wpn_r_f_side\4tik\4-ic.paa";
		model="\wpn_r_f_side\4tik\4tik_plank";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
