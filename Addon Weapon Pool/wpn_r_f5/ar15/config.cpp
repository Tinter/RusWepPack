class CfgPatches
{
	class weap_StreetYou_vepr_15
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
class asdg_str_SideW;
class asdg_OpticRail1913;
class CfgWeapons
{
	class arifle_MX_Base_F;
	class str_vpo140: arifle_MX_Base_F
	{
		scope=2;
		author="TIGG";
		displayname="$STR_vepr15_name";
		descriptionshort="$STR_vepr15_desc";
		model="\wpn_r_f5\ar15\mka.p3d";
		picture="\wpn_r_f5\ar15\gear_m_x_ca";
		magazines[]=
		{
			"30Rnd_556x45_Stanag"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"
		};
		reloadAction="GestureReloadMXCompact";
		initspeed=920;
		dexterity=1.502;
		recoil="recoil_trg20";
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=0;
		maxZeroing=500;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"single_medium_optics1",
			"single_far_optics2"
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
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Closure_TRG20_02",
					0.50118721,
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
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_01",
					1.752624,
					1,
					1400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_02",
					1.752624,
					1,
					1400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_short_03",
					1.752624,
					1,
					1400
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.07;
			dispersion=0.00113;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=5;
			minRangeProbab=0.44999999;
			midRange=155;
			midRangeProbab=0.69999999;
			maxRange=290;
			maxRangeProbab=0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.2;
			midRange=155;
			midRangeProbab=0.69999999;
			maxRange=325;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=330;
			midRangeProbab=0.69999999;
			maxRange=650;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=100;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.52999997,0.303};
				iconScale=0.2;
			};
			class PointerSlot: asdg_str_SideW
			{
				iconPosition[]={0.28999999,0.40000001};
				iconScale=0.2;
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979704";
};
