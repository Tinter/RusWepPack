class CfgPatches
{
	class weap_StreetYou_pmm_i_td
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
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Rook40_F;
	class str_pmm: hgun_Rook40_F
	{
		author="SAM61,Alexandr_l";
		displayName="$STR_pmm_name";
		model="\wpn_r_f_pist\pmm\pmm.p3d";
		picture="\wpn_r_f_pist\pmm\gear_pmm_x_ca";
		initspeed=400;
		descriptionshort="$STR_pb_desc";
		magazines[]=
		{
			"8Rnd_Mag_pm"
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
					"\wpn_r_f_snd\pb\pm_shoot.ogg",
					1,
					1,
					700
				};
				begin2[]=
				{
					"\wpn_r_f_snd\pb\pm_shoot.ogg",
					1,
					1,
					700
				};
				begin3[]=
				{
					"\wpn_r_f_snd\pb\pm_shoot.ogg",
					1,
					1,
					700
				};
				begin4[]=
				{
					"\wpn_r_f_snd\pb\pm_shoot.ogg",
					1,
					1,
					700
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
			dispersion=0.0050900001;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=60;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=25;
			class PointerSlot
			{
				access=1;
				compatibleitems[]=
				{
					"str_amba_pm"
				};
				displayname="Pointer Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				scope=0;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455925176";
};