class CfgPatches
{
	class RusWeapPack_mosin
	{
		units[]={};
		weapons[]={
			"str_3xlin_sn"
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

class InventoryOpticsItem_Base_F;
class CowsSlot;
class MuzzleSlot;
class optic_DMS;
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class cfgRecoils
{
	DZ_Recoil_Mosin[] =
	{
		0,
		0,
		0,
		0.04,
		"0.036943*(0.8)",
		"0.0134348*(2.3)",
		0.08,
		"0.019755*(0.8)",
		"0.003056*(2.3)",
		0.09,
		0,
		0,
		0.14,
		"-0.003138*(0.8)",
		"-0.0005*(2.3)",
		0.08,
		"-0.001177*(0.8)",
		"-0.000188*(2.3)",
		0.12,
		0,
		0
	};
	DZ_Recoil_Mosin_Prone[] =
	{
		0,
		0,
		0,
		0.004,
		"0.036943*(0.01)",
		"0.0134348*(0.1)",
		0.008,
		"0.019755*(0.01)",
		"0.003056*(0.1)",
		0.009,
		0,
		0,
		0.014,
		"-0.003138*(0.01)",
		"-0.0005*(0.1)",
		0.008,
		"-0.001177*(0.01)",
		"-0.000188*(0.1)",
		0.012,
		0,
		0
	};
};
class CfgSounds
{
	class DZ_Bolt_Mosin9130
	{
		name = "DZ_Bolt_Mosin9130";
		sound[] = {"wpn_r_f4\3x_lineika\snd\nagant_shift.ogg", 0.8, 1, 20};
		titles[] = {};
	};
};
class CfgWeapons
{
	class srifle_DMR_01_F;
	class str_3xlin_sn: srifle_DMR_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
    baseWeapon="str_3xlin_sn";
		displayname="$STR_mosr_sn_name";
		model="wpn_r_f4\3x_lineika\mosin9130_sn.p3d";
		picture="\wpn_r_f4\3x_lineika\ui\gear_mos_sn_x_ca";
		discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
		discreteDistanceInitIndex = 2;
		minZeroing=100;
		maxZeroing=1800;
		descriptionshort="$STR_mosr_sn_desc";
		magazines[]=
		{
			"5rnd_762_mos"
		};
		initspeed=870;
		dexterity=1.344;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_06\data\Anim\DMR_06.rtm"
		};
		// reloadAction="DZ_GestureReloadMosin";
		reloadAction="DZ_GestureReloadMosinFast";
		drySound[] =
		{
			"wpn_r_f4\3x_lineika\snd\mosin_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"wpn_r_f4\3x_lineika\snd\nagant_reload.ogg",
			1,
			1,
			10
		};
		deployedPivot="bipod";
		hasBipod="true";
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",
			0.70794576,
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
					"wpn_r_f4\3x_lineika\snd\nagant_fire.ogg",
					1.3,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					0.33333
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_interior",
							1.9952624,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_tail_trees",
							1,
							1,
							2200
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
					"wpn_r_f4\3x_lineika\snd\m1891_shot_sil.ogg",
					1,
					1,
					600
				};
				begin2[]=
				{
					"wpn_r_f4\3x_lineika\snd\m1891_shot_sil.ogg",
					1,
					1,
					600
				};
				begin3[]=
				{
					"wpn_r_f4\3x_lineika\snd\m1891_shot_sil.ogg",
					1,
					1,
					600
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
			reloadTime=2.7;
			dispersion=0.00050000002;
			recoil="DZ_Recoil_Mosin"; // recoil="recoil_single_ebr";
			recoilProne="DZ_Recoil_Mosin_Prone"; // recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.1;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=340;
			maxRangeProbab=0.13;
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
			maxRange=350;
			maxRangeProbab=0.2;
			aiRateOfFire=5;
			aiRateOfFireDistance=300;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=270;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=500;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=300;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.40000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
			requiredOpticType=2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=115;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					// "muzzle_str_bram"
				};
			};
			class CowsSlot: CowsSlot
			{
				access=1;
				iconPosition[]={0.58999997,0.33000001};
				iconScale=0.2;
				compatibleItems[]=
				{
					"optic_str_puold",
					"optic_str_pb"
				};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				// scope=0;
			};
		};
		class bg_weaponparameters
		{
			class onFired_Action
			{
				HandAction = "HLC_GestureRechamberM1903A1_UN";
				Actiondelay = 0.5;
				Sound = "DZ_Bolt_Mosin9130";
				Sound_Location = "RightHandMiddle1";
				hasOptic = 1;
			};
		};
	};
	/*class str_3xlin_sht: str_3xlin_sn
	{
		author="Tripwire Interactive";
		displayname="$STR_mosr_sht_name";
		descriptionshort="$STR_mosr_sht_desc";
		model="wpn_r_f4\3x_lineika\3x_lin_sht.p3d";
		picture="\wpn_r_f4\3x_lineika\ui\gear_mos_sht_x_ca";
		initspeed=860;
		reloadAction="DZ_GestureReloadMosinFast";
		class Single: Single
		{
			reloadTime=1.33;
			dispersion=0.00056999997;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=105;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.022,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					// "muzzle_str_bram"
				};
			};
		};
	};*/
	class optic_str_puold: optic_DMS
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_sc_pu_mos_name";
		picture="\wpn_r_f4\3x_lineika\ui\pu_ic.paa";
		model="\wpn_optic4\pu\pu1";
		descriptionShort="$STR_sc_pu_mos_desc";
		weaponInfoType="RscWeaponZeroing";
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
					modelOptics[]=
					{
						"wpn_r_f4\3x_lineika\pb_scope\scope_pb"
					};
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
				};
			};
		};
	};
	class optic_str_pb: optic_DMS
	{
		scope=2;
		author="Tripwire Interactive";
		displayName="$STR_sc_pb_name";
		picture="\wpn_r_f4\3x_lineika\ui\pb_ic.paa";
		model="\wpn_r_f4\3x_lineika\pb_scope\pb";
		descriptionShort="$STR_sc_pb_desc";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=11;
			optics=1;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsZoomMin=0.042000004;
					opticsZoomMax=0.042000004;
					opticsZoomInit=0.042000004;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					memoryPointCamera="eyeview";
					modelOptics[]=
					{
						"wpn_r_f4\3x_lineika\pb_scope\scope_pb"
					};
					discreteDistance[]={300,500,700,800,900,1000,1100,1200,1300,1400,1500};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=1500;
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					visionMode[]=
					{
						"Normal"
					};
					cameraDir="";
				};
			};
		};
	};
};
