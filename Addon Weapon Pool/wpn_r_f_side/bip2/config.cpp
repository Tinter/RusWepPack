class CfgPatches
{
	class weap_StreetYou_soshki2
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
	class str_bip2: ItemCore
	{
		author="Street-you";
		scope=2;
		displayName="$STR_bpd2";
		picture="\wpn_r_f_side\bip2\b2.paa";
		model="\wpn_r_f_side\bip2\b.p3d";
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
class ItemCore;
class UnderBarrelSlot2: ItemCore
{
	iconPosition[]={0,0};
	iconScale=0;
	access=1;
	iconPinpoint="Bottom";
	displayname="Bipods Slot";
	iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
	linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
	compatibleItems[]=
	{
		"bipod_01_F_snd",
		"bipod_01_F_blk",
		"bipod_01_F_mtp",
		"bipod_02_F_blk",
		"bipod_02_F_tan",
		"bipod_02_F_hex",
		"bipod_03_F_blk",
		"bipod_03_F_oli",
		"str_bip2",
		"str_bid"
	};
	scope=0;
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
