class CfgPatches
{
	class weap_StreetYou_tihii_mini_monstr
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
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_str_SideW;
class CfgWeapons
{
	class srifle_DMR_01_F;
	class UGL_F;
	class str_sv1367: srifle_DMR_01_F
	{
		scope=2;
		author="Infinity Ward";
		displayname="$STR_sv67_name";
		model="\wpn_r_f5\vssk\sv1367.p3d";
		picture="\wpn_r_f5\vssk\gear_vssk_x_ca";
		reloadAction="GestureReloadTRG";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		initspeed=295;
		dexterity=0.89999998;
		recoil="recoil_ebr";
		discreteDistance[]={100,200,300};
		discreteDistanceInitIndex=0;
		maxZeroing=600;
		magazines[]=
		{
			"10rnd_127_vssk"
		};
		descriptionshort="$STR_sv67_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1.2,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Closure_01",
					0.39810699,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_Closure_02",
					0.39810699,
					1,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_01",
					1.258489,
					1,
					300
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_02",
					1.258489,
					1,
					300
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_short_03",
					1.258489,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_forest",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_houses",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_interior",
							1.41254,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_meadows",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_tail_trees",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=1.33;
			dispersion=0.00085000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=175;
			midRangeProbab=0.69999999;
			maxRange=330;
			maxRangeProbab=0.1;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.2;
			midRange=160;
			midRangeProbab=0.30000001;
			maxRange=320;
			maxRangeProbab=0.40000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=320;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.30000001;
			midRange=320;
			midRangeProbab=0.60000002;
			maxRange=670;
			maxRangeProbab=0.34999999;
			aiRateOfFire=8;
			aiRateOfFireDistance=670;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=145;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.51999998,0.36000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.44999999,0.72000003};
				iconScale=0.2;
				access=1;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979704";
};
