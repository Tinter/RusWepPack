class CfgPatches
{
	class weap_StreetYou_vzlomshik
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
class asdg_OpticRail1913;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class srifle_EBR_F;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class str_vzlom: srifle_EBR_F
	{
		author="$STR_pos_avtor";
		displayname="$STR_osv_name";
		descriptionShort="$STR_osv_desc";
		model="\wpn_r_f3\osv96\vzlom.p3d";
		picture="\wpn_r_f3\osv96\ui\gear_osv_x_ca";
		initspeed=900;
		mass=200;
		dexterity=0.42559999;
		discreteDistance[]={100,200,300,400,500};
		discreteDistanceInitIndex=0;
		maxZeroing=1650;
		recoil="recoil_gm6";
		reloadAction="GestureReloadDMR05";
		magazines[]=
		{
			"5Rnd_mag_osv",
			"5Rnd_mag_btz_osv"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\str_anim\HaAnm\osv96.rtm"
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",
			0.95118898,
			1,
			10
		};
		deployedPivot="bipod";
		hasBipod="true";
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up",
			0.70794576,
			1,
			20
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
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_01",
					0.39810717,
					1,
					40
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_closure_02",
					0.39810717,
					1,
					40
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
					"wpn_r_f_snd\krupn\awp1.wav",
					3.1071999,
					1,
					2000
				};
				begin2[]=
				{
					"wpn_r_f_snd\krupn\awp1.wav",
					3.1071999,
					1,
					2000
				};
				begin3[]=
				{
					"wpn_r_f_snd\krupn\awp1.wav",
					3.1071999,
					1,
					2000
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
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			reloadTime=0.12;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			dispersion=0.00033800001;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=150;
			midRangeProbab=0.80000001;
			maxRange=320;
			maxRangeProbab=0.059999999;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.1;
			midRange=180;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=400;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.80000001;
			maxRange=800;
			maxRangeProbab=0.34999999;
			aiRateOfFire=6;
			aiRateOfFireDistance=900;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=700;
			minRangeProbab=0.1;
			midRange=1200;
			midRangeProbab=0.80000001;
			maxRange=1700;
			maxRangeProbab=0.40000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=1800;
			requiredOpticType=2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=200;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.70999998,0.40000001};
				iconScale=0.2;
				access=1;
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979884";
};
