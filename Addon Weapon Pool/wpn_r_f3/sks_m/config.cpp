class CfgPatches
{
	class weap_StreetYou_sks_m
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
class MuzzleSlot;
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class asdg_str_SideW;
class asdg_MuzzleSlot_762R;
class CfgWeapons
{
	class srifle_EBR_F;
	class UGL_F;
	class str_sks_m: srifle_EBR_F
	{
		author="Street-you";
		displayname="$STR_sksm_name";
		model="wpn_r_f3\sks_m\sks_m1.p3d";
		reloadAction="GestureReloadDMR03";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_reload",
			1,
			1,
			10
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		initspeed=735;
		dexterity=1.2180001;
		mass=100;
		recoil="recoil_dmr_03";
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=0;
		maxZeroing=500;
		magazines[]=
		{
			"20rnd_sks_mag"
		};
		picture="\wpn_r_f3\sks_m\ui\gear_sksml_x_ca";
		descriptionshort="$STR_sksm_desc";
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
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_01",
					0.39810699,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_closure_02",
					0.39810699,
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
					"wpn_r_f_snd\ak762\762_sks.wav",
					1.3,
					1,
					1300
				};
				begin2[]=
				{
					"wpn_r_f_snd\ak762\762_sks.wav",
					1.3,
					1,
					1300
				};
				begin3[]=
				{
					"wpn_r_f_snd\ak762\762_sks.wav",
					1.3,
					1,
					1300
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
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_interior",
							1.99526,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_tail_houses",
							1,
							1,
							1800
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
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
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
			reloadTime=0.1;
			dispersion=0.0011699999;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=165;
			midRangeProbab=0.80000001;
			maxRange=340;
			maxRangeProbab=0.059999999;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.75;
			maxRange=310;
			maxRangeProbab=0.2;
			aiRateOfFire=5;
			aiRateOfFireDistance=400;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.40000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=400;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=900;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=250;
			minRangeProbab=0.30000001;
			midRange=450;
			midRangeProbab=0.80000001;
			maxRange=600;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=600;
			requiredOpticType=2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=100;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={0.022,0.41};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.60000002,0.38499999};
				iconScale=0.2;
				access=1;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.41999999,0.43000001};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
	class str_sks_m2: str_sks_m
	{
		author="Street-you";
		displayname="$STR_sksmp_name";
		model="wpn_r_f3\sks_m\sks_m22.p3d";
		picture="\wpn_r_f3\sks_m\ui\gear_sksmp_x_ca";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=24;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={0.022,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.61000001,0.375};
				iconScale=0.2;
				access=1;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.41999999,0.41};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
	class str_sks_m2_gp: str_sks_m
	{
		author="Street-you/TIGG";
		displayname="$STR_sksmpgp_name";
		model="wpn_r_f3\sks_m\sks_m2_gp.p3d";
		picture="\wpn_r_f3\sks_m\ui\gear_sksmp_x_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\str_anim\HaAnm\sks_gp.rtm"
		};
		descriptionshort="$STR_sksmgp_desc";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=24;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={0.022,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.61000001,0.375};
				iconScale=0.2;
				access=1;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
		};
		muzzles[]=
		{
			"this",
			"str_gp30m_gl"
		};
		class str_gp30m_gl: UGL_F
		{
			displayName="$STR_gp30m_gl";
			reloadTime=0.1;
			reloadaction="iHLC_GestureReloadGP30";
			magazines[]=
			{
				"1Rnd_vog25_osk",
				"1Rnd_vog25_dim_w",
				"1Rnd_vog25_dim_r",
				"1Rnd_vog25_dim_g"
			};
			useModelOptics="false";
			useExternalOptic="false";
			cameraDir="op_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=0;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979884";
};
