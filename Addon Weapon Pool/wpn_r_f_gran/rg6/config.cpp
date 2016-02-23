class CfgPatches
{
	class weap_StreetYou_my_little_gNomik
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
	class Launcher_Base_F;
	class launch_RPG32_F;
	class str_rg6: launch_RPG32_F
	{
		scope=2;
		author="?";
		displayName="$STR_rg6_name";
		model="\wpn_r_f_gran\rg6\gnom.p3d";
		picture="\wpn_r_f_gran\rg6\gear_rg_x_ca";
		initspeed=83;
		descriptionshort="$STR_rg6_desc";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"a2_rpg7\RPG7.rtm"
		};
		magazines[]=
		{
			"6Rnd_vog25_osk_rg",
			"6Rnd_vog25_dim_w_rg"
		};
		dexterity=0.98210001;
		reloadAction="ReloadRPG";
		cursorAim="gl";
		recoil="recoil_mx";
		cameraDir="gl_look";
		discreteDistance[]={100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"gl_eye1",
			"gl_eye2",
			"gl_eye3",
			"gl_eye4"
		};
		discreteDistanceInitIndex=0;
		modelOptics="\A3\Weapons_F\empty";
		weaponInfoType="RscWeaponZeroing";
		class OpticsModes
		{
			class irons
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					""
				};
				opticsZoomMin=0.1875;
				opticsZoomMax=0.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=100;
				distanceZoomMax=500;
				cameraDir="aimpoint";
				discreteDistance[]={100,200,300,400};
				discreteDistanceCameraPoint[]=
				{
					"eye1",
					"eye",
					"eye2",
					"eye3"
				};
				discreteDistanceInitIndex=0;
			};
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
			reloadTime=0.07;
			dispersion=0.0049999999;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=5;
			minRangeProbab=0.090000004;
			midRange=210;
			midRangeProbab=0.69999999;
			maxRange=420;
			maxRangeProbab=0.15000001;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=70;
		};
	};
};
class CfgMagazines
{
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_Smoke_Grenade_shell;
	class CA_LauncherMagazine;
	class 6Rnd_vog25_osk_rg: CA_LauncherMagazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vog25osk_name_rg";
		displayNameShort="$STR_vog25osk_sname";
		descriptionShort="$STR_vog25osk_desc_rg";
		picture="\wpn_r_f_cnfg\ammo\ammon\gp_vog.paa";
		ammo="G_40mm_HE_rg";
		initSpeed=80;
		count=6;
		mass=24;
		type="2*		256";
		reloadAction="ReloadRPG";
		allowedSlots[]={801,901};
	};
	class 6Rnd_vog25_dim_w_rg: CA_LauncherMagazine
	{
		author="Street-you";
		displayName="$STR_grd40w_name_rg";
		picture="\wpn_r_f_cnfg\ammo\ammon\gp_gdm_w.paa";
		ammo="G_40mm_Smoke_rg";
		initSpeed=80;
		count=6;
		descriptionShort="$STR_grd40w_desc";
		displayNameShort="$STR_grd40w_sname_rg";
		mass=24;
		type="2*		256";
		reloadAction="ReloadRPG";
	};
};
class CfgAmmo
{
	class RocketBase;
	class G_40mm_HE_rg: RocketBase
	{
		soundHit1[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_1",
			3.1622777,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_2",
			3.1622777,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_3",
			3.1622777,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_4",
			3.1622777,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_5",
			3.1622777,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\weapons\Explosion\gr_explosion_6",
			3.1622777,
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
		model="\A3\weapons_f\ammo\UGL_slug";
		hit=100;
		indirectHit=8;
		indirectHitRange=6;
		visibleFire=6;
		audibleFire=6;
		visibleFireTime=3;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		explosive=1;
		cost=10;
		deflecting=5;
		airFriction=-0.001;
		fuseDistance=15;
		whistleDist=16;
		typicalSpeed=185;
		caliber=2;
		muzzleEffect="";
		CraterEffects="";
		effectsMissile="missile4";
		class CamShakeExplode
		{
			power="(40*0.2)";
			duration="((round (40^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((3 + 40^0.5)*8)";
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
	class G_40mm_Smoke_rg: RocketBase
	{
		model="\A3\Weapons_f\ammo\smokegrenade_white";
		hit=0;
		indirectHit=0;
		indirectHitRange=0.2;
		dangerRadiusHit=-1;
		suppressionRadiusHit=-1;
		typicalspeed=180;
		cost=100;
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
			1.2589254,
			1,
			100
		};
		SmokeShellSoundHit2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_2",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundHit3[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_3",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundLoop1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop1",
			0.12589253,
			1,
			70
		};
		SmokeShellSoundLoop2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop2",
			0.12589253,
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
		muzzleEffect="";
		CraterEffects="";
		effectsMissile="missile4";
		class CamShakeExplode
		{
			power="(40*0.2)";
			duration="((round (40^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((3 + 40^0.5)*8)";
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
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975356";
};
