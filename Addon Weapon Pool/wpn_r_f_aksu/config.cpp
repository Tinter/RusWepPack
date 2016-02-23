class CfgPatches
{
	class weap_StreetYou_ak_ukoro4
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
class UnderBarrelSlot;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_OpticRail_dvtl_str;
class asdg_str_SideW;
class asdg_MuzzleSlot_545R;
class CfgRecoils
{
	str_aku_recoil[]={0.050000001,0.1,2.0999999,0.039999999,-2.2,2.3,0.050000001,-2.1700001,2.22,0.039999999,2.3,3,0.039999999,-1.9,3};
	str_aku_recoilProne[]={0.050000001,1.34,1.27,0.039999999,-1.25,1.4,0.050000001,-1.3200001,1.35,0.039999999,1.34,1.35,0.039999999,-1.21,1.33};
	class recoil_default;
	class recoil_str_aksu: recoil_default
	{
		muzzleOuter[]={0.31999999,0.89999998,0.40000001,0.31};
		kickBack[]={0.017999999,0.039999999};
		temporary=0.017000001;
	};
	class recoil_str_akmsu: recoil_default
	{
		muzzleOuter[]={0.31999999,0.95999998,0.40000001,0.31999999};
		kickBack[]={0.017999999,0.039999999};
		temporary=0.018999999;
	};
};
class CfgWeapons
{
	class arifle_TRG21_F;
	class UGL_F;
	class str_aks74u: arifle_TRG21_F
	{
		author="TheLama,Acid Snake";
		displayname="$STR_aks74u_name";
		model="wpn_r_f_aksu\aks74u.p3d";
		picture="\wpn_r_f_aksu\ui\gear_aks74u_x_ca";
		reloadAction="DZ_GestureReloadAK";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f\anim\AK.rtm"
		};
		initspeed=750;
		mass=80;
		dexterity=1.596;
		discreteDistance[]={100,200,300,400,500};
		discreteDistanceInitIndex=0;
		maxZeroing=500;
		recoil="recoil_str_aksu";
		magazines[]=
		{
			"30rnd_545_mag",
			"30rnd_545_mag_trs"
		};
		descriptionshort="$STR_aks74u_desc";
		drySound[]=
		{
			"\wpn_r_f_snd\ak545\empty.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\wpn_r_f_snd\Ak74_reload_dz",
			1,
			1,
			30
		};
		modes[]=
		{
			"Single",
			"FullAuto"
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
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",
					0.50118721,
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
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
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
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
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
			reloadTime=0.092;
			dispersion=0.0012000001;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			minRange=2;
			minRangeProbab=0.5;
			midRange=190;
			midRangeProbab=0.69999999;
			maxRange=290;
			maxRangeProbab=0.30000001;
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
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",
					0.50118721,
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
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
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
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
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
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.94999999,
					1,
					500
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
			reloadTime=0.086000003;
			dispersion=0.0012000001;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=55;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=2;
			minRange=2;
			minRangeProbab=0.40000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=90;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=0;
			minRangeProbab=0.2;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=250;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRange=80;
			minRangeProbab=0.30000001;
			midRange=260;
			midRangeProbab=0.69999999;
			maxRange=490;
			maxRangeProbab=0.1;
			aiRateOfFire=8;
			aiRateOfFireDistance=600;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=80;
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.02,0.30000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
	};
	class str_aks74un: str_aks74u
	{
		author="TheLama,Acid Snake";
		displayname="$STR_aks74un_name";
		model="wpn_r_f_aksu\aks74un.p3d";
		recoil="recoil_str_aksu";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=4;
			class CowsSlot: asdg_OpticRail_dvtl_str
			{
				iconPosition[]={0.52999997,0.25};
				iconScale=0.2;
				access=1;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.02,0.30000001};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
	};
	class str_aks74u_b18: str_aks74u
	{
		author="TheLama,Acid Snake/Street-you";
		displayname="$STR_aks74ub81_name";
		model="wpn_r_f_aksu\aks74u_b18.p3d";
		picture="\wpn_r_f_aksu\ui\gear_aks74ub18_x_ca";
		recoil="recoil_str_aksu";
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=80;
			class CowsSlot: asdg_OpticRail1913
			{
				access=1;
				iconPosition[]={0.38999999,0.30000001};
				iconScale=0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.022,0.41999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
		};
	};
	class str_aks74u_tak: str_aks74u
	{
		author="TheLama,Acid Snake/Street-you/BIStudio";
		displayname="$STR_aks74u_takt_name";
		descriptionshort="$STR_aks74u_takt_desc";
		model="wpn_r_f_aksu\aks74ut.p3d";
		picture="\wpn_r_f_aksu\ui\gear_aks74u_tak_x_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"
		};
		reloadAction="iHLC_GestureReloadAK";
		dexterity=1.6474;
		recoil="recoil_trg20";
		class Single: Single
		{
			reloadTime=0.086000003;
			dispersion=0.00118;
			recoil="str_aku_recoil";
			recoilProne="str_aku_recoilProne";
			minRange=2;
			minRangeProbab=0.5;
			midRange=180;
			midRangeProbab=0.69999999;
			maxRange=290;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.086000003;
			dispersion=0.00118;
			recoil="str_aku_recoil";
			recoilProne="str_aku_recoilProne";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=35;
			midRangeProbab=0.69999999;
			maxRange=55;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=80;
			class CowsSlot: asdg_OpticRail1913
			{
				access=1;
				iconPosition[]={0.55000001,0.33000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_str_SideW
			{
				access=1;
				iconPosition[]={0.30000001,0.43000001};
				iconScale=0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[]={0.090000004,0.41999999};
				iconScale=0.2;
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.25,0.69999999};
				iconScale=0.2;
				access=1;
			};
		};
	};
	class str_aks74ub: str_aks74u
	{
		author="TheLama,Acid Snake/BIStudio";
		displayname="$STR_aks74ub_name";
		model="wpn_r_f_aksu\aks74ub.p3d";
		descriptionshort="$STR_aks74ub_desc";
		picture="\wpn_r_f_aksu\ui\gear_aks74ub_x_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\wpn_r_f_anm\str_anim\HaAnm\aks74ub.rtm"
		};
		fireLightDuration=0;
		fireLightIntensity=0;
		dexterity=0.94569999;
		recoil="recoil_str_aksu";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",
					0.50118721,
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
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
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
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
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
			reloadTime=0.092;
			dispersion=0.00118;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			minRange=2;
			minRangeProbab=0.5;
			midRange=180;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\closure_TRG20_02",
					0.50118721,
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
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
					1,
					1500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74.wav",
					1.2,
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
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
				};
				begin2[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
				};
				begin3[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
				};
				begin4[]=
				{
					"\wpn_r_f_snd\ak545\545_ak74_sil.wav",
					0.85000002,
					1,
					500
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
			reloadTime=0.086000003;
			dispersion=0.00118;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.2;
			aiRateOfFire=1e-006;
		};
		muzzles[]=
		{
			"this",
			"str_bs1_gl"
		};
		class str_bs1_gl: UGL_F
		{
			displayName="$STR_bs1_gl";
			reloadTime=0.1;
			reloadaction="iHLC_GestureReloadGP30";
			magazines[]=
			{
				"1Rnd_vog_t"
			};
			useModelOptics="false";
			useExternalOptic="false";
			cameraDir="gl_look";
			discreteDistance[]={50};
			discreteDistanceCameraPoint[]=
			{
				"gl_eye1"
			};
			discreteDistanceInitIndex=0;
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=80;
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455972881";
};
