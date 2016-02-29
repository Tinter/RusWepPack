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
	class 10rnd_762_svd: 20Rnd_762x51_Mag
	{
		author="Street-you";
		scope=2;
		displayName="$STR_svd_10b_name";
		displaynameshort="";
		ammo="CUP_B_762x54_Ball";
		picture="\wpn_r_f_cnfg\ammon\svd_10b";
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
		ammo="CUP_B_762x54_Ball_Green_Tracer";
		picture="\wpn_r_f_cnfg\ammon\svd_10b";
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
		ammo="CUP_B_762x54_Ball";
		picture="\wpn_r_f_cnfg\ammon\svd_20b";
		count=20;
		descriptionShort="$STR_svd_20b_desc";
		initSpeed=800;
		mass=17;
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
	class 100rnd_korob_pkp: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob100r_pkp_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\pkp_korob_100b";
		count=100;
		ammo="CUP_B_762x54_Ball";
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
		displayName="$STR_korob100r_pkp_trs_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\pkp_korob_trs_100b";
		ammo="CUP_B_762x54_Ball_Green_Tracer";
		tracersEvery=1;
		lastRoundsTracer=100;
		descriptionShort="$STR_korob100r_pkp_trs_desc";
	};
	class 200rnd_korob_pkp: 100rnd_korob_pkp
	{
		author="Street-you";
		scope=2;
		displayName="$STR_korob200r_pkp_name";
		displaynameshort="";
		picture="\wpn_r_f_cnfg\ammon\pkp_korob_200b";
		count=200;
		ammo="CUP_B_762x54_Ball";
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=7;
		mass=65;
		descriptionShort="$STR_korob200r_pkp_desc";
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
	class 10rnd_mag_vss_doz: CA_Magazine
	{
		author="Street-you";
		scope=2;
		displayName="$STR_vss_10b_dz_name";
		displaynameshort="$STR_dz_am";
		picture="\wpn_r_f_cnfg\ammon\vss_10b_dz";
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
		picture="\wpn_r_f_cnfg\ammon\vss_10b_trs_dz";
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
		picture="\wpn_r_f_cnfg\ammon\val_20b_dz";
		count=20;
		descriptionShort="$STR_val_20b_dz_desc";
		mass=10;
	};
	class 30rnd_mag_vss_doz: 10rnd_mag_vss_doz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sr3_30b_dz_name";
		picture="\wpn_r_f_cnfg\ammon\sr3_30b_dz";
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
		picture="\wpn_r_f_cnfg\ammon\vss_10b_sz";
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
		picture="\wpn_r_f_cnfg\ammon\vss_10b_trs_sz";
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
		picture="\wpn_r_f_cnfg\ammon\val_20b_sz";
		count=20;
		descriptionShort="$STR_val_20b_sz_desc";
		mass=10;
	};
	class 30rnd_mag_vss_sz: 10rnd_mag_vss_sz
	{
		author="Street-you";
		scope=2;
		displayName="$STR_sr3_30b_sz_name";
		picture="\wpn_r_f_cnfg\ammon\sr3_30b_sz";
		count=30;
		descriptionShort="$STR_sr3_30b_sz_desc";
		mass=13;
	};
};
class CfgAmmo
{
    class BulletBase;
	class CUP_B_762x54_Ball_Green_Tracer;
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
	class CUP_B_762x54_Ball: CUP_B_762x54_Ball_Green_Tracer
	{
	    model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
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