class CfgPatches
{
	class weap_StreetYou_mini_monstr
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
class asdg_str_SideW;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class CfgWeapons
{
	class Tavor_base_F;
	class UGL_F;
	class str_ash12: Tavor_base_F
	{
		scope=2;
		author="VostokGames";
		displayname="$STR_ash12_name";
		model="\wpn_r_f5\ash12\ash.p3d";
		picture="\wpn_r_f5\ash12\gear_ah_x_ca";
		reloadAction="GestureReloadTRG";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		initspeed=295;
		dexterity=0.912;
		recoil="recoil_ebr";
		discreteDistance[]={100,200,300};
		discreteDistanceInitIndex=0;
		maxZeroing=300;
		magazines[]=
		{
			"20rnd_127_ash",
			"10rnd_127_vssk"
		};
		descriptionshort="$STR_ash12_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1.2,
			1,
			20
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"fullauto_medium",
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
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					2,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					2,
					1.1,
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
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.4,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.4,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.4,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.4,
					1,
					1500
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
							2,
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
							2,
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
							2.9952624,
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
							2,
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
			reloadTime=0.092299998;
			dispersion=0.00102;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=5;
			minRangeProbab=0.44999999;
			midRange=140;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_01",
					2,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\MX\Closure_Mx_02",
					2,
					1.1,
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
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.5,
					1,
					1700
				};
				begin2[]=
				{
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.5,
					1,
					1700
				};
				begin3[]=
				{
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.5,
					1,
					1700
				};
				begin4[]=
				{
					"\wpn_r_f_snd\krupn\127_ash12.wav",
					1.5,
					1,
					1700
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
							2,
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
							2,
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
							2.9952624,
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
							2,
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
			reloadTime=0.092299998;
			dispersion=0.00102;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=5;
			minRangeProbab=0.40000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.12;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=290;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=300;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.40000001;
			midRange=320;
			midRangeProbab=0.69999999;
			maxRange=440;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=440;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=130;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.36000001,0.16};
				iconScale=0.2;
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.17,0.40000001};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.38,0.73000002};
				iconScale=0.2;
				access=1;
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979704";
};
