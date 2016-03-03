class CfgPatches
{
	class weap_StreetYou_svt
	{
		units[]={};
		weapons[]={
			"str_svt",
			"str_avt"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_weapons_f_mark_acc",
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_far_optics1;
class InventoryOpticsItem_Base_F;
class CowsSlot;
class CfgWeapons
{
	class srifle_EBR_F;
	class optic_DMS;
	class str_svt: srifle_EBR_F
	{
		author="Tripwire Interactive";
		displayname="$STR_svt_name";
		model="wpn_r_f4\svt\svt.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\data\Anim\DMR_06.rtm"
		};
		initspeed=820;
		dexterity=1.3095;
		mass=140;
		discreteDistance[]={100,200,300,400,500};
		discreteDistanceInitIndex=1;
		maxZeroing=400;
        opticsZoomMin = 0.249;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
		magazines[]=
		{
			"10rnd_762_svt"
		};
		picture="\wpn_r_f4\svt\ui\gear_svt_x_ca";
		descriptionshort="$STR_svt_desc";
		drySound[]=
		{
			"wpn_r_f\snd\empty.ogg",
			1,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
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
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
					1,
					1500
				};
				begin2[]=
				{
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
					1,
					1500
				};
				begin3[]=
				{
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
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
			reloadTime=0.1;
			dispersion=0.00134;
			recoil="recoil_auto_mx";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=320;
			maxRangeProbab=0.059999999;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=320;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=360;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.5;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=110;
			class CowsSlot: CowsSlot
			{
				access=1;
				iconPosition[]={0.63,0.36000001};
				iconScale=0.2;
				compatibleItems[]=
				{
					"optic_str_pu_svt"
				};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
		};
	};
	class str_avt: str_svt
	{
		author="Tripwire Interactive";
		displayname="$STR_avt_name";
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
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
					1,
					1300
				};
				begin2[]=
				{
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
					1,
					1300
				};
				begin3[]=
				{
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
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
			reloadTime=0.1;
			dispersion=0.00134;
			recoil="recoil_auto_mx";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=160;
			midRangeProbab=0.80000001;
			maxRange=320;
			maxRangeProbab=0.059999999;
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
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
					1,
					1300
				};
				begin2[]=
				{
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
					1,
					1300
				};
				begin3[]=
				{
					"wpn_r_f4\svt\snd\762_svt.wav",
					1.2,
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
			reloadTime=0.1;
			dispersion=0.00134;
			recoil="recoil_auto_mx";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=30;
			midRangeProbab=0.80000001;
			maxRange=52;
			maxRangeProbab=0.2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=110;
		};
	};
	class optic_str_pu_svt: optic_DMS
	{
		scope=2;
		author="Bohemia Interactive,Tripwire Interactive";
		displayName="$STR_pu_svt_name";
		picture="\wpn_r_f4\svt\ui\pu_svt.paa";
		model="\wpn_r_f4\svt\pu_svt";
		descriptionShort="$STR_pu_p_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=8;
			optics=1;
			modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.087499999;
					opticsZoomMax=0.087499999;
					opticsZoomInit=0.087499999;
					memoryPointCamera="eye";
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					opticsFlare=0;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
					modelOptics[]=
					{
						"wpn_r_f4\3x_lineika\pb_scope\scope_pb"
					};
				};
			};
		};
	};
};
