class CfgPatches
{
	class weap_StreetYou_pecheneg_pkm_all
	{
		units[]={};
		weapons[]={
			"str_pkm",
			"str_pkm_lh",
			"str_pkp_st",
			"str_pkp_bp"
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
class CowsSlot;
class asdg_OpticRail_dvtl_str;
class asdg_OpticRail1913;
class asdg_str_SideW;
class CfgWeapons
{
	class LMG_Zafir_F;
	class str_pkm: LMG_Zafir_F
	{
		author="SAM61, Sarvs, BULL5H1T";
    baseWeapon="str_pkm";
		displayname="$STR_pkm_pul_name";
		descriptionshort="$STR_pkp_pe4_m_desc";
		model="\wpn_r_f6\pkp\pkm.p3d";
		picture="\wpn_r_f6\pkp\ui\gear_pkm_x_ca";
		magazines[]=
		{
			"100rnd_korob_pkp",
			"100rnd_korob_trs_pkp",
			"200rnd_korob_pkp"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\Anim\mmg_01.rtm"
		};
		reloadAction="GestureReloadMMG01";
		initspeed=820;
		dexterity=0.64639997;
		discreteDistance[]={100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex=1;
		maxZeroing=950;
		drySound[]=
		{
			"wpn_r_f\snd\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_reload",
			1,
			1,
			10
		};
		modes[]=
		{
			"FullAuto",
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
					"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",
					0.56234133,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",
					0.56234133,
					1,
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
			    soundSetShot[] = { "CUP_PKM_Shot_SoundSet", "CUP_PKM_Tail_SoundSet" };
			};
			reloadTime=0.092;
			dispersion=0.001025;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_single_prone_smg_02";
			minRange=1;
			minRangeProbab=0.44999999;
			midRange=165;
			midRangeProbab=0.69999999;
			maxRange=360;
			maxRangeProbab=0.2;
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
					"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_01",
					0.56234133,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Closure_zafir_02",
					0.56234133,
					1,
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
			    soundSetShot[] = { "CUP_PKM_Shot_SoundSet", "CUP_PKM_Tail_SoundSet" };
			};
			reloadTime=0.092;
			dispersion=0.00103;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_single_prone_smg_02";
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=65;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=6;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=70;
			midRangeProbab=0.75;
			maxRange=110;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			burst=4;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=190;
			midRangeProbab=0.75;
			maxRange=400;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			burst=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=550;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=145;
		};
	};
	class str_pkm_lh: str_pkm
	{
		author="SAM61, Sarvs, BULL5H1T";
    baseWeapon="str_pkm_lh";
		displayname="$STR_pkm_l_name";
		descriptionshort="$STR_pkp_pe4_m_desc";
		model="\wpn_r_f6\pkp\pkm_l.p3d";
		picture="\wpn_r_f6\pkp\ui\gear_pkm_x_ca";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=140;
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.33000001};
				iconScale=0.2;
				access=1;
				compatibleItems[]=
				{
					"optic_str_pso1",
					"optic_str_kobra",
					"optic_str_pkas",
					"optic_str_1p29"
				};
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			};
		};
	};
	class str_pkp_st: str_pkm
	{
		author="Street-you/DICE";
    baseWeapon="str_pkp_st";
		displayname="$STR_pkp_pul_name";
		descriptionshort="$STR_pkp_pe4_m_desc";
		model="\wpn_r_f6\pkp\pkp_1.p3d";
		picture="\wpn_r_f6\pkp\ui\gear_pkp_st_x_ca";
		class Single: Single
		{
			dispersion=0.001;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_single_prone_smg_02";
			minRange=1;
			minRangeProbab=0.44999999;
			midRange=165;
			midRangeProbab=0.69999999;
			maxRange=360;
			maxRangeProbab=0.2;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.001;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_single_prone_smg_02";
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.30000001;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=5;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=70;
			midRangeProbab=0.75;
			maxRange=115;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			burst=3;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=190;
			midRangeProbab=0.75;
			maxRange=400;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			burst=1;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=550;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=140;
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.33000001};
				iconScale=0.2;
				access=1;
				compatibleItems[]=
				{
					"optic_str_pso1",
					"optic_str_kobra",
					"optic_str_pkas",
					"optic_str_1p29"
				};
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			};
		};
	};
	class str_pkp_bp: str_pkp_st
	{
		author="Street-you/DICE";
    baseWeapon="str_pkp_bp";
		displayname="$STR_pkp_b_name";
		descriptionshort="$STR_pkp_pe4_bp_desc";
		model="\wpn_r_f6\pkp\pkp_b.p3d";
		picture="\wpn_r_f6\pkp\ui\gear_pkp_bp_x_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f6\pkp\pkp_bp1.rtm"
		};
		dexterity=0.86400002;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=1;
		maxZeroing=650;
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=5;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=70;
			midRangeProbab=0.75;
			maxRange=115;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			burst=3;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=190;
			midRangeProbab=0.75;
			maxRange=450;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			burst=1;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=450;
			midRangeProbab=0.80000001;
			maxRange=800;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=140;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.49000001,0.25};
				iconScale=0.2;
				access=1;
			};
			class PointSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.36000001,0.44999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
};
