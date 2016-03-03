class CfgPatches
{
	class weap_StreetYou_ks23
	{
		units[]={};
		weapons[]={
			"str_ks_23"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class srifle_EBR_F;
	class str_ks_23: srifle_EBR_F
	{
		author="AGENT05";
		displayname="$STR_ks23_dr_name";
		descriptionshort="$STR_ks23_dr_desc";
		model="wpn_r_f6\ks23\ks.p3d";
		picture="\wpn_r_f6\ks23\gear_ks_x_ca";
		reloadAction="ReloadMagazine";
		discreteDistance[]={50,100};
		maxZeroing=100;
		recoil="recoil_m320";
        opticsZoomMin = 0.249;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\ks23.rtm"
		};
		drySound[]=
		{
			"wpn_r_f\snd\empty.ogg",
			1,
			1,
			20
		};
		magazines[]=
		{
			"3pul_ks23_kart",
			"3pul_ks23_barrik"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_reload",
			1,
			1,
			10
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		modes[]=
		{
			"Single"
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
				begin1[]=
				{
					"wpn_r_f\snd\1.wav",
					1.4,
					1,
					2500
				};
				begin2[]=
				{
					"wpn_r_f\snd\1.wav",
					1.4,
					1,
					2500
				};
				begin3[]=
				{
					"wpn_r_f\snd\1.wav",
					1.4,
					1,
					2500
				};
				begin4[]=
				{
					"wpn_r_f\snd\1.wav",
					1.4,
					1,
					2500
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
			reloadTime=0.82999998;
			dispersion=0.0049999999;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=55;
			midRangeProbab=0.60000002;
			maxRange=90;
			maxRangeProbab=0.1;
			distanceZoomMin=5;
			distanceZoomMax=120;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=65;
		};
	};
};
