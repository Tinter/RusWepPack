class CfgPatches
{
	class weap_StreetYou_ak74m
	{
		units[]={};
		weapons[]={
			"str_ak74m",
			"str_ak74m_gp"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"weap_StreetYou_main"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail_dvtl_str;
class asdg_str_SideM;
class asdg_MuzzleSlot_545R;
class CfgRecoils
{
	str_ak74m_recoil[]={0.059999999,-0.02,0.090000004,0.050000001,0.029999999,0.059999999,0.050000001,-0.02,-0.07,0.039999999,0,0};
	str_ak74m_recoilProne[]=
	{
		0.039999999,
		-0.0099999998,
		0.050000001,
		0.029999999,
		0.0099999998,
		0.039999999,
		0.029999999,
		-0.02,
		"-0.09  0.02",
		0,
		0
	};
	class recoil_default;
	class recoil_str_ak545: recoil_default
	{
		muzzleOuter[]={0.2,0.86000001,0.30000001,0.23};
		kickBack[]={0.015,0.034000002};
		temporary=0.012;
	};
	class recoil_str_ak545_gp: recoil_default
	{
		muzzleOuter[]={0.2,0.76999998,0.30000001,0.18000001};
		kickBack[]={0.0099999998,0.028999999};
		temporary=0.0099999998;
	};
	recoil_auto_str_ak74[]=
	{
		0,
		0,
		0,
		0.029999999,
		"35.43*((0.001))*(0.3)*0.45",
		"3.27*((0.004))*(2)",
		0.029999999,
		"30.17*((0.001))*(0.5)*0.5",
		"1.131*((0.004))*(2.5)",
		0.029999999,
		"19.005*((0.001))*(0.7)*0.5",
		"0.64*((0.004))*(2.8)",
		0.059999999,
		"7.288*((0.001))*(0.85)*0.5",
		"0.265*((0.004))*(3.3)",
		0.059999999,
		"-2.42*((0.001))*(0.3)*0.51",
		"-0.097*((0.004))*(6)",
		0.061999999,
		"-3.55*((0.001))*(0.5)*0.5",
		"-0.14*((0.004))*(4)",
		0.059999999,
		"-3.67*((0.001))*(0.5)*0.5",
		"-0.14*((0.004))*(2.6)",
		0.059999999,
		"-3.128*((0.001))*(0.3)*0.5",
		"-0.115*((0.004))*(0.8)",
		0.059999999,
		0,
		0
	};
	recoil_auto_prone_str_ak74[]=
	{
		0,
		0,
		0,
		0.029999999,
		"35.43*((0.001))*(0.3)*0.5",
		"3.287*((0.004))*(0.6)",
		0.029999999,
		"30.17*((0.001))*(0.5)*0.5",
		"1.21*((0.004))*(1)",
		0.029999999,
		"18.755*((0.001))*(0.7)*0.5",
		"0.74*((0.004))*(1.4)",
		0.059999999,
		"7.18*((0.001))*(0.9)*0.5",
		"0.255*((0.004))*(1.7)",
		0.059999999,
		"-2.4*((0.001))*(0.3)*0.5",
		"-0.094*((0.004))*(4)",
		0.059999999,
		"-3.5*((0.001))*(0.5)*0.5",
		"-0.135*((0.004))*(2.6)",
		0.059999999,
		"-3.655*((0.001))*(0.5)*0.5",
		"-0.14*((0.004))*(1)",
		0.059999999,
		"-3.127*((0.001))*(0.3)*0.5",
		"-0.113*((0.004))*(0.35)",
		0.059999999,
		0,
		0
	};
};
class CfgWeapons
{
	class arifle_Katiba_F;
	class UGL_F;
	class str_ak74m: arifle_Katiba_F
	{
		author="Adept, SAM61, IIacTyX";
    baseWeapon = "str_ak74m";
		displayname="$STR_ak74m_name";
		model="\wpn_r_f\ak74m\ka.p3d";
		picture="\wpn_r_f\ak74m\ui\gear_ak74m_x_ca";
		reloadAction="HLC_GestureReloadAK";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"
		};
		initspeed=900;
		dexterity=1.418;
		recoil="recoil_str_ak545";
		aiRateOfFireDistance=650;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=1;
		maxZeroing=600;
		mass=120;
		magazines[]=
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_S_AK",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
		};
		descriptionshort="$STR_ak74m_desc";
		drySound[]=
		{
			"\wpn_r_f\snd\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\hlc_wp_ak\snd\ak74m_reload",
			0.9,
			1,
			30
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_Shot_SoundSet","ak74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_silencerShot_SoundSet","ak74_silencerTail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion=0.0011399999;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=5;
			minRangeProbab=0.44999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=320;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_Shot_SoundSet","ak74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_silencerShot_SoundSet","ak74_silencerTail_SoundSet"};
			};
			reloadTime=0.092;
			dispersion=0.0011399999;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.60000002;
			maxRange=60;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=2;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=70;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=330;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=120;
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0,0.41999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.33000001};
				iconScale=0.2;
				access=1;
				compatibleItems[]=
				{
					"optic_str_pso1",
					"optic_str_kobra",
					"optic_str_pkas",
					"optic_str_1p29"
				};
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			};
			class PointerSlot: asdg_str_SideM
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.33000001,0.40000001};
				iconScale=0.2;
				access=1;
			};
		};
	};
	class str_ak74m_gp: str_ak74m
	{
		author="Adept, SAM61, IIacTyX\TIGG";
    baseWeapon = "str_ak74m_gp";
		displayname="$STR_ak74mgp_name";
		descriptionshort="$STR_ak74mgp_desc";
		model="\wpn_r_f\ak74m\ak_gp.p3d";
		picture="\wpn_r_f\ak74m\ui\gear_ak74mgp_x_ca";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_core\animation\gesture\handpose_GP25.rtm"
		};
		dexterity=1.3099999;
		mass=120;
		recoil="recoil_str_ak545_gp";
		muzzles[]=
		{
			"this",
			"str_gp30m_gl"
		};
		class str_gp30m_gl: UGL_F
		{
			displayName="$STR_gp30m_gl";
			reloadTime=0.1;
			reloadaction="AV_GestureReloadGP30";
			reloadmagazinesound[] = {
				"\hlc_wp_ak\snd\gp30_reload",
				1.1,
				1,
				20
			};
			magazines[] = {
				"hlc_VOG25_AK",
				"hlc_GRD_White",
				"hlc_GRD_Red",
				"hlc_GRD_Green",
				"hlc_GRD_Yellow",
				"hlc_GRD_Purple",
				"hlc_GRD_Blue",
				"hlc_GRD_Orange",
				"CUP_IlumFlareWhite_GP25_M",
				"CUP_IlumFlareRed_GP25_M",
				"CUP_IlumFlareGreen_GP25_M",
				"CUP_1Rnd_HE_GP25_M",
				"CUP_FlareWhite_GP25_M",
				"CUP_FlareGreen_GP25_M",
				"CUP_FlareRed_GP25_M",
				"CUP_FlareYellow_GP25_M",
				"CUP_1Rnd_SMOKE_GP25_M",
				"CUP_1Rnd_SMOKERED_GP25_M",
				"CUP_1Rnd_SMOKEGREEN_GP25_M",
				"CUP_1Rnd_SMOKEYELLOW_GP25_M"
			};
			useModelOptics="false";
			useExternalOptic="false";
			cameraDir="op_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=0;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=120;
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.050000001,0.41999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.33000001};
				iconScale=0.2;
				access=1;
				compatibleItems[]=
				{
					"optic_str_pso1",
					"optic_str_kobra",
					"optic_str_pkas",
					"optic_str_1p29"
				};
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			};
		};
	};
};
