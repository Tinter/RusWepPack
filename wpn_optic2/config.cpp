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
	class optic_str_pkas: ItemCore
	{
	    scope = 2;
		displayName="$STR_pkasDrob_name";
		author="Geoset";
		picture="\wpn_optic2\pk-as\pkas";
		model="\wpn_optic2\pk-as\pkas.p3d";
		descriptionShort="$STR_pkasDrob_desc";
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
                    opticsZoomMin = 0.249;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.75;
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
                    opticsZoomMin = 0.249/4;
                    opticsZoomMax = 0.249/4;
                    opticsZoomInit = 0.249/4;
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
};