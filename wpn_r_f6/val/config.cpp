class CfgPatches
{
	class weap_StreetYou_valik
	{
		units[]={};
		weapons[]={
			"str_as_val",
			"str_as_val_w"
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
class CowsSlot;
class PointerSlot;
class asdg_str_SideW;
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class cfgRecoils
{
	class recoil_default;
	class str_recoil_vss: recoil_default
	{
		muzzleOuter[]={0.5,1,-0.60000002,0.30000001};
		kickBack[]={0.02,0.079999998};
		temporary=0.0049999999;
	};
};
class CfgWeapons
{
	class arifle_Katiba_F;
	class UGL_F;
	class str_as_val: arifle_Katiba_F
	{
		author="SAM61, Millenia\Noble Empire Corp.";
		displayname="$STR_val_name";
		model="\wpn_r_f6\val\as.p3d";
		picture="\wpn_r_f6\val\ui\gear_val_x_ca";
		reloadAction="GestureReloadDMR03";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_03\data\Anim\DMR_03.rtm"
		};
		initspeed=-1;
		dexterity=1.2456;
		fireLightDuration=0;
		fireLightIntensity=0;
		discreteDistance[]={100,200,300};
		discreteDistanceInitIndex=0;
		maxZeroing=400;
		magazines[]=
		{
			"20rnd_mag_vss_doz",
			"10rnd_mag_vss_doz",
			"10rnd_mag_vss_doz_trs",
			"30rnd_mag_vss_doz",
			"10rnd_mag_vss_sz",
			"10rnd_mag_vss_sz_trs",
			"20rnd_mag_vss_sz",
			"30rnd_mag_vss_sz"
		};
		descriptionshort="$STR_val_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_reload",
			1,
			1,
			10
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
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
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
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
				};
				begin4[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.085699998;
			dispersion=0.00098000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=5;
			minRangeProbab=0.44999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=280;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
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
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
				};
				begin4[]=
				{
					"wpn_r_f6\val\snd\valvss_bizon.wav",
					1,
					1,
					1500
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
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.085699998;
			dispersion=0.00098000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.60000002;
			maxRange=55;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=2;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=65;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=2;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=310;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=250;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.40000001;
			midRange=300;
			midRangeProbab=0.64999998;
			maxRange=500;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=600;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=120;
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
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.40000001,0.41};
				iconScale=0.2;
			};
		};
	};
	class str_as_val_w: str_as_val
	{
		author="SAM61, Millenia\Noble Empire Corp.";
		displayname="$STR_val_w_name";
		model="\wpn_r_f6\val\as_w.p3d";
		picture="\wpn_r_f6\val\ui\gear_val_w_x_ca";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=120;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.68000001,0.41};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.40000001,0.41};
				iconScale=0.2;
			};
		};
	};
};

