class CfgPatches
{
	class weap_StreetYou_droboviki
	{
		units[]={};
		weapons[]={
			"str_mp133"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"weap_StreetYou_main"
		};
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
class CfgWeapons
{
	class srifle_EBR_F;
	class str_mp133: srifle_EBR_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayname="$STR_mp133_name";
		descriptionshort="$STR_mp133_desc";
		model="wpn_r_f2\mp133\mp133.p3d";
		picture="\wpn_r_f2\mp133\gear_mp133_x_ca";
		reloadAction="GestureReloadM4SSAS";
		discreteDistance[]={50,75};
		maxZeroing=100;
		recoil="recoil_ebr";
        opticsZoomMin = 0.249;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_M24\data\anim\M24.rtm"
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
			"7pul_drob",
			"7pul_pula"
		};
		reloadMagazineSound[]=
		{
			"wpn_r_f2\mp133\snd\reload.ogg",
			1.3,
			1,
			30
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
					"wpn_r_f\snd\1.wav",
					1,
					1,
					2500
				};
				begin2[]=
				{
					"wpn_r_f\snd\1.wav",
					1,
					1,
					2500
				};
				begin3[]=
				{
					"wpn_r_f\snd\1.wav",
					1,
					1,
					2500
				};
				begin4[]=
				{
					"wpn_r_f\snd\1.wav",
					1,
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
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					// "wpn_r_f_snd\12calibr\silence.ogg",
					"wpn_r_f\snd\1.wav",
					1,
					1,
					2500
				};
				begin2[]=
				{
					// "wpn_r_f_snd\12calibr\silence.ogg",
					"wpn_r_f\snd\1.wav",
					1,
					1,
					2500
				};
				begin3[]=
				{
					// "wpn_r_f_snd\12calibr\silence.ogg",
					"wpn_r_f\snd\1.wav",
					1,
					1,
					2500
				};
				begin4[]=
				{
					// "wpn_r_f_snd\12calibr\silence.ogg",
					"wpn_r_f\snd\1.wav",
					1,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
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
			distanceZoomMin=1;
			distanceZoomMax=100;
		};
		class bg_weaponparameters 
		{
			class onFired_Action
			{
				HandAction = "R_f_Pump";
				Actiondelay = 0.2;
				Sound = "r_f_pump";
				Sound_Location = "LeftHandMiddle1";
				hasOptic = 0;
			};
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=95;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={-0.079999998,0.38499999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					// "muzzle_str_salvo"
				};
			};
		};
	};
};