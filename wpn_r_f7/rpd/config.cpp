class CfgPatches
{
	class weap_StreetYou_rpde
	{
		units[]={};
		weapons[]={
			"str_rpd"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_FullAuto;
class single_medium_optics1;
class single_far_optics2;
class fullauto_medium;
class CfgWeapons
{
	class LMG_Zafir_F;
	class str_rpd: LMG_Zafir_F
	{
		author="Vostok Games";
		displayname="$STR_rpdekt_name";
		descriptionshort="$STR_rpdekt_desc";
		model="\wpn_r_f7\rpd\rp.p3d";
		picture="\wpn_r_f7\rpd\gear_rpd_x_ca";
		magazines[]=
		{
			"100rnd_korob_rpd",
			"100rnd_korob_trs_rpd"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\Anim\mmg_01.rtm"
		};
		reloadAction="GestureReloadMMG01";
		initspeed=735;
		dexterity=0.63840002;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=1;
		maxZeroing=850;
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
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
				begin1[]=
				{
					"\wpn_r_f7\rpd\snd\rpd_ak47.wav",
					1.3,
					1,
					1300
				};
				begin2[]=
				{
					"\wpn_r_f7\rpd\snd\rpd_ak47.wav",
					1.3,
					1,
					1300
				};
				begin3[]=
				{
					"\wpn_r_f7\rpd\snd\rpd_ak47.wav",
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
				};
			};
			reloadTime=0.085699998;
			dispersion=0.00079999998;
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
		class single_medium_optics1: FullAuto
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
			maxRange=950;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=900;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=130;
		};
		class ItemInfo
		{
			priority=1;
		};
	};
};
