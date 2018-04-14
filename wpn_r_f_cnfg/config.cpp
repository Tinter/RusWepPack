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
  class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class 16Rnd_9x21_Mag;
	class 30Rnd_556x45_Stanag;
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
		displaynameshort="";
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
	class 71rnd_psh_bar: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_ppsh71_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\psh_71b";
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
		picture="\wpn_r_f_cnfg\ammon\psh_35b";
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
		displayName="$STR_ppsh35_trs_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\psh_trs_35b";
		ammo="B_762x25_trs_pula";
		tracersEvery=1;
		lastRoundsTracer=35;
		descriptionShort="$STR_ppsh35_trs_desc";
		mass=11;
	};
	class 7Rnd_nagan_rev: 16Rnd_9x21_Mag
	{
		author="Street-you";
		scope=2;
		ammo="B_762x25_pula";
		count=7;
		displayname="$STR_ng_7b_name";
		picture="\wpn_r_f_cnfg\ammon\nagan_7b";
		descriptionShort="$STR_ng_7b_desc";
		displaynameshort="";
		initSpeed=280;
		mass=3;
	};
	class 100rnd_korob_rpd: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob100r_rpd_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\100b_korob_rpd";
		count=100;
		ammo="HLC_762x39_Ball";
		initSpeed=830;
		tracersEvery=0;
		lastRoundsTracer=5;
		mass=35;
		descriptionShort="$STR_korob100r_rpd_desc";
	};
	class 100rnd_korob_trs_rpd: 100rnd_korob_rpd
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob100r_rpd_trs_name";
		count=100;
		ammo="HLC_762x39_Tracer";
		tracersEvery=2;
		lastRoundsTracer=5;
		mass=35;
		descriptionShort="$STR_korob100r_rpd_trs_desc";
	};
	class 2pul_drob: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_2b_drob_name";
		displaynameshort="$STR_drob";
		ammo="rhs_ammo_12g_00buckshot";
		count=2;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammon\dvustv_2b";
		descriptionshort="$STR_2b_drob_desc";
		mass=2;
	};
	class 2pul_pula: CA_Magazine
	{
		author="Street-you";
		displayname="$STR_2b_pula_name";
		displaynameshort="$STR_pula";
		ammo="pulia_12cal";
		count=2;
		initspeed=396;
		picture="\wpn_r_f_cnfg\ammon\dvustv_2b_p";
		descriptionshort="$STR_2b_pula_desc";
		mass=2;
	};
	class 10rnd_sks_mag: 30Rnd_556x45_Stanag
	{
		author="Street-you";
		scope=2;
		ammo="HLC_762x39_Ball";
		displayName="$STR_sks10mag_name";
		displaynameshort="";
		descriptionShort="$STR_sks10mag_desc";
		picture="\wpn_r_f_cnfg\ammon\sks_10b";
		count=10;
		initSpeed=730;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=8;
	};
};
class CfgAmmo
{
  class BulletBase;
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
};