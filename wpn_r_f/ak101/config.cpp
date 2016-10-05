class CfgPatches
{
	class weap_StreetYou_ak101
	{
		units[]={};
		weapons[]={
			"str_ak101",
			"str_ak101gp",
			"str_ak101_2",
			"str_ak101_2gp"
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
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_OpticRail_dvtl_str;
class asdg_OpticRail1913;
class asdg_str_SideM;
class asdg_MuzzleSlot_556R;
class CfgRecoils
{
	class recoil_default;
	class recoil_str_ak556: recoil_default
	{
		muzzleOuter[]={0.2,0.875,0.30000001,0.245};
		kickBack[]={0.0153,0.034299999};
		temporary=0.012;
	};
	class recoil_str_ak556_gp: recoil_default
	{
		muzzleOuter[]={0.2,0.75,0.30000001,0.18000001};
		kickBack[]={0.0099999998,0.029999999};
		temporary=0.0099999998;
	};
};
class CfgWeapons
{
	class arifle_Katiba_F;
	class UGL_F;
	class str_ak101: arifle_Katiba_F
	{
		author="Adept, SAM61, IIacTyX";
		displayname="$STR_ak101_name";
		model="\wpn_r_f\ak101\ka.p3d";
		picture="\wpn_r_f\ak101\ui\gear_ak101_x_ca";
		reloadAction="HLC_GestureReloadAK";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\ak101.rtm"
		};
		initspeed=920;
		dexterity=1.418;
		recoil="recoil_str_ak556";
		aiRateOfFireDistance=650;
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=1;
		maxZeroing=600;
		mass=120;
		magazines[] = {
			"hlc_30rnd_556x45_EPR_AK",
			"hlc_30rnd_556x45_SOST_AK",
			"hlc_30rnd_556x45_SPR_AK",
			"hlc_30rnd_556x45_Sub_AK",
			"hlc_30rnd_556x45_T_AK"
		};
		descriptionshort="$STR_ak101_desc";
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
			    soundSetShot[] = {"ak102_Shot_SoundSet","ak102_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_silencerShot_SoundSet","ak74_silencerTail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion=0.0011399999;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_ktb";
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
			    soundSetShot[] = {"ak102_Shot_SoundSet","ak102_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_silencerShot_SoundSet","ak74_silencerTail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion=0.0011399999;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_ktb";
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
			maxRange=110;
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
			maxRange=350;
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
			class MuzzleSlot: asdg_MuzzleSlot_556R
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
				iconPosition[]={0.30000001,0.41};
				iconScale=0.2;
				access=1;
			};
		};
	};
	class str_ak101gp: str_ak101
	{
		author="Adept, SAM61, IIacTyX\TIGG";
		displayname="$STR_ak101gp_name";
		descriptionshort="$STR_ak101gp_desc";
		model="\wpn_r_f\ak101\ka_gp.p3d";
		picture="\wpn_r_f\ak101\ui\gear_ak101gp_x_ca";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_core\animation\gesture\handpose_GP25.rtm"
		};
		dexterity=1.3099999;
		mass=120;
		recoil="recoil_str_ak556_gp";
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
			class MuzzleSlot: asdg_MuzzleSlot_556R
			{
				iconPosition[]={0,0.396};
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
	class str_ak101_2: str_ak101
	{
		author="Adept, SAM61, IIacTyX";
		displayname="$STR_ak101_2_name";
		model="\wpn_r_f\ak101\ka_01.p3d";
		picture="\wpn_r_f\ak101\ui\gear_ak1012_x_ca";
		reloadAction="HLC_GestureReloadAK";
		mass=120;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"fullauto_medium",
			"Burst_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Burst: Mode_Burst
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
			    soundSetShot[] = {"ak102_Shot_SoundSet","ak102_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
			    soundSetShot[] = {"ak74_silencerShot_SoundSet","ak74_silencerTail_SoundSet"};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.1;
			dispersion=0.0011399999;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=70;
			midRangeProbab=0.60000002;
			maxRange=130;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=4;
			minRange=0;
			minRangeProbab=0.40000001;
			midRange=57;
			midRangeProbab=0.69999999;
			maxRange=80;
			maxRangeProbab=0.07;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			burst=2;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=80;
			midRangeProbab=0.80000001;
			maxRange=140;
			maxRangeProbab=0.15000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=120;
			class MuzzleSlot: asdg_MuzzleSlot_556R
			{
				iconPosition[]={-0.0020000001,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.54299998,0.31999999};
				iconScale=0.2;
				access=1;
			};
			class PointerSlot: asdg_str_SideM
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.30000001,0.40000001};
				iconScale=0.2;
				access=1;
			};
		};
	};
	class str_ak101_2gp: str_ak101_2
	{
		author="Adept, SAM61, IIacTyX\Tigg";
		displayname="$STR_ak101_2gp_name";
		model="\wpn_r_f\ak101\ka_01_gp.p3d";
		picture="\wpn_r_f\ak101\ui\gear_ak1012_gp";
		reloadAction="HLC_GestureReloadAK";
		descriptionshort="$STR_ak101_2gp_desc";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\hlc_core\animation\gesture\handpose_GP25.rtm"
		};
		mass=120;
		recoil="recoil_str_ak556_gp";
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
			class MuzzleSlot: asdg_MuzzleSlot_556R
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.54299998,0.29699999};
				iconScale=0.2;
				access=1;
			};
		};
	};
};
