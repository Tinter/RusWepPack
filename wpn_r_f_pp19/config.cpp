class CfgPatches
{
	class weap_StreetYou_pp19_vse
	{
		units[]={};
		weapons[]={
			"str_pp_vit",
			"str_pp_90m1"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class single_medium_optics1;
class single_far_optics2;
class fullauto_medium;
class MuzzleSlot;
class CowsSlot;
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
			   soundSetShot[] = {"CUP_bizon_Closure_SoundSet","CUP_bizon_Shot_SoundSet","CUP_rifle1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"CUP_bizon_Closure_SoundSet","CUP_bizon_ShotSD_SoundSet","CUP_rifle1_SD_Tail_SoundSet"};
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
			   soundSetShot[] = {"CUP_bizon_Closure_SoundSet","CUP_bizon_Shot_SoundSet","CUP_rifle1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"CUP_bizon_Closure_SoundSet","CUP_bizon_ShotSD_SoundSet","CUP_rifle1_SD_Tail_SoundSet"};
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
			"\wpn_r_f\anim\bizon.rtm"
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