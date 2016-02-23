class CfgPatches
{
	class weap_StreetYou_glushiteli
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
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
	class muzzle_snds_acp;
	class muzzle_snds_expm: muzzle_snds_H
	{
		displayName="Р“Р»СѓС€РёС‚РµР»СЊ РџР‘1";
		picture="\wpn_r_f_mzl\pb_m\pb_mzl.paa";
		model="\wpn_r_f_mzl\pb_m\pb_mzl";
		class ItemInfo
		{
			mass=6;
			class MagazineCoef
			{
				initSpeed=1.1;
			};
			class AmmoCoef
			{
				hit=1;
				typicalSpeed=1;
				airFriction=1;
				visibleFire=0.5;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.5;
				cost=1;
			};
			soundTypeIndex=1;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
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
		inertia=0.050000001;
	};
	class muzzle_snds_str_pb1: muzzle_snds_L
	{
		displayName="$STR_pbbs_pb";
		picture="\wpn_r_f_mzl\pb_m\pb_mzl.paa";
		model="\wpn_r_f_mzl\pb_m\pb_mzl";
	};
	class muzzle_snds_str_pps: muzzle_snds_L
	{
		displayName="$STR_pbbs_pps";
		picture="\wpn_r_f_mzl\pbbs_pps\pps_glush_ca.paa";
		model="\wpn_r_f_mzl\pbbs_pps\glus";
	};
	class muzzle_str_no4_545: muzzle_snds_H
	{
		scope=2;
		author="Street-you";
		displayName="$STR_pbs_no4";
		picture="\wpn_r_f_mzl\no4\no_ic.paa";
		model="\wpn_r_f_mzl\no4\noch";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=0;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.2;
				audibleFire=0.85000002;
				visibleFireTime=0.2;
				audibleFireTime=0.85000002;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
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
			inertia=0.050000001;
		};
	};
	class muzzle_str_no4_556: muzzle_str_no4_545
	{
		displayName="$STR_pbs_no4_556";
	};
	class muzzle_str_no4_762: muzzle_snds_H
	{
		scope=2;
		author="Street-you";
		displayName="$STR_pbs_no4_762";
		picture="\wpn_r_f_mzl\no4\no_ic.paa";
		model="\wpn_r_f_mzl\no4\noch";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=0;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.2;
				audibleFire=0.85000002;
				visibleFireTime=0.2;
				audibleFireTime=0.85000002;
				cost=1;
				typicalSpeed=1;
				airFriction=1;
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
			inertia=0.050000001;
		};
	};
	class muzzle_str_tgpa_545: muzzle_snds_H
	{
		scope=2;
		author="?";
		displayName="$STR_pbbs_tgpa545";
		picture="\wpn_r_f_mzl\tgpa\tgpa_ic.paa";
		model="\wpn_r_f_mzl\tgpa\tgpa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.69999999;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.30000001;
				audibleFire=0.34999999;
				visibleFireTime=0.30000001;
				audibleFireTime=0.34999999;
				cost=0.69999999;
				typicalSpeed=0.69999999;
				airFriction=1.2;
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
	class muzzle_str_tgpa_762: muzzle_snds_H
	{
		scope=2;
		author="?";
		displayName="$STR_pbbs_tgpa762";
		picture="\wpn_r_f_mzl\tgpa\tgpa_ic.paa";
		model="\wpn_r_f_mzl\tgpa\tgpa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.69999999;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.30000001;
				audibleFire=0.34999999;
				visibleFireTime=0.30000001;
				audibleFireTime=0.34999999;
				cost=0.69999999;
				typicalSpeed=0.69999999;
				airFriction=1.2;
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
	class muzzle_str_sup556: muzzle_snds_H
	{
		scope=2;
		author="SPLINTER";
		displayName="$STR_pbbs_556";
		picture="\wpn_r_f_mzl\tgpa\tgpa_ic.paa";
		model="\wpn_r_f_mzl\sup556\sup556";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.89999998;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.40000001;
				audibleFire=0.69999999;
				visibleFireTime=0.40000001;
				audibleFireTime=0.69999999;
				cost=0.89999998;
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
	class muzzle_str_salvo: muzzle_snds_H
	{
		scope=2;
		author="Street-you";
		displayName="$STR_pbbs_salvo";
		picture="\wpn_r_f_mzl\salvo\sa_ic.paa";
		model="\wpn_r_f_mzl\salvo\sal";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=7;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.89999998;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.44999999;
				audibleFire=0.60000002;
				visibleFireTime=0.44999999;
				audibleFireTime=0.60000002;
				cost=0.80000001;
				typicalSpeed=0.89999998;
				airFriction=0.89999998;
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
	class muzzle_str_tgpv: muzzle_snds_H
	{
		scope=2;
		author="PSEVDO-STALKER";
		displayName="$STR_pbbs_tgpv";
		picture="\wpn_r_f_mzl\tgpv\v_ic.paa";
		model="\wpn_r_f_mzl\tgpv\tgpv";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=6;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.80000001;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.2;
				audibleFire=0.34999999;
				visibleFireTime=0.2;
				audibleFireTime=0.34999999;
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
	class muzzle_str_ATG: muzzle_snds_H
	{
		scope=2;
		author="Street-you";
		displayName="$STR_pbbs_ATG";
		picture="\wpn_r_f_mzl\ATG\atg_ic.paa";
		model="\wpn_r_f_mzl\ATG\atg";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=6;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.40000001;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.1;
				audibleFire=0.2;
				visibleFireTime=0.1;
				audibleFireTime=0.2;
				cost=0.60000002;
				typicalSpeed=0.40000001;
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
			inertia=0.12;
		};
	};
	class muzzle_str_bram: muzzle_snds_H
	{
		scope=2;
		author="?";
		displayName="$STR_pbbs_brm";
		picture="\wpn_r_f_mzl\bramit\br_ic.paa";
		model="\wpn_r_f_mzl\bramit\bram";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=0.89999998;
			};
			class AmmoCoef
			{
				hit=0.85000002;
				visibleFire=0.34999999;
				audibleFire=0.5;
				visibleFireTime=0.34999999;
				audibleFireTime=0.5;
				cost=0.80000001;
				typicalSpeed=0.85000002;
				airFriction=1;
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
			inertia=0.12;
		};
	};
	class muzzle_str_sr1_sil: muzzle_snds_H
	{
		scope=2;
		author="SAM61,RETOUR";
		displayName="$STR_pbbs_sr1m";
		picture="\wpn_r_f_mzl\sr1_glush\glush_ic.paa";
		model="\wpn_r_f_mzl\sr1_glush\sil_sr1";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=5;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=0.89999998;
				visibleFire=0.25;
				audibleFire=0.30000001;
				visibleFireTime=0.5;
				audibleFireTime=0.69999999;
				cost=0.80000001;
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
	class muzzle_str_dtk_pkp: muzzle_snds_H
	{
		scope=2;
		author="Street-you";
		displayName="$STR_dtk_rtr_pkp";
		picture="\wpn_r_f_mzl\rotor_pe4en\dtk_p_ic.paa";
		model="\wpn_r_f_mzl\rotor_pe4en\rtr_pkp";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			soundTypeIndex=1;
			mass=6;
			muzzleEnd="zaslehPoint";
			alternativeFire="Zasleh2";
			class MagazineCoef
			{
				initSpeed=1;
			};
			class AmmoCoef
			{
				hit=1;
				visibleFire=0.15000001;
				audibleFire=0.60000002;
				visibleFireTime=0.25;
				audibleFireTime=0.64999998;
				cost=0.80000001;
				typicalSpeed=1;
				airFriction=1;
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
			inertia=0.050000001;
		};
	};
	class muzzle_str_pbs_aek919: muzzle_snds_H
	{
		scope=2;
		author="?";
		displayName="$STR_pbbs_vit";
		picture="\wpn_r_f_mzl\pbs\ic_pbs1.paa";
		model="\wpn_r_f_mzl\pbs\pbbs_919";
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
	class muzzle_str_sr3_sil: muzzle_snds_H
	{
		scope=2;
		author="Ippe";
		displayName="$STR_pbbs_sr3m";
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
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_str_no4_545=1;
		muzzle_str_tgpa_545=1;
		muzzle_str_ATG=1;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_str_no4_762=1;
		muzzle_str_tgpa_762=1;
		muzzle_str_ATG=1;
	};
};
class asdg_MuzzleSlot_556R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		muzzle_str_ATG=1;
		muzzle_str_no4_556=1;
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455976568";
};
