class CfgPatches
{
	class wpn_r_f_side_1
	{
		requiredversion=1;
		units[]={};
	};
};
class CfgWeapons
{
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class str_2dps: acc_flashlight
	{
		author="Street-you";
		displayName="$STR_klesh";
		descriptionUse="$STR_kl_desc";
		picture="\wpn_r_f_side\2dps\kl_ic.paa";
		model="\wpn_r_f_side\2dps\klesh";
		descriptionShort="$STR_kl_desc";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=4;
			class FlashLight
			{
				color[]={240,240,227};
				ambient[]={0.93000001,0.97000003,0.91000003};
				intensity=15;
				size=1;
				innerAngle=11;
				outerAngle=30;
				coneFadeCoef=4;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=0.69999999;
				flareMaxDistance=210;
				activeLight="true";
				dayLight=1;
				drawLight="false";
				blinking="true";
				blinkingPattern[]={1.25,0.2};
				blinkingStartsOn="true";
				blinkingPatternGuarantee="true";
				class Attenuation
				{
					start=0.5;
					constant=0;
					linear=0;
					quadratic=1.1;
					hardLimitStart=50;
					hardLimitEnd=55;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
	class str_2dps_plank: str_2dps
	{
		author="Street-you";
		displayName="$STR_klesh_pn";
		picture="\wpn_r_f_side\2dps\kl_ic.paa";
		model="\wpn_r_f_side\2dps\klesh_plank";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976665";
};
