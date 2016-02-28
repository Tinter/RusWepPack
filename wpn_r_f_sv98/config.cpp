class CfgPatches
{
	class weap_StreetYou_sv98
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
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class MuzzleSlot;
class asdg_UnderSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class srifle_LRR_F;
	class srifle_DMR_01_F;
	class str_svu_a: srifle_DMR_01_F
	{
		author="Millenia,Sarvs,Naky";
		displayname="$STR_svuaname";
		descriptionshort="$STR_svua_desc";
		discreteDistance[]={100,200,300,400,500};
		discreteDistanceInitIndex=1;
		picture="\wpn_r_f_sv98\ui\gear_vu_x_ca";
		model="wpn_r_f_sv98\svu.p3d";
		maxZeroing=850;
		initspeed=815;
		dexterity=0.96359998;
		deployedPivot="bipod";
		hasBipod="true";
		magazines[]=
		{
			"10rnd_762_svd",
			"10rnd_trs_762_svd",
			"20rnd_762_svd"
		};
		modes[]=
		{
			"Single",
		    "single_close_optics1",
		    "single_medium_optics1",
		    "single_far_optics1"
		};
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
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_01",
					0.39810717,
					1.2,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_closure_02",
					0.39810717,
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
					"wpn_r_f3\svd\snd\svd_qbu88.wav",
					1.2,
					1,
					2000
				};
				begin2[]=
				{
					"wpn_r_f3\svd\snd\svd_qbu88.wav",
					1.2,
					1,
					2000
				};
				begin3[]=
				{
					"wpn_r_f3\svd\snd\svd_qbu88.wav",
					1.2,
					1,
					2000
				};
				begin4[]=
				{
					"wpn_r_f3\svd\snd\svd_qbu88.wav",
					1.2,
					1,
					2000
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_forest",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_houses",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_interior",
							1.9952624,
							1,
							2000
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_meadows",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_tail_trees",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\silencer_DMR_01_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.092299998;
			dispersion=0.00050999998;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=320;
			maxRangeProbab=0.090000004;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=140;
			midRangeProbab=0.80000001;
			maxRange=340;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=340;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=100;
			minRangeProbab=0.050000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.5;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=140;
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.47999999,0.38999999};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
		};
	};
};