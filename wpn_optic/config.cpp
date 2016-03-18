class CfgPatches
{
	class weap_StreetYou_optic1
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_weapons_f_mark_acc",
			"A3_Weapons_F"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_str_kobra: ItemCore
	{
		scope=2;
		author="Street-you";
		displayName="$STR_kob_kro_name";
		picture="\wpn_optic\kobra\kob_k";
		model="\wpn_optic\kobra\kobr_pl.p3d";
		descriptionShort="$STR_kob_kro_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class kobra
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
				};
			};
		};
	};
	class optic_str_pso1: ItemCore
	{
		scope=2;
		displayName="$STR_psoC_kro_name";
		author="$STR_pso_avtori";
		picture="\wpn_optic\pso\p1";
		model="\wpn_optic\pso\1.p3d";
		descriptionShort="$STR_psoDrob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=12;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class kobra
				{
					opticsID=2;
					useModelOptics=1;
                    opticsZoomMin = 0.249/4;
                    opticsZoomMax = 0.249/4;
                    opticsZoomInit = 0.249/4;
					memoryPointCamera="eye";
					discreteDistance[]={200,300,400,500,600,650,700,750,800,850};
					discreteDistanceInitIndex=1;
					distanceZoomMin=200;
					distanceZoomMax=850;
					modelOptics[]=
					{
						"wpn_optic\pso\pso_optics.p3d"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
				};
			};
		};
	};
};