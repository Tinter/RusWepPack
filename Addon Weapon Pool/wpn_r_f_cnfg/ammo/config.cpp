class CfgPatches
{
	class weap_StreetYou_all_ammo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_9x21_Mag;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_556x45_Stanag_Tracer_Green;
	class Titan_AA;
	class 20Rnd_762x51_Mag;
	class 20Rnd_556x45_UW_mag;
	class 16Rnd_9x21_Mag;
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class 5Rnd_127x108_Mag;
	class 10Rnd_93x64_DMR_05_Mag;
	class 30Rnd_65x39_caseless_mag;
	class 30rnd_9mm_vit: 30Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_9x19_vit_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\pp19mag9m_30b.paa";
		ammo="B_9x19_pula";
		count=30;
		initSpeed=590;
		tracersEvery=0;
		lastRoundsTracer=1;
		descriptionShort="$STR_9x19_vit_desc";
		mass=10;
	};
	class 30rnd_9mm_vit_trs: 30rnd_9mm_vit
	{
		author="Street-you";
		scope=2;
		displayName="$STR_9x19_vit_trs_name";
		displaynameshort="$STR_9x19_vit_trs_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\pp19mag9m_30b_trs.paa";
		ammo="B_9x19_trs_pula";
		count=30;
		initSpeed=590;
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_9x19_vit_trs_desc";
		mass=10;
	};
	class 18rnd_9x21_sr1: 30Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_9x21_sr1_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\gurza_18b.paa";
		count=18;
		initSpeed=410;
		descriptionShort="$STR_9x21_sr1_desc";
		mass=8;
	};
	class 45rnd_545_mag_rpk: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_rpk74_45mag_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk74_45b";
		ammo="B_545x39_pula";
		count=45;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=2;
		descriptionShort="$STR_rpk74_45mag_desc";
		mass=12;
	};
	class 45rnd_545_mag_trs_rpk: 45rnd_545_mag_rpk
	{
		author="Street-you";
		scope=2;
		displayName="$STR_rpk74_45mag_trs_name";
		displaynameshort="$STR_545mag_trs_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk74_45b_trs";
		ammo="B_545x39_trs_pula";
		descriptionShort="$STR_rpk74_45mag_trs_desc";
		tracersEvery=1;
		lastRoundsTracer=45;
		mass=12;
	};
	class 75rnd_545_mag_rpk: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_rpk74_75mag_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk74_75r";
		ammo="B_545x39_pula";
		count=75;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=3;
		descriptionShort="$STR_rpk74_75mag_desc";
		mass=24;
	};
	class Strela_9m32: Titan_AA
	{
		author="Street-you";
		displayNameShort="9M32";
		displayName="$STR_snarad_strela";
		modelSpecial="\wpn_r_f_gran\strela\strela_launcher_loaded.p3d";
		descriptionshort="$STR_snarad_strela_desc";
		mass=95;
	};
	class 10rnd_762_sv98: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sv98_10b_name";
		displaynameshort="";
		count=10;
		picture="\wpn_r_f_cnfg\ammo\ammon\sv98_10b";
		descriptionShort="$STR_sv98_10b_desc";
		initSpeed=830;
		mass=13;
	};
	class 10rnd_762_trs_sv98: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sv98_10b_trs_name";
		displaynameshort="$STR_545mag_trs_sname";
		count=10;
		picture="\wpn_r_f_cnfg\ammo\ammon\sv98_10b_trs";
		descriptionShort="$STR_sv98_10b_trs_desc";
		initSpeed=825;
		tracersEvery=1;
		lastRoundsTracer=10;
		mass=13;
	};
	class 10rnd_762_svd: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svd_10b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\svd_10b";
		count=10;
		descriptionShort="$STR_svd_10b_desc";
		initSpeed=805;
		mass=13;
	};
	class 10rnd_trs_762_svd: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svd_trs_10b_name";
		displaynameshort="$STR_545mag_trs_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\svd_10b";
		count=10;
		descriptionShort="$STR_svd_trs_10b_desc";
		initSpeed=805;
		tracersEvery=1;
		lastRoundsTracer=10;
		mass=13;
	};
	class 20rnd_762_svd: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svd_20b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\svd_20b";
		count=20;
		descriptionShort="$STR_svd_20b_desc";
		initSpeed=800;
		mass=17;
	};
	class 10rnd_762_svt: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svt_10b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\svt_10b";
		count=10;
		descriptionShort="$STR_svt_10b_desc";
		initSpeed=810;
		mass=10;
	};
	class 40rnd_762_rpk: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_762rpk_40b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\mag762_45b";
		displaynameshort="";
		ammo="B_762x39_pula";
		count=40;
		descriptionShort="$STR_762rpk_40b_desc";
		initSpeed=740;
		lastRoundsTracer=3;
		mass=13;
	};
	class 40rnd_trs_762_rpk: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_762rpk_trs_40b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\mag762_45b_trs";
		displaynameshort="$STR_545mag_trs_sname";
		ammo="B_762x39_trs_pula";
		count=40;
		descriptionShort="$STR_762rpk_trs_40b_desc";
		initSpeed=740;
		tracersEvery=1;
		lastRoundsTracer=40;
		mass=13;
	};
	class 75rnd_762_rpk: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_762rpk_75b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk_75r";
		displaynameshort="";
		ammo="B_762x39_pula";
		count=75;
		descriptionShort="$STR_762rpk_75b_desc";
		initSpeed=740;
		lastRoundsTracer=5;
		mass=24;
	};
	class 30rnd_545_mag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_545mag_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\mag545_30b";
		ammo="B_545x39_pula";
		count=30;
		initSpeed=900;
		tracersEvery=0;
		lastRoundsTracer=2;
		descriptionShort="$STR_545mag_desc";
		mass=9;
	};
	class 30rnd_545_mag_trs: 30rnd_545_mag
	{
		author="Street-you";
		displayName="$STR_545mag_trs_name";
		displaynameshort="$STR_545mag_trs_sname";
		descriptionShort="$STR_545mag_trs_desc";
		ammo="B_545x39_trs_pula";
		picture="\wpn_r_f_cnfg\ammo\ammon\mag545_30b_trs";
		tracersEvery=1;
		lastRoundsTracer=30;
		mass=9;
	};
	class 30rnd_545_mag_uw: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_545mag_uw_name";
		displaynameshort="$STR_545mag_uw_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\mag545_30b_uw";
		ammo="B_545x39_uw_pula";
		count=30;
		initSpeed=430;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_545mag_uw_desc";
		mass=9;
	};
	class 26rnd_aps_a: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_apsa_26b_name";
		descriptionShort="$STR_apsa_26b_desc";
		displaynameshort="$STR_545mag_uw_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\aps_26b";
		ammo="B_556x45_dual";
		count=26;
		initSpeed=380;
		tracersEvery=0;
		lastRoundsTracer=0;
		effectFly="AmmoUnderwater";
		mass=14;
	};
	class 2pul_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_2b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=2;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\dvustv_2b";
		descriptionshort="$STR_2b_drob_desc";
		mass=2;
	};
	class 7pul_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_7b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=7;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\drobov_7b";
		descriptionshort="$STR_7b_drob_desc";
		mass=6;
	};
	class 5drob_mp133k: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_mp133_5b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=5;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\mp133k_5b";
		descriptionshort="$STR_mp133_5b_drob_desc";
		mass=7;
	};
	class 5pul_s1_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_5b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=5;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\s1_5b";
		descriptionshort="$STR_s1_5b_drob_desc";
		mass=7;
	};
	class 3pul_s1_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_3b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=3;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\s1_3b";
		descriptionshort="$STR_s1_3b_drob_desc";
		mass=5;
	};
	class 20pul_s1_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_20b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=20;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\s1_20b";
		descriptionshort="$STR_s1_20b_drob_desc";
		mass=24;
	};
	class 2pul_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_2b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=2;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\dvustv_2b_p";
		descriptionshort="$STR_2b_pula_desc";
		mass=2;
	};
	class 7pul_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_7b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=7;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\drobov_p_7b";
		descriptionshort="$STR_7b_pula_desc";
		mass=7;
	};
	class 5pul_mp133k: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_mp133_5b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=5;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\mp133k_p_5b";
		descriptionshort="$STR_mp133_5b_pula_desc";
		mass=7;
	};
	class 3pul_s1_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_3b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=3;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\s1_p_3b";
		descriptionshort="$STR_s1_3b_pula_desc";
		mass=5;
	};
	class 5pul_s1_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_5b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=5;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\s1_p_5b";
		descriptionshort="$STR_s1_5b_pula_desc";
		mass=7;
	};
	class 20pul_s1_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_20b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=20;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammo\ammon\s1_p_20b";
		descriptionshort="$STR_s1_20b_pula_desc";
		mass=24;
	};
	class 5pul_s2_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s2_5b_drob_name";
		displaynameshort="$STR_drob";
		count=5;
		ammo="drob_20cal";
		initspeed=405;
		picture="\wpn_r_f_cnfg\ammo\ammon\s2_8b";
		descriptionshort="$STR_s2_5b_drob_desc";
		mass=7;
	};
	class 8pul_s2_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s2_8b_drob_name";
		displaynameshort="$STR_drob";
		count=8;
		ammo="drob_20cal";
		initspeed=405;
		picture="\wpn_r_f_cnfg\ammo\ammon\s2_8b";
		descriptionshort="$STR_s2_8b_drob_desc";
		mass=10;
	};
	class 20pul_s2_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s2_20b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_20cal";
		count=20;
		initspeed=405;
		picture="\wpn_r_f_cnfg\ammo\ammon\s2_20b";
		descriptionshort="$STR_s2_20b_drob_desc";
		mass=24;
	};
	class 5pul_s2_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s2_5b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_20cal";
		count=5;
		initspeed=405;
		picture="\wpn_r_f_cnfg\ammo\ammon\s2_p_8b";
		descriptionshort="$STR_s2_5b_pula_desc";
		mass=7;
	};
	class 8pul_s2_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s2_8b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_20cal";
		count=8;
		initspeed=405;
		picture="\wpn_r_f_cnfg\ammo\ammon\s2_p_8b";
		descriptionshort="$STR_s2_8b_pula_desc";
		mass=10;
	};
	class 20pul_s2_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s2_20b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_20cal";
		count=20;
		initspeed=405;
		picture="\wpn_r_f_cnfg\ammo\ammon\s2_p_20b";
		descriptionshort="$STR_s2_20b_pula_desc";
		mass=24;
	};
	class 18Rnd_9mm_gsh18: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x19p_pula";
		count=18;
		displayname="$STR_9mm_18b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\gsh18_18b";
		descriptionShort="$STR_9mm_18b_desc";
		initSpeed=470;
		mass=7;
	};
	class 20Rnd_Mag_kedr: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x18_pula";
		count=20;
		displayname="$STR_9mm_kedr_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\kedr_20b";
		descriptionShort="STR_9mm_kedr_desc";
		displaynameshort="";
		initSpeed=350;
		mass=8;
	};
	class 30rnd_mag_kedr: 20Rnd_Mag_kedr
	{
		author="Street-you";
		count=30;
		displayname="$STR_9mm30b_kedr_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\kedr_30b";
		descriptionShort="$STR_9mm30b_kedr_desc";
		initSpeed=350;
		mass=10;
	};
	class 30rnd_mag_trs_kedr: 30rnd_mag_kedr
	{
		author="Street-you";
		displayname="$STR_9mm30b_kedr_trs_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\kedr_30b_trs";
		descriptionShort="$STR_9mm30b_kedr_trs_desc";
		displaynameshort="$STR_9x19_vit_trs_sname";
		tracersEvery=1;
		lastRoundsTracer=30;
		mass=10;
	};
	class 8Rnd_Mag_pm: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x18_pula";
		count=8;
		displayname="$STR_pm_8b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\pm_8b";
		descriptionShort="$STR_pm_8b_desc";
		displaynameshort="";
		initSpeed=350;
		mass=6;
	};
	class 12Rnd_Mag_pm: 8Rnd_Mag_pm
	{
		author="Street-you";
		scope=2;
		count=8;
		displayname="$STR_pm_12b_name";
		descriptionShort="$STR_pm_12b_desc";
		mass=6;
	};
	class 85Rnd_Mag_aps_sh: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x18_pula";
		count=85;
		displayname="$STR_aps_w_sh_85b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\aps_shit_85b";
		descriptionShort="$STR_aps_w_sh_85b_desc";
		displaynameshort="";
		initSpeed=360;
		mass=38;
	};
	class 64Rnd_Mag_biz: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x18_pula";
		count=64;
		displayname="$STR_biz64_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\bizon_64b";
		descriptionShort="$STR_biz64_desc";
		displaynameshort="";
		initSpeed=320;
		mass=26;
	};
	class 7Rnd_nagan_rev: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x18_pula";
		count=7;
		displayname="$STR_ng_7b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\nagan_7b";
		descriptionShort="$STR_ng_7b_desc";
		displaynameshort="";
		initSpeed=280;
		mass=3;
	};
	class 17Rnd_9x19_Mag: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x19p_pula";
		count=17;
		displayname="$STR_so_17b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\so_17b";
		descriptionShort="$STR_so_17b_desc";
		displaynameshort="";
		initSpeed=470;
		mass=6;
	};
	class 30Rnd_so_9x19_Mag: 17Rnd_9x19_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_9x19_pula";
		count=30;
		displayname="$STR_so_30b_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\pp_so_30b";
		descriptionShort="$STR_so_30b_desc";
		mass=12;
	};
	class 30Rnd_556_mag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_556mag name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\ak556mag_30b";
		ammo="B_556x45_Ball";
		count=30;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="$STR_556mag_desc";
		mass=8;
	};
	class 30Rnd_556_mag_trs: 30Rnd_556x45_Stanag_Tracer_Green
	{
		author="Street-you";
		displayName="$STR_556mag_trs_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\ak556mag_30b_trs";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_556mag_desc";
		displaynameshort="$STR_545mag_trs_sname";
		mass=8;
	};
	class 45Rnd_556_rpkmag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_556_rpkmag name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk201_45b";
		ammo="B_556x45_Ball";
		count=45;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=3;
		descriptionShort="$STR_556_rpkmag_desc";
		mass=11;
	};
	class 45Rnd_556trs_rpkmag: 45Rnd_556_rpkmag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_556trs_rpkmag name";
		displaynameshort="$STR_545mag_trs_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk201_45b_trs";
		tracersEvery=1;
		lastRoundsTracer=45;
		descriptionShort="$STR_55trs_rpkmag_desc";
		mass=11;
	};
	class 75Rnd_556_rpkmag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_556_rpk75mag name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\rpk201_75r";
		ammo="B_556x45_Ball";
		count=75;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=3;
		descriptionShort="$STR_556_rpk75mag_desc";
		mass=24;
	};
	class 1Rnd_vog25_osk: 1Rnd_HE_Grenade_shell
	{
		author="Street-you";
		scope=2;
		type=16;
		displayName="$STR_vog25osk_name";
		displayNameShort="$STR_vog25osk_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\gp_vog.paa";
		ammo="G_40mm_HE";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_vog25osk_desc";
		mass=4;
	};
	class 1Rnd_vog25_dim_w: 1Rnd_Smoke_Grenade_shell
	{
		author="Street-you";
		displayName="$STR_grd40w_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\gp_gdm_w.paa";
		ammo="G_40mm_Smoke";
		descriptionShort="$STR_grd40w_desc";
		displayNameShort="$STR_grd40w_sname";
	};
	class 1Rnd_vog25_dim_r: 1Rnd_SmokeRed_Grenade_shell
	{
		author="Street-you";
		displayName="$STR_grd40r_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\gp_gdm_r.paa";
		ammo="G_40mm_SmokeRed";
		displayNameShort="$STR_grd40r_sname";
		descriptionShort="$STR_grd40r_desc";
	};
	class 1Rnd_vog25_dim_g: 1Rnd_SmokeGreen_Grenade_shell
	{
		author="Street-you";
		displayName="$STR_grd40g_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\gp_gdm_g.paa";
		ammo="G_40mm_SmokeGreen";
		displayNameShort="$STR_grd40g_sname";
		descriptionShort="$STR_grd40g_desc";
	};
	class 1Rnd_vog_t: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vog_t_name";
		displayNameShort="$STR_vog_t_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\vog_t.paa";
		ammo="B_30mm_HE";
		count=1;
		initSpeed=120;
		maxLeadSpeed=30;
		tracersEvery=0;
		descriptionShort="$STR_vog_t_desc";
		mass=3;
	};
	class 5Rnd_mag_osv: 5Rnd_127x108_Mag
	{
		scope=2;
		author="Street-you";
		displayName="$STR_127m_osv_name";
		descriptionShort="$STR_127m_osv_desc";
		picture="\wpn_r_f_cnfg\ammo\ammon\12x108.paa";
		initSpeed=830;
		ammo="B_127x108_Ball";
		mass=15;
		count=5;
	};
	class 5Rnd_mag_btz_osv: 5Rnd_127x108_Mag
	{
		scope=2;
		author="Street-you";
		displayName="$STR_127m_bzt_osv_name";
		displayNameShort="$STR_BZT_name";
		descriptionShort="$STR_127m_bzt_osv_desc";
		picture="\wpn_r_f_cnfg\ammo\ammon\12x108_bzt.paa";
		initSpeed=840;
		ammo="B_127x108_APDS";
		mass=15;
		count=5;
		tracersEvery=1;
		lastRoundsTracer=5;
	};
	class 20rnd_sks_mag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sks20mag_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\sks_20b";
		ammo="B_762x39_pula";
		count=20;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_sks20mag_desc";
		mass=13;
	};
	class 10rnd_sks_mag: 20rnd_sks_mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sks10mag_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\sks_10b";
		count=10;
		descriptionShort="$STR_sks10mag_desc";
		mass=8;
	};
	class 10rnd_soc762_mag: 20rnd_sks_mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sks10mag_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\soc_mag_10b";
		count=10;
		descriptionShort="$STR_soc10mag_desc";
		mass=12;
	};
	class 10rnd_svdk_mag: 10Rnd_93x64_DMR_05_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svdk_10b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\svdk_10b";
		count=10;
		initSpeed=870;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_svdk_10b_desc";
		mass=13;
	};
	class 71rnd_psh_bar: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_ppsh71_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\psh_71b";
		count=71;
		ammo="B_762x25_pula";
		initSpeed=480;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_ppsh71_desc";
		mass=30;
	};
	class 35rnd_psh_mag: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_ppsh35_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\psh_35b";
		count=35;
		ammo="B_762x25_pula";
		initSpeed=480;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_ppsh35_desc";
		mass=11;
	};
	class 35rnd_psh_trs_mag: 35rnd_psh_mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_ppsh35trs_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\psh_trs_35b";
		ammo="B_762x25_trs_pula";
		tracersEvery=1;
		lastRoundsTracer=35;
		descriptionShort="$STR_ppsh35trs_desc";
		mass=11;
	};
	class 8rnd_tt_mag: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_tt8_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon2\tt33_8rnd";
		count=8;
		ammo="B_762x25_pula";
		initSpeed=470;
		tracersEvery=0;
		lastRoundsTracer=1;
		mass=5;
		descriptionShort="$STR_tt8_desc";
	};
	class 5rnd_762_mos: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_mos5b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\mosya_5b";
		count=5;
		descriptionShort="$STR_mos5b_desc";
		initSpeed=875;
		mass=5;
	};
	class 47rnd_dpbar: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_dp_47b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\bar_dp_47b";
		count=47;
		mass=32;
		descriptionShort="$STR_dp_47b_desc";
		initSpeed=800;
	};
	class 47rnd_dpbar_trs: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_dp_47b_trs_name";
		displaynameshort="$STR_545mag_trs_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\bar_dp_47b_trs";
		count=47;
		mass=32;
		tracersEvery=1;
		lastRoundsTracer=47;
		descriptionShort="$STR_dp_47b_trs_desc";
		initSpeed=800;
	};
	class 25rnd_avt_fedor: 30Rnd_65x39_caseless_mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_65_aris_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\af_25b";
		count=25;
		descriptionShort="$STR_65_aris_desc";
		initSpeed=770;
		mass=15;
	};
	class 5Rnd_mag_ptrs: 5Rnd_127x108_Mag
	{
		scope=2;
		author="Street-you";
		displayName="$STR_145mm_name";
		descriptionShort="$STR_145mm_desc";
		picture="\wpn_r_f_cnfg\ammo\ammon\ptrs_5b.paa";
		initSpeed=1020;
		ammo="B_145x114_Ball";
		tracersEvery=1;
		lastRoundsTracer=5;
		mass=18;
		count=5;
	};
	class 4rnd_spp_clip_uw: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_spp_uw_name";
		displaynameshort="$STR_545mag_uw_sname";
		picture="\wpn_r_f_cnfg\ammo\ammon\spp1_4b";
		ammo="B_45x40r_pula";
		count=4;
		initSpeed=260;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_spp_uw_desc";
		mass=7;
	};
	class 30rnd_762_mag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_762mag_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\ak762_30b";
		ammo="B_762x39_pula";
		count=30;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=2;
		descriptionShort="$STR_762mag_desc";
		mass=9;
	};
	class 30rnd_762_mag_trs: 30rnd_762_mag
	{
		author="Street-you";
		displayName="$STR_762mag_trs_name";
		displaynameshort="$STR_545mag_trs_sname";
		descriptionShort="$STR_762mag_trs_desc";
		ammo="B_762x39_trs_pula";
		picture="\wpn_r_f_cnfg\ammo\ammon\ak762_30b_trs";
		tracersEvery=1;
		lastRoundsTracer=30;
		mass=9;
	};
	class 10rnd_308_soc: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_308soc_name";
		displaynameshort="";
		count=10;
		picture="\wpn_r_f_cnfg\ammo\ammon\soc95_10b";
		descriptionShort="$STR_308soc_desc";
		initSpeed=820;
		mass=7;
	};
	class 20rnd_127_ash: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_ash_mag_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\ash12_20b";
		count=20;
		ammo="B_127x55_pula";
		initSpeed=293;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_ash_mag_desc";
		mass=22;
	};
	class 10rnd_127_vssk: 20rnd_127_ash
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vssk_mag_name";
		picture="\wpn_r_f_cnfg\ammo\ammon\ash12_20b";
		count=10;
		initSpeed=295;
		mass=17;
		descriptionShort="$STR_vssk_mag_desc";
	};
	class 100rnd_korob_pkp: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob100r_pkp_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\pkp_korob_100b";
		count=100;
		ammo="B_762x54_pula";
		initSpeed=830;
		tracersEvery=0;
		lastRoundsTracer=5;
		mass=40;
		descriptionShort="$STR_korob100r_pkp_desc";
	};
	class 100rnd_korob_trs_pkp: 100rnd_korob_pkp
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob100r_trs_pkp_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\pkp_korob_trs_100b";
		ammo="B_762x54_trs_pula";
		tracersEvery=1;
		lastRoundsTracer=100;
		descriptionShort="$STR_korob100r_trs_pkp_desc";
	};
	class 200rnd_korob_pkp: 100rnd_korob_pkp
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob200r_pkp_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon\pkp_korob_200b";
		count=200;
		ammo="B_762x54_pula";
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=7;
		mass=65;
		descriptionShort="$STR_korob200r_pkp_desc";
	};
	class 3pul_ks23_kart: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_ks23_3b_kart_name";
		displaynameshort="$STR_drob";
		count=3;
		ammo="kart_shrap25_32cal";
		initspeed=380;
		picture="\wpn_r_f_cnfg\ammo\ammon\ks23_drob_3b";
		descriptionshort="$STR_ks23_3b_kart_desc";
		mass=6;
	};
	class 3pul_ks23_barrik: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_ks23_3b_barr_name";
		displaynameshort="$STR_pula";
		ammo="barrik_pula_23cal";
		count=3;
		initspeed=380;
		picture="\wpn_r_f_cnfg\ammo\ammon\ks23_pula_3b";
		descriptionshort="$STR_ks23_3b_barr_desc";
		mass=6;
	};
	class 10rnd_mag_vss_doz: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vss_10b_dz_name";
		displaynameshort="$STR_dz_am";
		picture="\wpn_r_f_cnfg\ammo\ammon2\vss_10b_dz";
		count=10;
		ammo="B_9_39_sp5_pula";
		initSpeed=295;
		tracersEvery=0;
		lastRoundsTracer=1;
		mass=7;
		descriptionShort="$STR_vss_10b_dz_desc";
	};
	class 10rnd_mag_vss_doz_trs: 10rnd_mag_vss_doz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vss_10b_trs_dz_name";
		displaynameshort="$STR_dz_trs_am";
		picture="\wpn_r_f_cnfg\ammo\ammon2\vss_10b_trs_dz";
		ammo="B_9_39_sp5_pula_trs";
		initSpeed=295;
		tracersEvery=1;
		lastRoundsTracer=10;
		mass=7;
		descriptionShort="$STR_vss_10b_trs_dz_desc";
	};
	class 20rnd_mag_vss_doz: 10rnd_mag_vss_doz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_val_20b_dz_name";
		picture="\wpn_r_f_cnfg\ammo\ammon2\val_20b_dz";
		count=20;
		descriptionShort="$STR_val_20b_dz_desc";
		mass=10;
	};
	class 30rnd_mag_vss_doz: 10rnd_mag_vss_doz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sr3_30b_dz_name";
		picture="\wpn_r_f_cnfg\ammo\ammon2\sr3_30b_dz";
		count=30;
		descriptionShort="$STR_sr3_30b_dz_desc";
		mass=13;
	};
	class 10rnd_mag_vss_sz: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vss_10b_sz_name";
		displaynameshort="$STR_sz_am";
		picture="\wpn_r_f_cnfg\ammo\ammon2\vss_10b_sz";
		count=10;
		ammo="B_9_39_pab9_pula";
		initSpeed=309;
		tracersEvery=0;
		lastRoundsTracer=1;
		mass=7;
		descriptionShort="$STR_vss_10b_sz_desc";
	};
	class 10rnd_mag_vss_sz_trs: 10rnd_mag_vss_sz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vss_10b_trs_sz_name";
		displaynameshort="$STR_sz_trs_am";
		picture="\wpn_r_f_cnfg\ammo\ammon2\vss_10b_trs_sz";
		ammo="B_9_39_pab9_pula_trs";
		initSpeed=309;
		tracersEvery=1;
		lastRoundsTracer=10;
		mass=7;
		descriptionShort="$STR_vss_10b_trs_sz_desc";
	};
	class 20rnd_mag_vss_sz: 10rnd_mag_vss_sz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_val_20b_sz_name";
		picture="\wpn_r_f_cnfg\ammo\ammon2\val_20b_sz";
		count=20;
		descriptionShort="$STR_val_20b_sz_desc";
		mass=10;
	};
	class 30rnd_mag_vss_sz: 10rnd_mag_vss_sz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sr3_30b_sz_name";
		picture="\wpn_r_f_cnfg\ammo\ammon2\sr3_30b_sz";
		count=30;
		descriptionShort="$STR_sr3_30b_sz_desc";
		mass=13;
	};
	class 100rnd_korob_rpd: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob100r_rpd_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon2\100b_korob_rpd";
		count=100;
		ammo="B_762x39_pula";
		initSpeed=830;
		tracersEvery=0;
		lastRoundsTracer=5;
		mass=35;
		descriptionShort="$STR_korob100r_rpd_desc";
	};
	class 5pul_mtc_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_5b_drob_name";
		displaynameshort="$STR_drob";
		ammo="drob_12cal";
		count=5;
		initspeed=398;
		picture="\wpn_r_f_cnfg\ammo\ammon2\barab_mc_5rnd_drob";
		descriptionshort="$STR_mtc_5b_drob_desc";
		mass=6;
	};
	class 5pul_mtc_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_s1_5b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=5;
		initspeed=398;
		picture="\wpn_r_f_cnfg\ammo\ammon2\barab_mc_5rnd_pul";
		descriptionshort="$STR_mtc_5b_pula_desc";
		mass=6;
	};
	class 20rnd_mag_vsk_doz: 10rnd_mag_vss_doz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_val_20b_dz_name";
		picture="\wpn_r_f_cnfg\ammo\ammon2\20rnd_vsk_dz_mag";
		count=20;
		descriptionShort="$STR_vsk_20b_dz_desc";
		mass=10;
	};
	class 20rnd_mag_vsk_sz: 10rnd_mag_vss_sz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_val_20b_sz_name";
		picture="\wpn_r_f_cnfg\ammo\ammon2\20rnd_vsk_sz_mag";
		count=20;
		descriptionShort="$STR_vsk_20b_sz_desc";
		mass=10;
	};
	class 20rnd_9a_762_mag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_762vsk_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammo\ammon2\20rnd_9a7_mag";
		ammo="B_762x39_pula";
		count=20;
		initSpeed=735;
		tracersEvery=0;
		lastRoundsTracer=2;
		descriptionShort="$STR_762vsk_desc";
		mass=8;
	};
};
class CfgAmmo
{
	class SubmunitionBase;
	class ShotgunBase;
	class BulletBase;
	class G_40mm_HE;
	class B_65x39_Caseless;
	class B_127x54_Ball;
	class drob_12cal: ShotgunBase
	{
		hit=17;
		indirectHit=0;
		indirectHitRange=0.5;
		visibleFire=4;
		audibleFire=7;
		visibleFireTime=3;
		cost=1;
		tracerColor[]={1,0.050000001,0.050000001,1};
		tracerColorR[]={1,0.050000001,0.050000001,1};
		airFriction=-0.0049999999;
		caliber=0.5;
		cartridge="FxCartridge_slug";
	};
	class drob_20cal: drob_12cal
	{
		hit=19;
		cost=0.94999999;
	};
	class kart_shrap25_32cal: drob_12cal
	{
		hit=25;
	};
	class pulia_12cal: BulletBase
	{
		hit=25;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=4;
		audibleFire=7;
		visibleFireTime=2;
		cartridge="FxCartridge_slug";
		cost=1;
		tracerColor[]={1,0.050000001,0.050000001,1};
		tracerColorR[]={1,0.050000001,0.050000001,1};
		airFriction=-0.0049999999;
		caliber=0.5;
		hitArmor[]=
		{
			"soundHitArmor1",
			0.69999999,
			"soundHitArmor2",
			0.30000001
		};
	};
	class pulia_20cal: pulia_12cal
	{
		hit=27;
		cost=0.94999999;
	};
	class barrik_pula_23cal: pulia_12cal
	{
		hit=37;
		indirectHit=0.050000001;
		indirectHitRange=0.050000001;
	};
	class B_545x39_pula: BulletBase
	{
		hit=8;
		indirectHit=0;
		indirectHitRange=0;
		cost=1;
		typicalSpeed=910;
		airFriction=-0.0012000001;
		waterFriction=-0.30000001;
		caliber=0.69999999;
		deflecting=30;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		visibleFire=4;
		audibleFire=6;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		class CamShakeExplode
		{
			power="(5^0.5)";
			duration="((round (5^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_545x39_trs_pula: B_545x39_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_545x39_uw_pula: B_545x39_pula
	{
		waterFriction=-0.003;
		effectFly="AmmoUnderwater";
		nvgOnly=1;
	};
	class B_762x39_pula: B_65x39_Caseless
	{
		hit=10.75;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=5.5;
		audibleFire=8;
		cost=1.2;
		typicalSpeed=730;
		caliber=1.05;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		airFriction=-0.00089999998;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		class CamShakeExplode
		{
			power="(6.2^0.5)";
			duration="((round (6.2^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((6^0.5)*3)";
		};
		class CamShakeHit
		{
			power=6;
			duration="((round (6.2^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_762x39_trs_pula: B_762x39_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x54_pula: BulletBase
	{
		hit=12.2;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=6;
		audibleFire=9;
		cost=1.2;
		airLock="true";
		typicalSpeed=800;
		caliber=1.6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
		airFriction=-0.001;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		class CamShakeExplode
		{
			power="(8^0.5)";
			duration="((round (8^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_762x54_trs_pula: B_762x54_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_9x19_pula: BulletBase
	{
		hit=5.9000001;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_9mm";
		cost=100;
		typicalSpeed=590;
		airFriction=-0.0014;
		caliber=1.7;
		deflecting=40;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		visibleFire=3;
		audibleFire=4;
		class CamShakeExplode
		{
			power="(2.7^0.5)";
			duration="((round (2.7^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2.7^0.5)*3)";
		};
		class CamShakeHit
		{
			power=3;
			duration="((round (2.7^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_9x19_trs_pula: B_9x19_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_9x19p_pula: B_9x19_pula
	{
		hit=5.6999998;
		typicalSpeed=480;
	};
	class B_9x19p_trs_pula: B_9x19_pula
	{
		hit=5.6999998;
		typicalSpeed=480;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_9x18_pula: BulletBase
	{
		hit=5.3000002;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_9mm";
		cost=100;
		typicalSpeed=450;
		airFriction=-0.0016;
		caliber=1.7;
		deflecting=45;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		visibleFire=2;
		audibleFire=3;
		class CamShakeExplode
		{
			power="(2.55^0.5)";
			duration="((round (2.55^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2.55^0.5)*3)";
		};
		class CamShakeHit
		{
			power=3;
			duration="((round (2.55^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_9x18_trs_pula: B_9x18_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_762x25_pula: BulletBase
	{
		hit=5.6500001;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_9mm";
		cost=100;
		typicalSpeed=470;
		airFriction=-0.0016;
		caliber=1.7;
		deflecting=45;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		visibleFire=2;
		audibleFire=4;
		class CamShakeExplode
		{
			power="(2.62^0.5)";
			duration="((round (2.62^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2.62^0.5)*3)";
		};
		class CamShakeHit
		{
			power=3;
			duration="((round (2.62^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_762x25_trs_pula: B_762x25_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_145x114_Ball: BulletBase
	{
		hit=130;
		indirectHit=1.7;
		indirectHitRange=2.0999999;
		cartridge="FxCartridge_127";
		visibleFire=90;
		audibleFire=120;
		visibleFireTime=5;
		cost=6.4000001;
		airLock=1;
		caliber=3.7;
		typicalSpeed=1020;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.63;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00085999997;
		dangerRadiusBulletClose=15;
		dangerRadiusHit=26;
		suppressionRadiusBulletClose=12;
		suppressionRadiusHit=14;
		class CamShakeExplode
		{
			power="(24^0.5)";
			duration="((round (24^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((24^0.5)*3)";
		};
		class CamShakeHit
		{
			power=24;
			duration="((round (24^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_45x40r_pula: BulletBase
	{
		hit=6.0999999;
		indirectHit=0.0099999998;
		indirectHitRange=0.0099999998;
		cartridge="FxCartridge_9mm";
		cost=100;
		typicalSpeed=260;
		airFriction=-0.0014;
		caliber=1.7;
		deflecting=40;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.5;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		nvgOnly=0;
		visibleFire=3;
		audibleFire=4;
		effectFly="AmmoUnderwater";
		waterFriction=-0.001;
		class CamShakeExplode
		{
			power="(2.7^0.5)";
			duration="((round (2.7^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((2.7^0.5)*3)";
		};
		class CamShakeHit
		{
			power=3;
			duration="((round (2.7^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_127x55_pula: B_127x54_Ball
	{
		hit=21;
		typicalSpeed=297;
		airFriction=-0.0012000001;
		caliber=4.3000002;
		deflecting=30;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		visibleFire=2;
		audibleFire=3;
		class CamShakeExplode
		{
			power="(8^0.5)";
			duration="((round (8^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power=8;
			duration="((round (8^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_9_39_sp5_pula: BulletBase
	{
		hit=13;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=2;
		audibleFire=3;
		cost=0.5;
		airLock="true";
		typicalSpeed=295;
		caliber=1.3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
		airFriction=-0.001;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=6;
		suppressionRadiusBulletClose=3;
		suppressionRadiusHit=4;
		class CamShakeExplode
		{
			power="(8^0.5)";
			duration="((round (8^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_9_39_sp5_pula_trs: B_9_39_sp5_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_9_39_pab9_pula: BulletBase
	{
		hit=14.3;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		visibleFire=2.3;
		audibleFire=3.5;
		cost=0.51999998;
		airLock="true";
		typicalSpeed=309;
		caliber=1.3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
		airFriction=-0.001;
		dangerRadiusBulletClose=5;
		dangerRadiusHit=7;
		suppressionRadiusBulletClose=4;
		suppressionRadiusHit=5;
		class CamShakeExplode
		{
			power="(8^0.5)";
			duration="((round (8^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power=5;
			duration="((round (5^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_9_39_pab9_pula_trs: B_9_39_pab9_pula
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455975416";
};
