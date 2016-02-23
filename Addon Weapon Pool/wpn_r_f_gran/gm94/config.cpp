class CfgPatches
{
	class weap_StreetYou_gran_gm
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
class UnderBarrelSlot2;
class CfgWeapons
{
	class arifle_TRG21_F;
	class UGL_F;
	class str_gm94: arifle_TRG21_F
	{
		author="Ubisoft";
		displayname="$STR_gm94_name";
		model="wpn_r_f_gran\gm94\gm94.p3d";
		picture="\wpn_r_f_gran\gm94\ui\gear_gm_x_ca";
		reloadAction="GestureReloadTrgUGL";
		recoil="recoil_m320";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"
		};
		initspeed=100;
		dexterity=1.596;
		maxZeroing=300;
		magazines[]=
		{
			"3Rnd_43mm_vgm9",
			"3Rnd_43mm_vgm3"
		};
		cursorAim="gl";
		cameraDir="op_look";
		discreteDistance[]={50,75,100,150,200,250,300};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300"
		};
		discreteDistanceInitIndex=0;
		descriptionshort="$STR_gm94_desc";
		drySound[]=
		{
			"A3\sounds_f\Weapons\other\sfx5",
			1,
			1,
			30
		};
		reloadMagazineSound[]=
		{
			"A3\sounds_f\Weapons\grenades\ugl_reload",
			0.50118703,
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
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",
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
					"wpn_r_f_snd\gp30_grenshoot.ogg",
					1,
					1,
					2500
				};
				begin2[]=
				{
					"wpn_r_f_snd\gp30_grenshoot.ogg",
					1,
					1,
					2500
				};
				begin3[]=
				{
					"wpn_r_f_snd\gp30_grenshoot.ogg",
					1,
					1,
					2500
				};
				begin4[]=
				{
					"wpn_r_f_snd\gp30_grenshoot.ogg",
					1,
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
			};
			reloadTime=1.2;
			dispersion=0.0012000001;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			minRange=2;
			minRangeProbab=0.5;
			midRange=190;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=60;
		};
	};
};
class CfgAmmo
{
	class GrenadeBase;
	class G_43mm_HE: GrenadeBase
	{
		author="Street-you";
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_1",
			3.1228001,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_2",
			3.1228001,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_3",
			3.1228001,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_4",
			3.1228001,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_5",
			3.1228001,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_6",
			3.1228001,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.2,
			"soundHit2",
			0.2,
			"soundHit3",
			0.2,
			"soundHit4",
			0.1,
			"soundHit5",
			0.15000001,
			"soundHit6",
			0.15000001
		};
		explosionSoundEffect="DefaultExplosion";
		simulation="shotShell";
		model="\A3\weapons_f\ammo\UGL_slug";
		hit=12;
		indirectHit=5;
		indirectHitRange=3;
		visibleFire=6;
		audibleFire=6;
		visibleFireTime=3;
		explosive=1;
		cost=10;
		deflecting=5;
		airFriction=-0.001;
		fuseDistance=15;
		whistleDist=16;
		typicalSpeed=105;
		caliber=2;
		class CamShakeExplode
		{
			power="(43*0.2)";
			duration="((round (43^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((3 + 43^0.5)*8)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (20^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(0^0.25)";
			duration="((round (0^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((0^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class G_43mm_smke: G_43mm_HE
	{
		author="Street-you";
		model="\A3\Weapons_f\ammo\smokegrenade_white";
		hit=0;
		indirectHit=0;
		indirectHitRange=0.2;
		simulation="shotSmokeX";
		explosive=0;
		deflecting=60;
		explosionTime=2;
		timeToLive=60;
		fuseDistance=0;
		soundHit[]=
		{
			"",
			0,
			1
		};
		SmokeShellSoundHit1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_1",
			1.25893,
			1,
			100
		};
		SmokeShellSoundHit2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_2",
			1.25893,
			1,
			100
		};
		SmokeShellSoundHit3[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_3",
			1.25893,
			1,
			100
		};
		SmokeShellSoundLoop1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop1",
			0.125893,
			1,
			70
		};
		SmokeShellSoundLoop2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop2",
			0.125893,
			1,
			70
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			0.25,
			"SmokeShellSoundHit2",
			0.25,
			"SmokeShellSoundHit3",
			0.5
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			0.5,
			"SmokeShellSoundLoop2",
			0.5
		};
		smokeColor[]={1,1,1,1};
		effectsSmoke="SmokeShellWhite";
		whistleDist=0;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 3Rnd_43mm_vgm9: CA_Magazine
	{
		author="Street-you";
		scope=2;
		type=16;
		displayName="$STR_vgm9_name";
		displayNameShort="$STR_vog25osk_sname";
		picture="\wpn_r_f_gran\gm94\ui\vgm_9_ic.paa";
		ammo="G_43mm_HE";
		initSpeed=100;
		count=3;
		nameSound="";
		descriptionShort="$STR_vgm9_desc";
		mass=13;
		reloadAction="GestureReloadTrgUGL";
	};
	class 3Rnd_43mm_vgm3: 3Rnd_43mm_vgm9
	{
		author="Street-you";
		displayName="$STR_vgm3_name";
		picture="\wpn_r_f_gran\gm94\ui\vgm_3_ic.paa";
		ammo="G_43mm_smke";
		descriptionShort="$STR_vgm3_desc";
		displayNameShort="$STR_grd40w_sname";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975356";
};
