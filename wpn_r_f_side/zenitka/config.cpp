class CfgPatches
{
	class wpn_r_f_side_zenitka
	{
		requiredversion=1;
		units[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class CfgWeapons
{
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class str_zenit_ka: acc_flashlight
	{
		author="AbsolutSoft";
		displayName="$STR_2ps_name";
		descriptionUse="$STR_fo_desc";
		picture="\wpn_r_f_side\zenitka\2ps_ic.paa";
		model="\wpn_r_f_side\zenitka\zen";
		descriptionShort="$STR_fo_desc";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=5;
			class FlashLight
			{
				/*color[]={153,239,232};
				ambient[]={0.93000001,0.97000003,0.95999998};
				intensity=18;
				innerAngle=17;
				outerAngle=36;
				coneFadeCoef=5;
				flareSize=1;
				flareMaxDistance="250.0f";*/
				ambient[] = {6,9,9};
				color[] = {7000,7500,10000};
				coneFadeCoef = 10;
				flareMaxDistance = "600.0f";
				flareSize = 1.5;
				innerAngle = 20;
				intensity = 2.5;
				outerAngle = 80;
				size=1;
				position="flash dir";
				direction="flash";
				useFlare=1;
				dayLight=1;
				class Attenuation
				{
					start=0.5;
					constant=0;
					linear=0;
					// quadratic=1.1;
					// quadratic=1.1;
					// hardLimitStart=30;
					// hardLimitEnd=60;
					hardLimitEnd = 300;
					hardLimitStart = 200;
					quadratic = 1;
				};
				scale[]={0};
			};
		};
	};
	class str_zenit_plk: str_zenit_ka
	{
		author="AbsolutSoft";
		displayName="$STR_2ps_name";
		descriptionUse="$STR_fo_desc";
		picture="\wpn_r_f_side\zenitka\2ps_ic.paa";
		model="\wpn_r_f_side\zenitka\zen_plank";
		descriptionShort="$STR_fo_desc";
	};
};