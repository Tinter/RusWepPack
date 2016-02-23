class CfgPatches
{
	class weap_StreetYou_soshki3
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class str_bip3: ItemCore
	{
		author="";
		scope=2;
		displayName="$STR_bpd3";
		picture="\wpn_r_f_side\bip3\bip3.paa";
		model="\wpn_r_f_side\bip3\b.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod";
			hasBipod="true";
			mass=9;
			soundBipodDown[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",
				0.70794576,
				1,
				20
			};
			soundBipodUp[]=
			{
				"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",
				0.70794576,
				1,
				20
			};
		};
		inertia=0.15000001;
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
