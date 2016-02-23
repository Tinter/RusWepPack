class CfgPatches
{
	class weap_StreetYou_gsh
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
class asdg_str_SideW;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Rook40_F;
	class str_glo35: hgun_Rook40_F
	{
		author="Twinke Masta,Kimono";
		model="\wpn_r_f_pist\glock\g35.p3d";
		picture="\wpn_r_f_pist\glock\gear_g35_x_ca";
		displayName="$STR_g35_name";
		descriptionshort="$STR_g35_desc";
		magazines[]=
		{
			"15Rnd__40_Mag"
		};
		initspeed=590;
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
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1.15,
					1,
					850
				};
				begin2[]=
				{
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1.15,
					1,
					850
				};
				begin3[]=
				{
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1.15,
					1,
					850
				};
				begin4[]=
				{
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1.15,
					1,
					850
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
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.0049800002;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=27;
			class PointerSlot: asdg_str_SideW
			{
				iconPosition[]={0.30000001,0.458};
				iconScale=0.30000001;
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
	class str_glo17: hgun_Rook40_F
	{
		author="SPLINTER,Twinke Masta";
		model="\wpn_r_f_pist\glock\g17.p3d";
		picture="\wpn_r_f_pist\glock\gear_g17_x_ca";
		displayName="$STR_g17_name";
		descriptionshort="$STR_g17_desc";
		magazines[]=
		{
			"17Rnd_9x19_Mag"
		};
		initspeed=390;
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
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1,
					1,
					850
				};
				begin2[]=
				{
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1,
					1,
					850
				};
				begin3[]=
				{
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1,
					1,
					850
				};
				begin4[]=
				{
					"\wpn_r_f_pist\glock\sou\glock35.wav",
					1,
					1,
					850
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
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.0049800002;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=27;
			class PointerSlot: asdg_str_SideW
			{
				iconPosition[]={0.30000001,0.458};
				iconScale=0.30000001;
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
};
class CfgMagazines
{
	class 16Rnd_9x21_Mag;
	class 15Rnd__40_Mag: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x19_pula";
		count=15;
		displayname="$STR_gl_15b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\so_17b";
		descriptionShort="$STR_gl_15b_desc";
		displaynameshort="";
		initSpeed=590;
		mass=6;
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455925176";
};
