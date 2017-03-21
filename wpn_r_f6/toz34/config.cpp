class CfgPatches
{
	class weap_StreetYou_tozyaka
	{
		units[]={};
		weapons[]={
			"str_to34_long"
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
	class srifle_EBR_F;
	class str_to34_long: srifle_EBR_F
	{
		author="SAM61,r0tzbua,Millenia";
    baseWeapon="str_to34_long";
		displayName="$STR_to34_name";
		model="\wpn_r_f6\toz34\t34.p3d";
		picture="\wpn_r_f6\toz34\gear_to34_x_Ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\izh43.rtm"
		};
		reloadAction="ReloadMagazine";
		recoil="recoil_ebr";
		initspeed=400;
		discreteDistance[]={100,150};
		discreteDistanceInitIndex=0;
		maxZeroing=150;
		descriptionshort="$STR_ij43_l_desc";
        opticsZoomMin = 0.249;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
		fireSpreadAngle=0.78482461;
		ACE_twistDirection=0;
		ACE_barrelTwist=0;
		ACE_barrelLength=469.89999;
		magazines[]=
		{
			"2pul_drob",
			"2pul_pula"
		};
		reloadMagazineSound[]=
		{
			"wpn_r_f3\izh43\snd\izh43_reloading",
			1.3,
			0.80000001,
			30
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
					"\wpn_r_f3\izh43\snd\2stvola.ogg",
					2,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f3\izh43\snd\2stvola.ogg",
					2,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f3\izh43\snd\2stvola.ogg",
					2,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f3\izh43\snd\2stvola.ogg",
					2,
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
			dispersion=0.0044999998;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			minRange=1;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.60000002;
			maxRange=100;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=60;
		};
	};
};
