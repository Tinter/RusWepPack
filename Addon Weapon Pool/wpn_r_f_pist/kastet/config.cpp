class CfgPatches
{
	class weap_StreetYou_pist_podstvol
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
	class str_rgm40: hgun_Rook40_F
	{
		author="Infinity Ward";
		displayName="$STR_rgm_name";
		model="\wpn_r_f_pist\kastet\rgm.p3d";
		picture="\wpn_r_f_pist\kastet\gear_rgm_x_ca";
		initspeed=83;
		descriptionshort="$STR_rgm_desc";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		magazines[]=
		{
			"1Rnd_vog25_osk",
			"1Rnd_vog25_dim_w",
			"1Rnd_vog25_dim_r",
			"1Rnd_vog25_dim_g"
		};
		reloadAction="GestureReloadPistol";
		cursorAim="gl";
		recoil="recoil_mx";
		cursor="EmptyCursor";
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
			minRangeProbab=0.0099999998;
			midRange=100;
			midRangeProbab=0.60000002;
			maxRange=200;
			maxRangeProbab=0.1;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=30;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455925176";
};
