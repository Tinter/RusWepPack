class CfgPatches
{
	class weap_StreetYou_soshki
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
	class str_bid: ItemCore
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_bpd";
		picture="\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
		model="\wpn_r_f_side\bid\bid.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod";
			hasBipod="true";
			mass=10;
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
		inertia=0.2;
	};
	class str_bidpla: str_bid
	{
		scope=2;
		displayName="$STR_bpd_plk";
		picture="\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
		model="\wpn_r_f_side\bid\bidpla.p3d";
	};
	class str_bid_svd: ItemCore
	{
		author="AbsolutSoft";
		scope=2;
		displayName="$STR_bpd_svd";
		picture="\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
		model="\wpn_r_f_side\bid\bid_sv.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod";
			hasBipod="true";
			mass=10;
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
		inertia=0.13;
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
