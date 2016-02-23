class CfgPatches
{
	class weap_StreetYou_akm_all
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class single_close_optics1;
class single_medium_optics1;
class single_far_optics1;
class single_far_optics2;
class fullauto_medium;
class SlotInfo;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryOpticsItem_Base_F;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class asdg_str_SideM;
class asdg_str_SideW;
class asdg_OpticRail1913;
class asdg_OpticRail_dvtl_str;
class asdg_MuzzleSlot_762R;
class CfgRecoils
{
	class recoil_default;
	class recoil_str_ak762: recoil_default
	{
		muzzleOuter[]={0.2,1.1849999,0.30000001,0.34999999};
		kickBack[]={0.026000001,0.041999999};
		temporary=0.014;
	};
	class recoil_str_ak762_gp: recoil_default
	{
		muzzleOuter[]={0.2,1.15,0.30000001,0.31999999};
		kickBack[]={0.022,0.037999999};
		temporary=0.013;
	};
};
class CfgWeapons
{
	class arifle_Katiba_F;
	class UGL_F;
	class str_akm_dvtl: arifle_Katiba_F
	{
		author="Sam64";
		displayname="$STR_akm_l_name";
		descriptionshort="$STR_akm_lw_desc";
		model="\wpn_r_f5\akm\akm_l.p3d";
		picture="\wpn_r_f5\akm\ui\gear_akm_l_x_ca";
		magazines[]=
		{
			"30rnd_762_mag",
			"30rnd_762_mag_trs"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\AK.rtm"
		};
		reloadAction="str_ReloadAK1";
		initspeed=715;
		dexterity=1.418;
		recoil="recoil_str_ak762";
		discreteDistance[]={100,200,300,400,500,600};
		discreteDistanceInitIndex=1;
		maxZeroing=600;
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\wpn_r_f_snd\str_reload_AK1.wav",
			0.89999998,
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
					0.182794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.182794,
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
				begin1[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			dispersion=0.00125;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_single_prone_smg_02";
			minRange=5;
			minRangeProbab=0.44999999;
			midRange=160;
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
					0.182794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.182794,
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
				begin1[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak762\762_akm.wav",
					1.3,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak762\762_akm_sil.wav",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.25,
					"begin2",
					0.25,
					"begin3",
					0.25,
					"begin4",
					0.25
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.1;
			dispersion=0.00125;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_single_prone_smg_02";
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=30;
			midRangeProbab=0.60000002;
			maxRange=55;
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
			maxRange=340;
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
			mass=100;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={-0.050000001,0.41};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.28999999};
				iconScale=0.2;
				access=1;
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
	class str_akm_cs: str_akm_dvtl
	{
		author="Valve";
		displayname="$STR_akm_cs_name";
		descriptionshort="$STR_akm_lw_desc";
		model="\wpn_r_f5\akm\akm_cs.p3d";
		picture="\wpn_r_f5\akm\ui\gear_akm_c_x_ca";
		magazines[]=
		{
			"30rnd_762_mag",
			"30rnd_762_mag_trs"
		};
		recoil="recoil_str_ak762";
	};
	class str_akm_w: str_akm_dvtl
	{
		author="Sam64";
		displayname="$STR_akm_w_name";
		descriptionshort="$STR_akm_lw_desc";
		model="\wpn_r_f5\akm\akm_w.p3d";
		picture="\wpn_r_f5\akm\ui\gear_akm_w_x_ca";
		magazines[]=
		{
			"30rnd_762_mag",
			"30rnd_762_mag_trs"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\AK.rtm"
		};
		recoil="recoil_str_ak762";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=100;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={-0.050000001,0.41};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_no4_762",
					"muzzle_str_tgpa_762",
					"muzzle_str_ATG"
				};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.52999997,0.30000001};
				iconScale=0.2;
				access=1;
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.33000001,0.435};
				iconScale=0.2;
			};
		};
	};
	class str_akm_l_gl: str_akm_dvtl
	{
		author="Sam64/TIGG";
		displayname="$STR_akm_lgl_name";
		descriptionshort="$STR_akm_gp_desc";
		model="\wpn_r_f5\akm\akm_l_gl.p3d";
		picture="\wpn_r_f5\akm\ui\gear_akm_x_ca";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\hlc_core\animation\gesture\handpose_GP25.rtm"
		};
		muzzles[]=
		{
			"this",
			"str_gp30m_gl"
		};
		class str_gp30m_gl: UGL_F
		{
			displayName="$STR_gp30m_gl";
			reloadTime=0.1;
			reloadaction="iHLC_GestureReloadGP30";
			magazines[]=
			{
				"1Rnd_vog25_osk",
				"1Rnd_vog25_dim_w",
				"1Rnd_vog25_dim_r",
				"1Rnd_vog25_dim_g"
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
			mass=100;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={-0.050000001,0.41};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_str_no4_762",
					"muzzle_str_tgpa_762",
					"muzzle_str_ATG"
				};
			};
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.28999999};
				iconScale=0.2;
				access=1;
			};
		};
	};
	class str_akm_w_gl: str_akm_dvtl
	{
		author="Sam64/TIGG";
		displayname="$STR_akm_wgl_name";
		descriptionshort="$STR_akm_gp_desc";
		model="\wpn_r_f5\akm\akm_w_gl.p3d";
		picture="\wpn_r_f5\akm\ui\gear_akm_w_gl_x_ca";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\hlc_core\animation\gesture\handpose_GP25.rtm"
		};
		muzzles[]=
		{
			"this",
			"str_gp30m_gl"
		};
		class str_gp30m_gl: UGL_F
		{
			displayName="$STR_gp30m_gl";
			reloadTime=0.1;
			reloadaction="iHLC_GestureReloadGP30";
			magazines[]=
			{
				"1Rnd_vog25_osk",
				"1Rnd_vog25_dim_w",
				"1Rnd_vog25_dim_r",
				"1Rnd_vog25_dim_g"
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
			mass=100;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={-0.050000001,0.40000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.52999997,0.30000001};
				iconScale=0.2;
				access=1;
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.33000001,0.43000001};
				iconScale=0.2;
			};
		};
	};
	class str_akm: str_akm_dvtl
	{
		author="Sam64/TIGG";
		displayname="$STR_akm_name";
		descriptionshort="$STR_akm_gp_desc";
		model="\wpn_r_f5\akm\akm.p3d";
		picture="\wpn_r_f5\akm\ui\gear_akm_x_ca";
		reloadAction="iHLC_GestureReloadAK";
		reloadMagazineSound[]=
		{
			"\wpn_r_f_snd\ak545\reload",
			1,
			1,
			30
		};
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\hlc_core\animation\gesture\handpose_GP25.rtm"
		};
		muzzles[]=
		{
			"this",
			"str_gp30m_gl"
		};
		class str_gp30m_gl: UGL_F
		{
			displayName="$STR_gp30m_gl";
			reloadTime=0.1;
			reloadaction="iHLC_GestureReloadGP30";
			magazines[]=
			{
				"1Rnd_vog25_osk",
				"1Rnd_vog25_dim_w",
				"1Rnd_vog25_dim_r",
				"1Rnd_vog25_dim_g"
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
			mass=100;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[]={-0.050000001,0.41};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455979704";
};
