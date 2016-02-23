class CfgPatches
{
	class weap_StreetYou_ppska
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_far_optics1;
class single_far_optics2;
class fullauto_medium;
class SlotInfo;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class SMG_02_F;
	class str_pps43: SMG_02_F
	{
		author="D.Kruger";
		displayname="$STR_ppPPS_name";
		model="\wpn_r_f4\pps\pps.p3d";
		picture="\wpn_r_f4\pps\gear_pps_x_ca";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f4\pps\pps43.rtm"
		};
		initspeed=430;
		dexterity=1.4592;
		maxZeroing=200;
		magazines[]=
		{
			"35rnd_psh_trs_mag",
			"35rnd_psh_mag"
		};
		descriptionShort="$STR_ppPPS_desc";
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
				begin1[]=
				{
					"\wpn_r_f_snd\smg\9mm_2.wav",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\smg\9mm_2.wav",
					1,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\smg\9mm_2.wav",
					1,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\smg\9mm_2.wav",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_interior",
							1.2584894,
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
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"wpn_r_f_snd\smg\762_pps_sil.wav",
					0.95899999,
					1,
					400
				};
				begin2[]=
				{
					"wpn_r_f_snd\smg\762_pps_sil.wav",
					0.95899999,
					1,
					400
				};
				begin3[]=
				{
					"wpn_r_f_snd\smg\762_pps_sil.wav",
					0.95899999,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			dispersion=0.0020600001;
			recoil="recoil_auto_prone_smg_02";
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
			burst=3;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=40;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.2;
			aiRateOfFire=2;
			aiRateOfFireDistance=90;
		};
		class single_medium_optics1: FullAuto
		{
			multiplier=1;
			burst=2;
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=120;
			midRangeProbab=0.69999999;
			maxRange=260;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=170;
		};
		class single_far_optics2: single_medium_optics1
		{
			multiplier=1;
			burst=1;
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.40000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=360;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=60;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={-0.050000001,0.38};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_str_pps"
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975577";
};
