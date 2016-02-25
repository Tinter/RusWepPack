class CfgPatches
{
	class weap_StreetYou_all_ammo
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
class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class 5rnd_762_mos: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_mos5b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\mosya_5b";
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
		picture="\wpn_r_f_cnfg\ammon\bar_dp_47b";
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
		picture="\wpn_r_f_cnfg\ammon\bar_dp_47b_trs";
		count=47;
		mass=32;
		tracersEvery=1;
		lastRoundsTracer=47;
		descriptionShort="$STR_dp_47b_trs_desc";
		initSpeed=800;
	};
	class 10rnd_762_svt: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svt_10b_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\svt_10b";
		count=10;
		descriptionShort="$STR_svt_10b_desc";
		initSpeed=810;
		mass=10;
	};
};