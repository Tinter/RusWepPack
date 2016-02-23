class CfgPatches
{
	class weap_StreetYou_pp2000000
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
	class str_pp_200: SMG_02_F
	{
		author="DICE";
		displayname="$STR_p20p_name";
		model="\wpn_r_f7\pp20\pp.p3d";
		reloadAction="GestureReloadSMG_03";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Gamma\Smgs\pdw2000\data\Anim\SMG_03.rtm"
		};
		initspeed=420;
		aiRateOfFireDistance=500;
		maxZeroing=200;
		dexterity=3.4000001;
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		magazines[]=
		{
			"30Rnd_mag_kedr",
			"30rnd_mag_trs_kedr"
		};
		picture="\wpn_r_f7\pp20\gear_p2_x_ca";
		descriptionshort="$STR_p20p_desc";
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
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
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
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.3,
					1,
					1000
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
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=70;
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
			midRange=190;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=320;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=35;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.34,0.15000001};
				iconScale=0.2;
				access=1;
				compatibleItems[]=
				{
					"optic_str_pkm_ap",
					"optic_str_kobra_p",
					"optic_str_barsik_p",
					"optic_jorik_p",
					"optic_str_pg210p",
					"optic_str_1p63p",
					"optic_str_kasht2p",
					"optic_str_p1x42",
					"optic_str_pu_p",
					"optic_str_1p78p",
					"optic_str_pk05",
					"optic_str_pkvi",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_Holosight",
					"optic_Holosight_smg"
				};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1456009442";
};
