class CfgPatches
{
	class weap_StreetYou_glushiteli
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class CfgWeapons
{
	class muzzle_snds_H;
	class InventoryMuzzleItem_Base_F;
	class muzzle_str_pbs_vitaz: muzzle_snds_H
	{
		scope=2;
		author="?";
		displayName="$STR_pbbs_vit";
		picture="\wpn_r_f_mzl\pbs\ic_pbs1.paa";
		model="\wpn_r_f_mzl\pbs\pbs_pp91";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.85000002;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.30000001;
				audibleFire=0.44999999;
				visibleFireTime=0.30000001;
				audibleFireTime=0.40000001;
				cost=0.80000001;
				typicalSpeed=0.85000002;
				airFriction=1.1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			inertia=0.1;
		};
	};
	class muzzle_str_vsk_sil: muzzle_snds_H
	{
		scope=2;
		author="kouoaeha,Millenia";
		displayName="$STR_pbbs_vsk9a";
		picture="\wpn_r_f_mzl\sr1_glush\glush_ic.paa";
		model="\wpn_r_f7\sr3\slush";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=7;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.98000002;
			};
			class AmmoCoef
			{
				hit=0.85000002;
				visibleFire=0.25;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.69999999;
				cost=0.64999998;
				typicalSpeed=0.89999998;
				airFriction=1.1;
			};
			class MuzzleCoef
			{
				dispersionCoef="0.8f";
				artilleryDispersionCoef="1.0f";
				fireLightCoef="0.1f";
				recoilCoef="1.0f";
				recoilProneCoef="1.0f";
				minRangeCoef="1.0f";
				minRangeProbabCoef="1.0f";
				midRangeCoef="1.0f";
				midRangeProbabCoef="1.0f";
				maxRangeCoef="1.0f";
				maxRangeProbabCoef="1.0f";
			};
			inertia=0.1;
		};
	};
};