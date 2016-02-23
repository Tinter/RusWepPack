class CfgPatches
{
	class weap_StreetYou_svdk
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
class asdg_UnderSlot;
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class CfgWeapons
{
	class srifle_EBR_F;
	class str_svdk: srifle_EBR_F
	{
		author="rework Street-you";
		displayname="$STR_svdk_name";
		model="wpn_r_f3\svdk\svdk2.p3d";
		picture="\wpn_r_f3\svdk\gear_sk_x_ca";
		discreteDistance[]={100,200,300,400,500};
		descriptionshort="$STR_svdk_desc";
		magazines[]=
		{
			"10rnd_svdk_mag"
		};
		dexterity=1.16;
		initspeed=780;
		maxZeroing=850;
		recoil="recoil_dmr_05";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"
		};
		reloadAction="GestureReloadDMR05";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",
			0.51179999,
			1,
			10
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
					"\wpn_r_f_snd\svd\m21_fire.ogg",
					1.2,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\svd\m21_fire.ogg",
					1.2,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\svd\m21_fire.ogg",
					1.2,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\svd\m21_fire.ogg",
					1.2,
					1,
					2500
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
					"wpn_r_f_snd\svd\hk417_silent.ogg",
					0.94999999,
					1,
					600
				};
				begin2[]=
				{
					"wpn_r_f_snd\svd\hk417_silent.ogg",
					0.94999999,
					1,
					600
				};
				begin3[]=
				{
					"wpn_r_f_snd\svd\hk417_silent.ogg",
					0.94999999,
					1,
					600
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_interior",
							1.41254,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
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
			};
			reloadTime=0.12;
			dispersion=0.00039;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=370;
			maxRangeProbab=0.2;
			aiRateOfFire=3;
			aiRateOfFireDistance=300;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=400;
			maxRangeProbab=0.2;
			aiRateOfFire=5;
			aiRateOfFireDistance=400;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=500;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=400;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1150;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=1150;
			requiredOpticType=2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=145;
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.68000001,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.37,0.64999998};
				iconScale=0.2;
				access=1;
				displayname="Bipods Slot";
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				scope=0;
			};
		};
	};
	class str_svdk_w: str_svdk
	{
		author="rework Street-you";
		displayname="$STR_svdkw_name";
		model="wpn_r_f3\svdk\svdk3.p3d";
		picture="\wpn_r_f3\svdk\gear_sk_x_ca";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=145;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.68000001,0.40000001};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.37,0.64999998};
				iconScale=0.2;
				access=1;
				displayname="Bipods Slot";
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				scope=0;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979884";
};
