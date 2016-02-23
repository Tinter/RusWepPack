class CfgPatches
{
	class weap_StreetYou_ptrs
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
class cfgRecoils
{
	class Default;
	class str_recoil_ptr: Default
	{
		muzzleOuter[]={1.22,4.2199998,1.3200001,1.22};
		muzzleInner[]={0.12,0.12,0.41999999,0.62};
		kickBack[]={0.20299999,0.273};
	};
};
class CfgWeapons
{
	class srifle_EBR_F;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class str_ptrs: srifle_EBR_F
	{
		author="Tripwire Interactive";
		displayname="$STR_ptrs_name";
		descriptionShort="$STR_ptrs_desc";
		model="\wpn_r_f4\ptrs\anti_tank.p3d";
		picture="\wpn_r_f4\ptrs\gear_ptrs_x_ca";
		initspeed=1020;
		mass=250;
		dexterity=0.255;
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=1;
		maxZeroing=400;
		recoil="str_recoil_ptr";
		reloadAction="GestureReloadDMR05";
		magazines[]=
		{
			"5Rnd_mag_ptrs"
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\str_anim\HaAnm\ptrs.rtm"
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
					"wpn_r_f_snd\krupn\145_ptrs.wav",
					2.1071999,
					1,
					2000
				};
				begin2[]=
				{
					"wpn_r_f_snd\krupn\145_ptrs.wav",
					2.1071999,
					1,
					2000
				};
				begin3[]=
				{
					"wpn_r_f_snd\krupn\145_ptrs.wav",
					2.1071999,
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
							2,
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
							2,
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
							2.9952624,
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
							2,
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
							2,
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
			recoilProne="recoil_single_gm6";
			dispersion=0.0037799999;
			minRange=0;
			minRangeProbab=0.1;
			midRange=240;
			midRangeProbab=0.80000001;
			maxRange=420;
			maxRangeProbab=0.090000004;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=280;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975577";
};
