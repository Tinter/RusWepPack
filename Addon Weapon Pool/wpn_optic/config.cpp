class CfgPatches
{
	class weap_StreetYou_optic1
	{
		requiredversion=1;
		units[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class Rifle_Base_F;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class muzzle_snds_H;
	class muzzle_snds_L;
	class muzzle_snds_M;
	class muzzle_snds_B;
	class muzzle_snds_H_MG;
	class optic_Hamr;
	class optic_Arco;
	class optic_Aco;
	class optic_SOS;
	class optic_Yorris;
	class optic_DMS;
	class NVGoggles;
	class NVGoggles_OPFOR;
	class optic_str_pka: ItemCore
	{
		scope=2;
		author="PSEVDO-STALKER";
		displayName="$STR_pka_name";
		picture="\wpn_optic\pka\pka";
		model="\wpn_optic\pka\pk_a.p3d";
		descriptionShort="$STR_pka_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=5;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class pka
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=1;
					discreteDistance[]={100};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
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
	class optic_str_pkm_al: ItemCore
	{
		scope=2;
		author="Bohemia Interactive";
		displayName="$STR_pkm_kro_name";
		picture="\wpn_optic\pkm_a\pkma_kro";
		model="\wpn_optic\pkm_a\pkm_pl.p3d";
		descriptionShort="$STR_pkm_kro_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class pkm_a
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
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
	class optic_str_pkm_ap: ItemCore
	{
		scope=2;
		author="Bohemia Interactive";
		displayName="$STR_pkm_name";
		picture="\wpn_optic\pkm_a\pkm_ap";
		model="\wpn_optic\pkm_a\pkm_ap.p3d";
		descriptionShort="$STR_pkm_kro_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class pkm_a
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=1;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_plank: optic_Aco
	{
		scope=2;
		author="Street-you";
		displayName="$STR_pln_name";
		picture="\wpn_optic\oruj_dvor_ic.paa";
		model="\wpn_optic\mount\kobra_mount.p3d";
		descriptionShort="$STR_pln_desc";
		class OpticsModes
		{
			class plk
			{
				memoryPointCamera="eye";
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
	};
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
	class optic_str_kobra_p: optic_str_kobra
	{
		author="Street-you";
		displayName="$STR_kob_name";
		picture="\wpn_optic\kobra\kob";
		model="\wpn_optic\kobra\kobr_w.p3d";
		descriptionShort="$STR_kob_kro_desc";
	};
	class optic_str_kobraDrob: ItemCore
	{
		scope=2;
		author="Street-you";
		displayName="$STR_kobDrob_kro_name";
		picture="\wpn_optic\kobra\kob_k";
		model="\wpn_optic\kobra\kobr_pl.p3d";
		descriptionShort="$STR_kobDrob_kro_desc";
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
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
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
	class optic_str_kobraDrob_p: optic_str_kobraDrob
	{
		displayName="$STR_kobDrob_name";
		author="Street-you";
		picture="\wpn_optic\kobra\kob";
		model="\wpn_optic\kobra\kobr_w.p3d";
		descriptionShort="$STR_kobDrob_kro_desc";
	};
	class optic_str_barsik_p: ItemCore
	{
		scope=2;
		author="Street-you";
		displayName="$STR_bars_name";
		picture="\wpn_optic\barsik\barsik_p";
		model="\wpn_optic\barsik\barsik.p3d";
		descriptionShort="$STR_bars_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=3;
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
					discreteDistance[]={100};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
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
	class optic_str_barsik: optic_str_barsik_p
	{
		author="Street-you";
		displayName="$STR_bars_kro_name";
		picture="\wpn_optic\barsik\barsik_kro";
		model="\wpn_optic\barsik\bars_pl.p3d";
		descriptionShort="$STR_bars_desc";
	};
	class optic_jorik_p: optic_Yorris
	{
		scope=2;
		author="Bohemia Interactive";
		displayName="$STR_yo_name";
		model="\wpn_optic\jorik\yoris.p3d";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=2;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class jorik
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					discreteDistance[]={100};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
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
	class optic_jorik_kro: optic_jorik_p
	{
		scope=2;
		author="Bohemia Interactive";
		displayName="$STR_yo_kro_name";
		picture="\wpn_optic\jorik\yor";
		model="\wpn_optic\jorik\yor_pl.p3d";
	};
	class optic_str_kasht2: ItemCore
	{
		scope=2;
		displayName="$STR_kasht2_name";
		author="Street-you";
		picture="\wpn_optic\kashtan2\ka2_k";
		model="\wpn_optic\kashtan2\ka2_pl.p3d";
		descriptionShort="$STR_p78_desc";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class kobra
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.075000003;
					opticsZoomMax=0.125;
					opticsZoomInit=0.090000004;
					memoryPointCamera="eye";
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
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
	class optic_str_kasht2p: optic_str_kasht2
	{
		scope=2;
		displayName="$STR_kasht2p_name";
		author="Street-you";
		picture="\wpn_optic\kashtan2\ka2";
		model="\wpn_optic\kashtan2\ka2_w.p3d";
		descriptionShort="$STR_p78_desc";
	};
	class optic_str_pg210p: ItemCore
	{
		scope=2;
		author="Street-you";
		displayName="$STR_PG2p_name";
		picture="\wpn_optic\valdai\v_pg";
		model="\wpn_optic\valdai\pg210.p3d";
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
	class optic_str_pg210: optic_str_pg210p
	{
		scope=2;
		author="Street-you";
		displayName="$STR_PG2_name";
		picture="\wpn_optic\valdai\v_pg_k";
		model="\wpn_optic\valdai\pg210_pl.p3d";
		descriptionShort="$STR_kob_kro_desc";
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
					useModelOptics=0;
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.071000002;
					opticsZoomInit=0.063000001;
					memoryPointCamera="eye";
					discreteDistance[]={200,300,400,500,600,650,700,750,800,850};
					discreteDistanceInitIndex=1;
					distanceZoomMin=200;
					distanceZoomMax=850;
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
class cfgMods
{
	author="76561198086111011";
	timepacked="1455965081";
};
