class CfgPatches
{
	class weap_StreetYou_strela
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_far_optics1;
class single_far_optics2;
class fullauto_medium;
class SlotInfo;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class launch_O_Titan_F;
	class launch_str_Strela: launch_O_Titan_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_strela_name";
		model="\wpn_r_f_gran\strela\strela_launcher.p3d";
		picture="\wpn_r_f_gran\strela\gear_strela_X_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\Handanim_strela.rtm"
		};
		reloadAction="ReloadRPG";
		magazines[]=
		{
			"Strela_9m32"
		};
		weaponInfoType="RscWeaponEmpty";
		modelOptics="-";
		recoil="recoil_titan_long";
		opticsZoomMin=0.25;
		opticsZoomMax=1.1;
		opticsZoomInit=0.5;
		descriptionshort="$STR_strela_desc";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_titan";
			aiRateOfFire=5;
			aiRateOfFireDistance=1900;
			minRange=10;
			minRangeProbab=0.69999999;
			midRange=1800;
			midRangeProbab=0.80000001;
			maxRange=3400;
			maxRangeProbab=0.07;
		};
		class Library
		{
			libtextdesc="The 9K32 Strela 2, NATO reporting name SA-7 Grail, is a man portable, shoulder fired, low altitude surface to air missile system with a high explosive warhead and passive infrared homing guidance. Broadly comparable in performance and inspired by the earlier US Army FIM 43 Redeye, which was designed in 1959, it was the first generation of Soviet man portable SAMs, entering service in 1968, with series production starting in 1970.";
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975356";
};
