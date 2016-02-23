class CfgPatches
{
	class weap_StreetYou_pp19_vse
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
class CfgWeapons
{
	class SMG_02_F;
	class str_pp_vit: SMG_02_F
	{
		author="AbsolutSoft";
		displayname="$STR_pp1901_name";
		model="\wpn_r_f_pp19\pp19vit.p3d";
		reloadAction="GestureReloadSMG_02";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"
		};
		initspeed=460;
		aiRateOfFireDistance=500;
		maxZeroing=300;
		dexterity=1.6474;
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		magazines[]=
		{
			"30rnd_9mm_vit",
			"30rnd_9mm_vit_trs"
		};
		picture="\wpn_r_f_pp19\ui\gear_vit_x_ca";
		descriptionshort="$STR_pp1901_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
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
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",
					1,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",
					1,
					1.1,
					10
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
					"\wpn_r_f_snd\smg\1.wav",
					1,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\1.wav",
					1,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\1.wav",
					1,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\1.wav",
					1,
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
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",
					0.812509,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",
					0.812509,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",
					0.812509,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.092;
			dispersion=0.00174;
			recoil="recoil_auto_smg_02";
			recoilProne="recoil_auto_prone_smg_02";
			minRange=2;
			minRangeProbab=0.5;
			midRange=140;
			midRangeProbab=0.80000001;
			maxRange=260;
			maxRangeProbab=0.039999999;
		};
		class FullAuto: Mode_FullAuto
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
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_01",
					1,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\closure_Sting_02",
					1,
					1.1,
					10
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
					"\wpn_r_f_snd\smg\1.wav",
					1,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\1.wav",
					1,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\1.wav",
					1,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\1.wav",
					1,
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
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",
							1.5848932,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_01",
					0.89125091,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_02",
					0.89125091,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_short_03",
					0.89125091,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\silencer_Sting_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Silencer_Sting_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.086000003;
			dispersion=0.00174;
			recoil="recoil_auto_smg_02";
			recoilProne="recoil_auto_prone_smg_02";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=35;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=2;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=90;
			maxRangeProbab=0.2;
			aiRateOfFire=2;
			aiRateOfFireDistance=90;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=90;
			midRangeProbab=0.69999999;
			maxRange=180;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=170;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.40000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=330;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=320;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=45;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_pbs_vitaz"
				};
				iconPosition[]={0.0099999998,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				access=1;
				iconPosition[]={0.44999999,0.25999999};
				iconScale=0.2;
			};
		};
	};
	class str_pp_90m1: str_pp_vit
	{
		author="HE SAW";
		displayname="$STR_pp90m1_name";
		descriptionshort="$STR_pp90m1_desc";
		model="\wpn_r_f_pp19\m1.p3d";
		picture="\wpn_r_f_pp19\ui\gear_90m1_x_ca.paa";
		reloadAction="GestureReloadSMG_02";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\Handanim_bizon.rtm"
		};
		magazines[]=
		{
			"64rnd_9mm_90m1"
		};
		maxZeroing=200;
		dexterity=2.5536001;
		initspeed=450;
		class FullAuto: FullAuto
		{
			reloadTime=0.076899998;
			dispersion=0.00179;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=55;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_pbs_vitaz"
				};
				iconPosition[]={-0.029999999,0.38999999};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				access=1;
				iconPosition[]={0.46000001,0.25999999};
				iconScale=0.2;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_9x21_Mag;
	class 64rnd_9mm_90m1: 30Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_9x19_90m1_name";
		displaynameshort="";
		picture="\wpn_r_f_pp19\ui\90m1_64b.paa";
		ammo="B_9x19_pula";
		count=64;
		initSpeed=580;
		tracersEvery=0;
		lastRoundsTracer=7;
		descriptionShort="$STR_9x19_90m1_desc";
		mass=18;
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455981507";
};
