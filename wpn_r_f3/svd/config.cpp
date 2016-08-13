class CfgPatches
{
	class weap_StreetYou_svd_black
	{
		units[]={};
		weapons[]={
			"str_svd",
			"str_svdp"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class Single;
class FullAuto;
class CowsSlot;
class asdg_UnderSlot;
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class CfgWeapons
{
	class srifle_DMR_01_F;
	class str_svd: srifle_DMR_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayname="$STR_svdb_name";
		model="wpn_r_f3\svd\svd.p3d";
		picture="\wpn_r_f3\svd\ui\gear_svd_b_x_ca";
		discreteDistance[]={100,200,300,400,500};
		descriptionshort="$STR_svdb_desc";
		magazines[]=
		{
			"10rnd_762_svd",
			"10rnd_trs_762_svd",
			"20rnd_762_svd"
		};
		dexterity=1.16;
		initspeed=830;
		maxZeroing=850;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\data\Anim\DMR_03.rtm"
		};
		reloadAction="GestureReloadDMR04";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_reload",
			0.35117999,
			1,
			10
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
				"StandardSound"
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
			    soundSetShot[] = {"CUP_svd_Closure_SoundSet","CUP_akm_Shot_SoundSet","CUP_mmg1_Tail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion=0.00046000001;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=340;
			maxRangeProbab=0.2;
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
			maxRange=360;
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
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=500;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=400;
			minRangeProbab=0.1;
			midRange=650;
			midRangeProbab=0.69999999;
			maxRange=1050;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=1050;
			requiredOpticType=2;
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
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.40000001,0.64999998};
				iconScale=0.2;
				access=1;
				displayname="Bipods Slot";
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				scope=0;
			};
		};
	};
	class str_svdp: str_svd
	{
		author="$STR_A3_Bohemia_Interactive";
		displayname="$STR_svdbp_desc";
		model="wpn_r_f3\svd\svd_p.p3d";
		picture="\wpn_r_f3\svd\ui\gear_svd_b_x_ca";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=140;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.68000001,0.41};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.40000001,0.66000003};
				iconScale=0.2;
				access=1;
				displayname="Bipods Slot";
				linkProxy="\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				scope=0;
			};
		};
	};
};