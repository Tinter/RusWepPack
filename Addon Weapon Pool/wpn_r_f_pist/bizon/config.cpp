class CfgPatches
{
	class weap_StreetYou_pp_bizon
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
	class hgun_ACPC2_F;
	class bizon2_pist: hgun_ACPC2_F
	{
		author="CafeRev avatar";
		model="wpn_r_f_pist\bizon\biz2.p3d";
		picture="\wpn_r_f_pist\bizon\gear_biz_x_ca";
		magazines[]=
		{
			"64Rnd_Mag_biz"
		};
		maxZeroing=300;
		initspeed=410;
		recoil="recoil_smg_02";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\Handanim_bizon.rtm"
		};
		displayname="$STR_biz_name";
		descriptionshort="$STR_biz_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Reloads\reload_sting",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"FullAuto"
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
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
					1,
					1000
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
					1,
					1000
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
					1,
					1000
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",
							1.4125376,
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.088;
			dispersion=0.0035000001;
			recoil="recoil_single_SMG_01";
			recoilProne="recoil_single_prone_SMG_01";
			minRange=5;
			minRangeProbab=0.5;
			midRange=80;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.30000001;
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
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
					1,
					1000
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
					1,
					1000
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
					1,
					1000
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_bizon.wav",
					1.4,
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior",
							1.4125376,
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.088;
			dispersion=0.0035000001;
			recoil="recoil_single_SMG_01";
			recoilProne="recoil_single_prone_SMG_01";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=25;
			midRangeProbab=0.80000001;
			maxRange=55;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={701,901};
			mass=70;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.2,0.27000001};
				iconScale=0.2;
				compatibleItems[]=
				{
					"optic_aco",
					"optic_ACO_grn",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
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
					"optic_str_p1x42",
					"optic_str_pkvi",
					"optic_str_pk05"
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455925176";
};
