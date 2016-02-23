class CfgPatches
{
	class weap_StreetYou_vpo_ppsh
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
class UnderBarrelSlot;
class CfgWeapons
{
	class SMG_02_F;
	class str_vpo_ppsh: SMG_02_F
	{
		author="?/Street-you";
		displayname="$STR_vpo_psh_name";
		model="\wpn_r_f4\ppsh\p1.p3d";
		picture="\wpn_r_f4\ppsh\ui\gear_vpo_x_ca";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\str_anim\HaAnm\vpo_psh.rtm"
		};
		initspeed=450;
		dexterity=1.4592;
		maxZeroing=300;
		magazines[]=
		{
			"71rnd_psh_bar",
			"35rnd_psh_trs_mag",
			"35rnd_psh_mag"
		};
		descriptionShort="$STR_vpo_psh_desc";
		modes[]=
		{
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
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
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
							1.2584894,
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
			reloadTime=0.057;
			dispersion=0.0020600001;
			recoil="recoil_auto_prone_smg_02";
			recoilProne="recoil_auto_prone_smg_02";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=310;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: Single
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.2;
			aiRateOfFire=2;
			aiRateOfFireDistance=90;
		};
		class single_medium_optics1: Single
		{
			multiplier=1;
			burst=2;
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=120;
			midRangeProbab=0.69999999;
			maxRange=260;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=170;
		};
		class single_far_optics2: single_medium_optics1
		{
			multiplier=1;
			burst=1;
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.40000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=360;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=65;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.25,0.27000001};
				iconScale=0.2;
				compatibleItems[]=
				{
					"optic_MRCO",
					"optic_Arco",
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_hamr",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_str_pkm_ap",
					"optic_str_kobra_p",
					"optic_str_barsik_p",
					"optic_jorik_p",
					"optic_str_pg210p",
					"optic_str_kasht2p",
					"optic_str_pkasp",
					"optic_str_1p63p",
					"optic_str_1p78p",
					"optic_str_cod2",
					"optic_str_p1x42",
					"optic_str_pkvi",
					"optic_str_pk05",
					"optic_str_elcan"
				};
			};
		};
	};
	class str_ppsh_old: str_vpo_ppsh
	{
		author="?";
		displayname="$STR_psh_name";
		model="\wpn_r_f4\ppsh\p2.p3d";
		picture="\wpn_r_f4\ppsh\ui\gear_psh_x_ca";
		initspeed=480;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\str_anim\HaAnm\ppsh.rtm"
		};
		modes[]=
		{
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
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
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\762_ppsh.wav",
					0.94999999,
					1,
					1300
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
							1.2584894,
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
			reloadTime=0.057;
			dispersion=0.0020600001;
			recoil="recoil_auto_prone_smg_02";
			recoilProne="recoil_auto_prone_smg_02";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=35;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=62;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975577";
};
