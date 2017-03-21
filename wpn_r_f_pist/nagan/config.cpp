class CfgPatches
{
	class weap_StreetYou_nagan
	{
		units[]={};
		weapons[]={
			"str_ngn"
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
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_ACPC2_F;
	class str_ngn: hgun_ACPC2_F
	{
		author="Tripwire Interactive";
    baseWeapon="str_ngn";
		displayName="$STR_ngn_name";
		model="\wpn_r_f_pist\nagan\ngn.p3d";
		picture="\wpn_r_f_pist\nagan\gear_ng_x_ca";
		descriptionshort="$STR_ngn_desc";
        reloadAction = "GestureReloadPistolHeavy02";
        opticsZoomMin = 0.249;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
		magazines[]=
		{
			"7Rnd_nagan_rev"
		};
		initspeed=285;
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
					"\wpn_r_f_pist\nagan\snd\nagantfire.wav",
					0.89999998,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f_pist\nagan\snd\nagantfire.wav",
					0.89999998,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f_pist\nagan\snd\nagantfire.wav",
					0.89999998,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f_pist\nagan\snd\nagantfire.wav",
					0.89999998,
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
			reloadTime=0.07;
			dispersion=0.0040000002;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=27;
			midRangeProbab=0.60000002;
			maxRange=60;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=20;
		};
	};
};
