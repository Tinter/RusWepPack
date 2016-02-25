class CfgPatches
{
	class weap_StreetYou_ijak_43
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
	class srifle_EBR_F;
	class str_ij_obr: hgun_Rook40_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_ij43_obr_name";
		model="\wpn_r_f3\izh43\izh43_sawedoff.p3d";
		picture="\wpn_r_f3\izh43\ui\ij43_obr";
		recoil="recoil_ebr";
		initspeed=395;
		descriptionshort="$STR_ij43_obr_desc";
		magazines[]=
		{
			"2pul_drob",
			"2pul_pula"
		};
		reloadMagazineSound[]=
		{
			"wpn_r_f3\izh43\anm\izh43_reloading",
			1.3,
			1,
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
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
					2,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
					2,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
					2,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
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
			dispersion=0.0049999999;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			minRange=1;
			minRangeProbab=0.5;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=80;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={801,901};
			mass=95;
		};
	};
	class str_ij_long: srifle_EBR_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_ij43_l_name";
		model="\wpn_r_f3\izh43\izh43.p3d";
		picture="\wpn_r_f3\izh43\ui\ij43_long";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f3\izh43\anm\ij.rtm"
		};
		reloadAction="ReloadMagazine";
		recoil="recoil_ebr";
		initspeed=410;
		discreteDistance[]={100,150};
		discreteDistanceInitIndex=0;
		maxZeroing=150;
		descriptionshort="$STR_ij43_l_desc";
		magazines[]=
		{
			"2pul_drob",
			"2pul_pula"
		};
		reloadMagazineSound[]=
		{
			"wpn_r_f3\izh43\anm\izh43_reloading",
			1.3,
			0.89999998,
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
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
					2,
					1,
					2500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
					2,
					1,
					2500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
					2,
					1,
					2500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\12calibr\2stvola.ogg",
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
			dispersion=0.0040000002;
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
			allowedslots[]={801,901};
			mass=30;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979884";
};