class CfgPatches
{
	class weap_StreetYou_optic4
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
	class optic_str_pu_p: optic_DMS
	{
		scope=2;
		author="Bohemia Interactive";
		displayName="$STR_pu_p_name";
		picture="\wpn_optic4\pu\pu_p.paa";
		model="\wpn_optic4\pu\pu2";
		descriptionShort="$STR_pu_p_desc";
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
					opticsZoomMin=0.064999998;
					opticsZoomMax=0.087499999;
					opticsZoomInit=0.071000002;
					memoryPointCamera="eye";
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					opticsFlare=0;
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
	class optic_str_pu_kro: optic_str_pu_p
	{
		displayName="$STR_pu_kro_name";
		author="Bohemia Interactive";
		picture="\wpn_optic4\pu\pu_kro.paa";
		model="\wpn_optic4\pu\pu3";
		descriptionShort="$STR_pu_p_desc";
	};
	class optic_str_d470: optic_DMS
	{
		displayName="$STR_ded470M_name";
		author="Street-you";
		picture="\wpn_optic4\470\470.paa";
		model="\wpn_optic4\470\470";
		descriptionShort="$STR_ded470M_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=12;
			optics=1;
			modelOptics="\wpn_optic4\470\data\scope_470";
			class OpticsModes
			{
				class starij_ded
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.029999999;
					opticsZoomMax=0.15000001;
					opticsZoomInit=0.15000001;
					discreteDistance[]={100,300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1250;
					discretefov[]={0.07,0.041999999};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_d470Drob: optic_DMS
	{
		displayName="$STR_ded470Drob_name";
		author="Street-you";
		picture="\wpn_optic4\470\470.paa";
		model="\wpn_optic4\470\470";
		descriptionShort="$STR_ded470Drob_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=12;
			optics=1;
			modelOptics="\wpn_optic4\470\data\scope_470";
			class OpticsModes
			{
				class starij_ded
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.029999999;
					opticsZoomMax=0.15000001;
					opticsZoomInit=0.15000001;
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.07,0.041999999};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_d470_kro: optic_DMS
	{
		displayName="$STR_ded470M_kro_name";
		author="Street-you";
		picture="\wpn_optic4\470\470k.paa";
		model="\wpn_optic4\470\470kro";
		descriptionShort="$STR_ded470M_kro_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=12;
			optics=1;
			modelOptics="\wpn_optic4\470\data\scope_470";
			class OpticsModes
			{
				class starij_ded
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.029999999;
					opticsZoomMax=0.15000001;
					opticsZoomInit=0.15000001;
					discreteDistance[]={100,300,400,500,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1250;
					discretefov[]={0.07,0.041999999};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_d470Drob_kro: optic_DMS
	{
		displayName="$STR_ded470Drob_kro_name";
		author="Street-you";
		picture="\wpn_optic4\470\470k.paa";
		model="\wpn_optic4\470\470kro";
		descriptionShort="$STR_ded470Drob_kro_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=1;
			mass=12;
			optics=1;
			modelOptics="\wpn_optic4\470\data\scope_470";
			class OpticsModes
			{
				class starij_ded
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.029999999;
					opticsZoomMax=0.15000001;
					opticsZoomInit=0.15000001;
					discreteDistance[]={100};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=100;
					discretefov[]={0.07,0.041999999};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
	};
	class optic_str_pkvi: optic_DMS
	{
		scope=2;
		author="gerasimow9";
		displayName="$STR_pk01vi_name";
		picture="\wpn_optic4\pk01vi\pkvi.paa";
		model="\wpn_optic4\pk01vi\pk01vi";
		descriptionShort="$STR_pk01vi_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=4;
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
			};
		};
	};
	class optic_str_pkvi_kro: optic_str_pkvi
	{
		scope=2;
		author="gerasimow9";
		displayName="$STR_pk01vi_kro";
		picture="\wpn_optic4\pk01vi\pkvik.paa";
		model="\wpn_optic4\pk01vi\pk01vi_pl";
		descriptionShort="$STR_pk01vi_desc";
	};
	class optic_str_pos1350: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_pos1350M_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1250";
		descriptionShort="$STR_pos1350M_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350Drob: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS13x50Drob_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1250";
		descriptionShort="$STR_POS13x50Drob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={100,150};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=150;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350_kro: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS1350M_kro_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1350kro";
		descriptionShort="$STR_POS1350M_kro_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350Drob_kro: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS1350Drob_kro_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1350kro";
		descriptionShort="$STR_POS1350Drob_kro_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={100,150};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=150;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350n: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS1350nM_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1250n";
		descriptionShort="$STR_POS1350nM_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350nDrob: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS1350nDrob_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1250n";
		descriptionShort="$STR_POS1350nDrob_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={100,150};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=150;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350n_kro: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS1350nM_kro_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1350nkro";
		descriptionShort="$STR_POS1350nM_kro_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1250;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pos1350nDrob_kro: optic_DMS
	{
		scope=2;
		author="$STR_pos_avtor";
		displayName="$STR_POS1350nDrob_kro_name";
		picture="\wpn_optic4\pos1250\pos1350.paa";
		model="\wpn_optic4\pos1250\1350nkro";
		descriptionShort="$STR_POS1350nDrob_kro_desc";
		inertia=0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=13;
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
					opticsZoomMin=0.018999999;
					opticsZoomMax=0.0208;
					opticsZoomInit=0.019200001;
					discreteDistance[]={100,150};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=150;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_pos"
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
					modelOptics[]=
					{
						"\wpn_optic4\pos1250\data\scope_posR"
					};
				};
			};
		};
	};
	class optic_str_pk05: optic_DMS
	{
		scope=2;
		author="Infinity Ward";
		displayName="$STR_pk05_name";
		picture="\wpn_optic4\rk6\rk6.paa";
		model="\wpn_optic4\rk6\rk6";
		descriptionShort="$STR_pk05_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=4;
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
			};
		};
	};
	class optic_str_pk05_kro: optic_DMS
	{
		scope=2;
		author="Infinity Ward";
		displayName="$STR_pk05kro_name";
		picture="\wpn_optic4\rk6\rk6kro.paa";
		model="\wpn_optic4\rk6\rk6_pl";
		descriptionShort="$STR_pk05_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=4;
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
			};
		};
	};
	class optic_str_pk05_drob: optic_DMS
	{
		scope=2;
		author="Infinity Ward";
		displayName="$STR_pk05d_name";
		picture="\wpn_optic4\rk6\rk6.paa";
		model="\wpn_optic4\rk6\rk6";
		descriptionShort="$STR_pk05d_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=4;
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
	class optic_str_pk05_drob_kro: optic_str_pk05_drob
	{
		scope=2;
		author="Infinity Ward";
		displayName="$STR_pk05dkro_name";
		picture="\wpn_optic4\rk6\rk6kro.paa";
		model="\wpn_optic4\rk6\rk6_pl";
		weaponInfoType="RscWeaponZeroing";
	};
	class optic_str_elcan: optic_DMS
	{
		scope=2;
		author="Overkill Software";
		displayName="$STR_elcan_name";
		picture="\wpn_optic4\elcan\el.paa";
		model="\wpn_optic4\elcan\elcan";
		descriptionShort="$STR_elcan_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=8;
			optics=1;
			modelOptics="\wpn_optic4\elcan\elcan";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye3";
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					opticsFlare=0;
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
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsZoomMin=0.057;
					opticsZoomMax=0.082000002;
					opticsZoomInit=0.063000001;
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="eye2";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip3
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye1";
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
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
	class optic_str_elcan_kro: optic_str_elcan
	{
		scope=2;
		author="Overkill Software";
		displayName="$STR_elcankr_name";
		picture="\wpn_optic4\elcan\elk.paa";
		model="\wpn_optic4\elcan\elcan_pl";
		descriptionShort="$STR_elcan_desc";
		weaponInfoType="RscWeaponZeroing";
		inertia=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType=2;
			mass=8;
			optics=1;
			modelOptics="\wpn_optic4\elcan\elcan_pl";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye3";
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=100;
					opticsFlare=0;
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
					useModelOptics=0;
					opticsPPEffects[]={};
					opticsZoomMin=0.057;
					opticsZoomMax=0.082000002;
					opticsZoomInit=0.063000001;
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="eye2";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
				class Snip3
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye1";
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
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
	class optic_str_ded3_12: optic_DMS
	{
		scope=2;
		author="Infinity Ward";
		displayName="$STR_ded312_name";
		picture="\wpn_optic4\ded_312\d312.paa";
		model="\wpn_optic4\ded_312\ds3_12";
		descriptionShort="$STR_ded312_desc";
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
					discreteDistance[]={200,300,400,500,600,650,700,750,800,850,900,950,1000,1050,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250};
					discreteDistanceInitIndex=1;
					distanceZoomMin=200;
					distanceZoomMax=2250;
					discretefov[]={0.082000002,0.0277,0.0208};
					discreteInitIndex=0;
					memoryPointCamera="eye";
					modelOptics[]=
					{
						"\wpn_optic4\ded_312\data\ret\scope_3k",
						"\wpn_optic3\dedal_5-20\data\ret\scope_5k",
						"\wpn_optic4\ded_312\data\ret\scope_9k"
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
	class optic_str_ded3_12_kro: optic_str_ded3_12
	{
		scope=2;
		author="Infinity Ward\Street-you";
		displayName="$STR_ded312k_name";
		picture="\wpn_optic4\ded_312\d312_k.paa";
		model="\wpn_optic4\ded_312\ds3_12_pl";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455918278";
};
