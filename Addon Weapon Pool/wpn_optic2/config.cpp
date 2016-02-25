class CfgPatches
{
	class weap_StreetYou_optic2
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
	class optic_str_pkasp: ItemCore
	{
		scope=2;
		author="Geoset";
		displayName="$STR_pkas_name";
		picture="\wpn_optic2\pk-as\pkasp";
		model="\wpn_optic2\pk-as\pkasp.p3d";
		descriptionShort="$STR_pkas_desc";
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
	class optic_str_pk01: optic_str_pkasp
	{
		displayName="$STR_pk01_name";
		author="Geoset";
		picture="\wpn_optic2\pk-as\pk01";
		model="\wpn_optic2\pk-as\pk01.p3d";
		descriptionShort="РљРѕР»Р»РёРјР°С‚РѕСЂРЅС‹Р№ РїСЂРёС†РµР» 'РљРѕР±СЂР°' РЅР° РєСЂРѕС€С‚РµР№РЅРµ";
	};
	class optic_str_pkas: optic_str_pkasp
	{
		displayName="$STR_pkasDrob_name";
		author="Geoset";
		picture="\wpn_optic2\pk-as\pkas";
		model="\wpn_optic2\pk-as\pkas.p3d";
		descriptionShort="$STR_pkasDrob_desc";
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
	class optic_str_1p29: ItemCore
	{
		scope=2;
		author="?";
		displayName="$STR_p29_name";
		picture="\wpn_optic2\1p29\129";
		model="\wpn_optic2\1p29\1p29.p3d";
		descriptionShort="$STR_p29_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=10;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.071000002;
					opticsZoomInit=0.063000001;
					discreteDistance[]={300,400,500,600};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=600;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\1p29\data\scope_129"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_1p63: ItemCore
	{
		scope=2;
		author="yvandrey";
		displayName="$STR_p63_name";
		picture="\wpn_optic2\1p63\163";
		model="\wpn_optic2\1p63\163.p3d";
		descriptionShort="$STR_p63_desc";
		weaponInfoType="RscWeaponZeroing";
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
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
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
	class optic_str_1p63p: optic_str_1p63
	{
		displayName="$STR_p63p_name";
		author="yvandrey(compelation Street-you)";
		picture="\wpn_optic2\1p63\163p";
		model="\wpn_optic2\1p63\163p.p3d";
		descriptionShort="STR_p63_desc";
	};
	class optic_str_puo1: ItemCore
	{
		scope=2;
		author="Street-you";
		displayName="$STR_puoL_name";
		picture="\wpn_optic2\puo1\puo_ic";
		model="\wpn_optic2\puo1\puo1.p3d";
		descriptionShort="$STR_puoL_desc";
		weaponInfoType="RscOptics_LaserDesignator";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=14;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0062500001;
					opticsZoomMax=0.5;
					opticsZoomInit=0.25;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=2250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\puo1\puo_scp"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					Laser="true";
				};
			};
		};
	};
	class optic_str_puo1_kro: ItemCore
	{
		scope=2;
		author="Street-you";
		displayName="$STR_puoL_kro_name";
		picture="\wpn_optic2\puo1\pu_l";
		model="\wpn_optic2\puo1\puo1_pl.p3d";
		descriptionShort="$STR_puoL_desc";
		weaponInfoType="RscOptics_LaserDesignator";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=14;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0062500001;
					opticsZoomMax=0.5;
					opticsZoomInit=0.25;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=2250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\puo1\puo_scp"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					Laser="true";
				};
			};
		};
	};
	class optic_str_1p78: optic_str_pkasp
	{
		displayName="$STR_p78_name";
		author="?";
		picture="\wpn_optic2\1p78\178";
		model="\wpn_optic2\1p78\178.p3d";
		descriptionShort="$STR_p78_desc";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
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
	class optic_str_1p78p: optic_str_1p78
	{
		displayName="$STR_p78p_name";
		author="?";
		picture="\wpn_optic2\1p78\178p";
		model="\wpn_optic2\1p78\178p.p3d";
		descriptionShort="$STR_p78_desc";
	};
	class optic_str_pk021_kro: optic_DMS
	{
		scope=2;
		author="TIGG/Street-you";
		displayName="$STR_pkou_name";
		picture="\wpn_optic2\pk-ou\pkou.paa";
		model="\wpn_optic2\pk-ou\pk_ou_pl";
		descriptionShort="$STR_pkou_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=8;
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
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
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						""
					};
				};
				class Snip2
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.048;
					opticsZoomMax=0.055;
					opticsZoomInit=0.050000001;
					discreteDistance[]={400,500};
					discreteDistanceInitIndex=0;
					distanceZoomMin=400;
					distanceZoomMax=500;
					memoryPointCamera="vieweye";
					modelOptics[]=
					{
						"\wpn_optic2\pk-ou\data\scope_ou"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pk021: optic_str_pk021_kro
	{
		scope=2;
		author="TIGG/Street-you";
		displayName="$STR_pkoup_name";
		picture="\wpn_optic2\pk-ou\pk_ou.paa";
		model="\wpn_optic2\pk-ou\pk_ou";
		descriptionShort="$STR_pkou_desc";
	};
	class optic_str_pks07: optic_DMS
	{
		scope=2;
		author="Geoset";
		displayName="$STR_pksM_name";
		picture="\wpn_optic2\pks07\pks07p.paa";
		model="\wpn_optic2\pks07\pks07";
		descriptionShort="$STR_pksM_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07drob: optic_str_pks07
	{
		displayName="$STR_pksDrob_name";
		author="Geoset";
		picture="\wpn_optic2\pks07\pks07p.paa";
		model="\wpn_optic2\pks07\pks07";
		descriptionShort="$STR_pksDrob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07_kro: optic_DMS
	{
		scope=2;
		author="Geoset";
		displayName="$STR_pksM_kro_name";
		picture="\wpn_optic2\pks07\pks07l.paa";
		model="\wpn_optic2\pks07\pks07l";
		descriptionShort="$STR_pksM_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07Drob_kro: optic_DMS
	{
		scope=2;
		author="Geoset";
		displayName="$STR_pksDrob_kro_name";
		picture="\wpn_optic2\pks07\pks07l.paa";
		model="\wpn_optic2\pks07\pks07l";
		descriptionShort="$STR_pksDrob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07n: optic_DMS
	{
		scope=2;
		author="Geoset/Street-you";
		displayName="$STR_pksnM_name";
		picture="\wpn_optic2\pks07\pk07n.paa";
		model="\wpn_optic2\pks07\pks07n";
		descriptionShort="$STR_pksnM_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=16;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07ndrob: optic_str_pks07
	{
		displayName="$STR_pksnDrob_name";
		author="Geoset/Street-you";
		picture="\wpn_optic2\pks07\pk07n.paa";
		model="\wpn_optic2\pks07\pks07n";
		descriptionShort="$STR_pksnDrob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=16;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07n_kro: optic_DMS
	{
		scope=2;
		displayName="$STR_pksnM_kro_name";
		author="Geoset/Street-you";
		picture="\wpn_optic2\pks07\p07n.paa";
		model="\wpn_optic2\pks07\pks07ln";
		descriptionShort="$STR_pksnM_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=16;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pks07nDrob_kro: optic_DMS
	{
		scope=2;
		author="Geoset/Street-you";
		displayName="$STR_pksnDrob_kro_name";
		picture="\wpn_optic2\pks07\p07n.paa";
		model="\wpn_optic2\pks07\pks07ln";
		descriptionShort="$STR_pksnDrob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=16;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035500001;
					opticsZoomMax=0.041999999;
					opticsZoomInit=0.035799999;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\pks07\data\scope_pks"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_1p71: ItemCore
	{
		scope=2;
		author="Geoset";
		displayName="$STR_gi7M_name";
		picture="\wpn_optic2\giperon\gl_p";
		model="\wpn_optic2\giperon\171.p3d";
		descriptionShort="$STR_gi7M_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
	};
	class optic_str_1p71Drob: ItemCore
	{
		scope=2;
		author="Geoset";
		displayName="$STR_gi7Drob_name";
		picture="\wpn_optic2\giperon\gl_p";
		model="\wpn_optic2\giperon\171.p3d";
		descriptionShort="$STR_gi7Drob_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
	};
	class optic_str_1p69: ItemCore
	{
		scope=2;
		author="Geoset";
		displayName="$STR_gi6M_name";
		picture="\wpn_optic2\giperon\gi_l";
		model="\wpn_optic2\giperon\169.p3d";
		descriptionShort="$STR_gi7M_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
	};
	class optic_str_1p69Drob: ItemCore
	{
		scope=2;
		author="Geoset";
		displayName="$STR_gi6Drob_name";
		picture="\wpn_optic2\giperon\gi_l";
		model="\wpn_optic2\giperon\169.p3d";
		descriptionShort="$STR_gi7Drob_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
	};
	class optic_str_1p71n: ItemCore
	{
		scope=2;
		author="Geoset/Street-you";
		displayName="$STR_gi7nM_name";
		picture="\wpn_optic2\giperon\gl_pn";
		model="\wpn_optic2\giperon\171n.p3d";
		descriptionShort="$STR_gi7nM_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class optic_str_1p71nDrob: ItemCore
	{
		scope=2;
		author="Geoset/Street-you";
		displayName="$STR_gi7nDrob_name";
		picture="\wpn_optic2\giperon\gl_pn";
		model="\wpn_optic2\giperon\171n.p3d";
		descriptionShort="$STR_gi7nDrob_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal"
					};
				};
			};
		};
	};
	class optic_str_1p69n: ItemCore
	{
		scope=2;
		author="Geoset/Street-you";
		displayName="$STR_gi6nM_name";
		picture="\wpn_optic2\giperon\gi_ln";
		model="\wpn_optic2\giperon\169n.p3d";
		descriptionShort="$STR_gi7nM_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class optic_str_1p69nDrob: ItemCore
	{
		scope=2;
		author="Geoset/Street-you";
		displayName="$STR_gi6nDrob_name";
		picture="\wpn_optic2\giperon\gi_ln";
		model="\wpn_optic2\giperon\169n.p3d";
		descriptionShort="$STR_gi7nDrob_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=12;
			weaponInfoType="RscWeaponRangeZeroing";
			optics=1;
			modelOptics="\A3\Weapons_F\empty";
			class OpticsModes
			{
				class Snip
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.1;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.082000002,0.041999999,0.025};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprn3",
						"\wpn_optic2\giperon\data\scope_gprn6",
						"\wpn_optic2\giperon\data\scope_gprn10"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip2: Snip
				{
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic2\giperon\data\scope_gprnB3",
						"\wpn_optic2\giperon\data\scope_gprnB6",
						"\wpn_optic2\giperon\data\scope_gprnB10"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455917736";
};