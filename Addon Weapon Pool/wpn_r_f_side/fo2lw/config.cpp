class CfgPatches
{
	class wpn_r_f_side_3
	{
		requiredversion=1;
		units[]={};
	};
};
class CfgWeapons
{
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class str_fo_2lw: acc_flashlight
	{
		author="Street-you";
		displayName="$STR_fo";
		descriptionUse="$STR_fo_desc";
		picture="\wpn_r_f_side\fo2lw\fo_ic.paa";
		model="\wpn_r_f_side\fo2lw\fonar";
		descriptionShort="$STR_fo_desc";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class FlashLight
			{
				color[]={180,156,120};
				ambient[]={0.89999998,0.77999997,0.60000002};
				intensity=20;
				size=1;
				innerAngle=20;
				outerAngle=50;
				coneFadeCoef=5;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1;
				flareMaxDistance="200.0f";
				dayLight=0;
				class Attenuation
				{
					start=0.5;
					constant=0;
					linear=0;
					quadratic=1.1;
					hardLimitStart=20;
					hardLimitEnd=30;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
	class str_fo_2lw_plnk: str_fo_2lw
	{
		author="Street-you";
		displayName="$STR_fo_plk";
		descriptionUse="$STR_fo_desc";
		picture="\wpn_r_f_side\fo2lw\fo_pl_ic.paa";
		model="\wpn_r_f_side\fo2lw\fonar_plank";
		descriptionShort="$STR_fo_desc";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
