class CfgPatches
{
	class weap_StreetYou_gurza
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
class MuzzleSlot;
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
	class str_gurza: hgun_Rook40_F
	{
		author="SAM61,r0tzbua";
		model="\wpn_r_f_pist\gurza\sr1.p3d";
		picture="\wpn_r_f_pist\gurza\gear_sr1mp_x_ca";
		displayName="$STR_pist_sr1_name";
		descriptionshort="$STR_pist_sr1_desc";
		magazines[]=
		{
			"18rnd_9x21_sr1"
		};
		initspeed=410;
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
					"\wpn_r_f_snd\pist\Shoot.wav",
					1.1,
					1,
					800
				};
				begin2[]=
				{
					"\wpn_r_f_snd\pist\Shoot.wav",
					1.1,
					1,
					800
				};
				begin3[]=
				{
					"\wpn_r_f_snd\pist\Shoot.wav",
					1.1,
					1,
					800
				};
				begin4[]=
				{
					"\wpn_r_f_snd\pist\Shoot.wav",
					1.1,
					1,
					800
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
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\pist\Supressed.wav",
					0.89999998,
					1,
					400
				};
				begin2[]=
				{
					"\wpn_r_f_snd\pist\Supressed.wav",
					0.89999998,
					1,
					400
				};
				begin3[]=
				{
					"\wpn_r_f_snd\pist\Supressed.wav",
					0.89999998,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_interior",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_trees",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_forest",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_meadows",
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
							"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Silencer_Rook40_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.07;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.0046000001;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=35;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=25;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.079999998,0.15000001};
				iconScale=0.40000001;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_sr1_sil"
				};
			};
			class PointerSlot: asdg_str_SideW
			{
				iconPosition[]={0.31,0.45500001};
				iconScale=0.30000001;
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455925176";
};
