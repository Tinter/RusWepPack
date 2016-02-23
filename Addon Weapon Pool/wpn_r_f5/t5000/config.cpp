class CfgPatches
{
	class weap_StreetYou_t5000
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Single;
class FullAuto;
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
class MuzzleSlot;
class UnderBarrelSlot;
class asdg_OpticRail1913;
class CfgWeapons
{
	class srifle_LRR_F;
	class str_ors_t5000: srifle_LRR_F
	{
		author="Street-you";
		displayname="$STR_orsis_t5000_name";
		model="wpn_r_f5\t5000\t50.p3d";
		picture="\wpn_r_f5\t5000\gear_t5_x_ca";
		discreteDistance[]={100,200,300,400,500};
		descriptionshort="$STR_orsis_t5000_desc";
		magazines[]=
		{
			"10Rnd_338_Mag"
		};
		initspeed=925;
		maxZeroing=1550;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"
		};
		reloadAction="DZ_GestureReloadBoAc";
		reloadMagazineSound[]=
		{
			"\wpn_r_f_snd\cz527_reload_dz",
			1,
			1,
			40
		};
		deployedPivot="bipod";
		hasBipod="true";
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
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
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
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_01",
					1,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_02",
					1,
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
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",
					5.0118699,
					1,
					2200
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",
					5.0118699,
					1,
					2200
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",
					5.0118699,
					1,
					2200
				};
				begin4[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",
					5.0118699,
					1,
					2200
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_forest",
							2.2387199,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_houses",
							2.2387199,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_interior",
							2.2387199,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_meadows",
							2.2387199,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_tail_trees",
							2.2387199,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=2.7;
			dispersion=0.00031;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=190;
			midRangeProbab=0.80000001;
			maxRange=400;
			maxRangeProbab=0.050000001;
			aiRateOfFireDistance=420;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=220;
			midRangeProbab=0.80000001;
			maxRange=370;
			maxRangeProbab=0.2;
			aiRateOfFire=5;
			aiRateOfFireDistance=400;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=350;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.75;
			maxRange=1000;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=1000;
			minRangeProbab=0.1;
			midRange=1300;
			midRangeProbab=0.69999999;
			maxRange=1700;
			maxRangeProbab=0.40000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=1700;
			requiredOpticType=2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=127;
			class CowsSlot: asdg_OpticRail1913
			{
				access=1;
				iconPosition[]={0.56999999,0.34};
				iconScale=0.2;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979704";
};
