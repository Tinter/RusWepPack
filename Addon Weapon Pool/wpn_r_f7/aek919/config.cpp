class CfgPatches
{
	class weap_StreetYou_aek919
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
class asdg_MuzzleSlot_545R;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Rook40_F;
	class str_aek919: hgun_Rook40_F
	{
		author="PROTOTYPE,Rock'n'Roll";
		displayName="$STR_919aek_name";
		model="\wpn_r_f7\aek919\919.p3d";
		picture="\wpn_r_f7\aek919\gear_919_x_ca";
		initspeed=315;
		maxZeroing=100;
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		descriptionshort="$STR_919aek_desc";
		magazines[]=
		{
			"30Rnd_Mag_919ae"
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
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",
					0.15848932,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",
					0.15848932,
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
			reloadTime=0.066600002;
			dispersion=0.0046999999;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=1;
			minRangeProbab=0.2;
			midRange=80;
			midRangeProbab=0.64999998;
			maxRange=160;
			maxRangeProbab=0.1;
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
					"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01",
					0.15848932,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02",
					0.15848932,
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
			reloadTime=0.066600002;
			dispersion=0.0048000002;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=33;
			midRangeProbab=0.60000002;
			maxRange=65;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=45;
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.02,0.2};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_pbs_aek919"
				};
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.31999999,0.029999999};
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
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class 30Rnd_Mag_919ae: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x18_pula";
		count=30;
		displayname="$STR_mag919_name";
		picture="\wpn_r_f7\aek919\30rnd_919";
		descriptionShort="$STR_mag919_desc";
		displaynameshort="";
		initSpeed=365;
		mass=13;
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1456009442";
};
