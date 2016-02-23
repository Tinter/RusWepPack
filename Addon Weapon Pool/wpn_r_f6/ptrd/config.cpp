class CfgPatches
{
	class weap_StreetYou_ptrd
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
	class srifle_EBR_F;
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_RPG32_F;
	class str_ptrd: launch_RPG32_F
	{
		scope=2;
		author="Tripwire Interactive";
		displayname="$STR_ptrd_name";
		descriptionShort="$STR_ptrd_desc";
		model="\wpn_r_f6\ptrd\ptr.p3d";
		picture="\wpn_r_f6\ptrd\gear_ptrd_x_ca";
		magazines[]=
		{
			"1rnd_ptrd"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\Handanim_strela.rtm"
		};
		reloadAction="iGestureReloadRPG7V";
		dexterity=0.205;
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=1;
		maxZeroing=400;
		initspeed=990;
		modelOptics="\A3\Weapons_F\empty";
		weaponInfoType="RscWeaponEmpty";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=0;
				opticsZoomMin=0.1083;
				opticsZoomMax=0.1083;
				opticsZoomInit=0.1083;
				discreteDistance[]={100,200,300,400};
				discreteDistanceInitIndex=1;
				distanceZoomMin=100;
				distanceZoomMax=400;
				opticsFlare=0;
				opticsDisablePeripherialVision=1;
				memoryPointCamera="eye";
				cameraDir="";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]={};
			};
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
			reloadTime=0.2;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_gm6";
			dispersion=0.0037799999;
			minRange=0;
			minRangeProbab=0.1;
			midRange=230;
			midRangeProbab=0.80000001;
			maxRange=420;
			maxRangeProbab=0.090000004;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={};
			mass=280;
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_LauncherMagazine;
	class 1rnd_ptrd: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_145_d_mm_name";
		descriptionShort="$STR_145_d_mm_desc";
		picture="\wpn_r_f_cnfg\ammo\ammon\ptrs_5b.paa";
		initSpeed=1010;
		displaynameshort="";
		ammo="B_145x114_Ball_ptrd";
		type="2*		256";
		mass=4;
		allowedSlots[]={701,801,901};
	};
};
class CfgAmmo
{
	class RocketBase;
	class B_145x114_Ball_ptrd: RocketBase
	{
		hit=130;
		indirectHit=1.7;
		indirectHitRange=2.0999999;
		cartridge="FxCartridge_127";
		visibleFire=90;
		audibleFire=120;
		visibleFireTime=5;
		cost=6.4000001;
		airLock=1;
		caliber=3.7;
		typicalSpeed=1020;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.63;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00085999997;
		dangerRadiusBulletClose=15;
		dangerRadiusHit=26;
		suppressionRadiusBulletClose=12;
		suppressionRadiusHit=14;
		muzzleEffect="";
		CraterEffects="";
		effectsMissile="missile4";
		class CamShakeExplode
		{
			power="(24^0.5)";
			duration="((round (24^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((24^0.5)*3)";
		};
		class CamShakeHit
		{
			power=24;
			duration="((round (24^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455980209";
};
