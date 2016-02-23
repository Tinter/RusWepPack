class CfgPatches
{
	class weap_StreetYou_sr3m
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
class asdg_MuzzleSlot_545R;
class CfgWeapons
{
	class arifle_Katiba_F;
	class UGL_F;
	class str_sr3m: arifle_Katiba_F
	{
		author="Ippe";
		displayname="$STR_srm_l_name";
		model="\wpn_r_f7\sr3\sr.p3d";
		picture="\wpn_r_f7\sr3\gear_srm_x_ca";
		reloadAction="GestureReloadDMR06";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"
		};
		initspeed=-1;
		dexterity=2.1731999;
		recoil="str_recoil_vss";
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		maxZeroing=400;
		magazines[]=
		{
			"30rnd_mag_vss_doz",
			"20rnd_mag_vss_doz",
			"20rnd_mag_vss_sz",
			"30rnd_mag_vss_sz"
		};
		descriptionshort="$STR_val_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR_06_reload",
			1,
			1,
			10
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
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",
					0.56234133,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",
					0.56234133,
					1.2,
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
					"wpn_r_f_snd\vss_val\9a91_shoot.wav",
					1.35,
					1,
					1500
				};
				begin2[]=
				{
					"wpn_r_f_snd\vss_val\9a91_shoot.wav",
					1.35,
					1,
					1500
				};
				begin3[]=
				{
					"wpn_r_f_snd\vss_val\9a91_shoot.wav",
					1.35,
					1,
					1500
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
							1.5848932,
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
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
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
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
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
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
			dispersion=0.00098999997;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=5;
			minRangeProbab=0.44999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=280;
			maxRangeProbab=0.2;
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
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",
					0.56234133,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",
					0.56234133,
					1.2,
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
					"wpn_r_f_snd\vss_val\9a91_shoot.wav",
					1.35,
					1,
					1500
				};
				begin2[]=
				{
					"wpn_r_f_snd\vss_val\9a91_shoot.wav",
					1.35,
					1,
					1500
				};
				begin3[]=
				{
					"wpn_r_f_snd\vss_val\9a91_shoot.wav",
					1.35,
					1,
					1500
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
							1.5848932,
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
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
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\vss_val\vss_shoot.ogg",
					1,
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
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
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
			dispersion=0.00098999997;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.60000002;
			maxRange=55;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=2;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=65;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=2;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=310;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=250;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.40000001;
			midRange=300;
			midRangeProbab=0.64999998;
			maxRange=500;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=600;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=85;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.41999999,0.18000001};
				iconScale=0.2;
				access=1;
				compatibleItems[]=
				{
					"optic_str_Aco",
					"optic_str_eotech",
					"optic_str_pkm_al",
					"optic_str_kobra",
					"optic_str_barsik",
					"optic_str_pg210",
					"optic_str_kasht2",
					"optic_str_pk01",
					"optic_str_1p63",
					"optic_str_1p78",
					"optic_str_pka",
					"optic_jorik_kro",
					"optic_str_nit",
					"optic_str_p1x42_kro",
					"optic_str_pu_kro",
					"optic_str_pkvi_kro",
					"optic_str_pk05_kro"
				};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={-0.050000001,0.28999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_sr3_sil"
				};
			};
		};
	};
	class str_sr3mw: str_sr3m
	{
		author="Ippe";
		displayname="$STR_srm_w_name";
		model="\wpn_r_f7\sr3\srw.p3d";
		picture="\wpn_r_f7\sr3\gear_srm_x_ca";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=85;
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.41999999,0.18000001};
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
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={-0.050000001,0.28999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_sr3_sil"
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1456009442";
};
