class CfgPatches
{
	class weap_StreetYou_strij
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
class WeaponSlotsInfo;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class CowsSlot;
class asdg_str_SideW;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_Rook40_F;
	class hgun_PDW2000_F;
	class str_so: hgun_Rook40_F
	{
		author="$STR_so_avtor";
		displayName="$STR_so_name";
		model="\wpn_r_f_pist\strikeone\so.p3d";
		picture="\wpn_r_f_pist\strikeone\gear_so_x_ca";
		descriptionshort="$STR_so_desc";
		magazines[]=
		{
			"17Rnd_9x19_Mag",
			"30Rnd_so_9x19_Mag"
		};
		initspeed=430;
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
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					800
				};
				begin2[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					800
				};
				begin3[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					800
				};
				begin4[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
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
			reloadTime=0.07;
			dispersion=0.0049999999;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.60000002;
			maxRange=80;
			maxRangeProbab=0.2;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=25;
			class CowsSlot: CowsSlot
			{
				access=1;
				iconPosition[]={0.60000002,0.17};
				iconScale=0.2;
				compatibleitems[]=
				{
					"optic_MRD"
				};
				displayname="Optics Slot";
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				scope=0;
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.30000001,0.44999999};
				iconScale=0.2;
			};
		};
	};
	class str_strij_pp: hgun_PDW2000_F
	{
		author="$STR_pp_so_avtor";
		displayName="$STR_pp_so_name";
		model="\wpn_r_f_pist\strikeone\corpus.p3d";
		picture="\wpn_r_f_pist\strikeone\gear_pp_so_x_ca";
		descriptionshort="$STR_pp_so_desc";
		magazines[]=
		{
			"17Rnd_9x19_Mag",
			"30Rnd_so_9x19_Mag"
		};
		initspeed=365;
		maxZeroing=100;
		discreteDistance[]={100};
		discreteDistanceInitIndex=0;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"wpn_r_f_anm\str_anim\HaAnm\pp_strij.rtm"
		};
		reloadAction="GestureReloadPistol";
		recoil="recoil_smg_01";
		modes[]=
		{
			"Single",
			"FullAuto"
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
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
				};
				begin2[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
				};
				begin3[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
				};
				begin4[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
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
			dispersion=0.0049000001;
			recoil="recoil_single_SMG_01";
			recoilProne="recoil_single_prone_SMG_01";
			minRange=5;
			minRangeProbab=0.40000001;
			midRange=65;
			midRangeProbab=0.69999999;
			maxRange=110;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
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
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
				};
				begin2[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
				};
				begin3[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
				};
				begin4[]=
				{
					"\wpn_r_f_snd\strikeone\strike_one_shoot.ogg",
					1.1,
					1,
					900
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
			dispersion=0.0049000001;
			recoil="recoil_single_SMG_01";
			recoilProne="recoil_single_prone_SMG_01";
			minRange=1;
			minRangeProbab=0.40000001;
			midRange=35;
			midRangeProbab=0.80000001;
			maxRange=55;
			maxRangeProbab=0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=40;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_str_kobraDrob_p",
					"optic_str_barsik_p",
					"optic_jorik_p",
					"optic_str_pk05_drob",
					"optic_aco_smg",
					"optic_ACO_grn_smg",
					"optic_Holosight_smg"
				};
				iconPosition[]={0.34,0.2};
				iconScale=0.2;
			};
			class PointerSlot: asdg_str_SideW
			{
				iconPosition[]={0.23,0.31};
				iconScale=0.20999999;
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455925176";
};
