class CfgPatches
{
	class a2_rpg7_ThatGuyHats_spasibo
	{
		requiredaddons[]=
		{
			"A3_Weapons_F_Launchers_LAW"
		};
		requiredversion=0.1;
		weapons[]=
		{
			"launch_RPG7V"
		};
		units[]={};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		iGestureReloadRPG7V="iGestureReloadRPG7V";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			iGestureReloadRPG7V[]=
			{
				"iGestureReloadRPG7V",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class iGestureReloadRPG7V: Default
		{
			file="a2_rpg7\reloadRPG7.rtm";
			looped=0;
			speed=0.40000001;
			mask="launcher";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.050000001,0,0.94999999,0,1,1};
		};
	};
};
class CfgAmmo
{
	class R_PG32V_F;
	class gl_R_PG7V_AT: R_PG32V_F
	{
		model="a2_rpg7\PG7_Rocket";
		hit=265;
		indirectHit=21;
		indirectHitRange=3.2;
		cost=150;
		maxSpeed=295;
		initTime=0.1;
		sideAirFriction=0.001;
		airFriction=0.5;
		thrustTime=0.5;
		thrust=467;
		fuseDistance=5;
		effectsMissile="missile2";
		effectsMissileInit="RocketBackEffectsNLAW";
		timeToLive=5;
	};
	class gl_R_PG7V_AA: gl_R_PG7V_AT
	{
		airLock=1;
	};
	class gl_R_PG7V_APERS: gl_R_PG7V_AT
	{
		allowAgainstInfantry=1;
	};
	class gl_R_PG7V_APERS_AA: gl_R_PG7V_AT
	{
		airLock=1;
		allowAgainstInfantry=1;
	};
	class gl_R_PG7VM_AT: gl_R_PG7V_AT
	{
		model="a2_rpg7\PG7VM_Rocket";
		hit=305;
		cost=200;
	};
	class gl_R_PG7VM_AA: gl_R_PG7VM_AT
	{
		airLock=1;
	};
	class gl_R_PG7VM_APERS: gl_R_PG7VM_AT
	{
		allowAgainstInfantry=1;
	};
	class gl_R_PG7VM_APERS_AA: gl_R_PG7VM_AT
	{
		airLock=1;
		allowAgainstInfantry=1;
	};
	class gl_R_PG7VL_AT: gl_R_PG7V_AT
	{
		model="a2_rpg7\PG7VL_Rocket";
		hit=505;
		cost=350;
		sideAirFriction=0.1;
		airFriction=0.60000002;
		thrust=180;
		thrustTime=0.5;
	};
	class gl_R_PG7VL_AA: gl_R_PG7VL_AT
	{
		airLock=1;
	};
	class gl_R_PG7VL_APERS: gl_R_PG7VL_AT
	{
		allowAgainstInfantry=1;
	};
	class gl_R_PG7VL_APERS_AA: gl_R_PG7VL_AT
	{
		airLock=1;
		allowAgainstInfantry=1;
	};
	class gl_R_PG7VR_AT: gl_R_PG7V_AT
	{
		model="a2_rpg7\PG7VR_Rocket";
		hit=655;
		cost=500;
		maxSpeed=110;
		initTime=0.15000001;
		airFriction=1;
		sideAirFriction=0.090000004;
		thrust=120;
		thrustTime=0.5;
	};
	class gl_R_OG7V_AT: gl_R_PG7V_AT
	{
		model="a2_rpg7\OG7V_Rocket";
		hit=25;
		indirectHit=20;
		indirectHitRange=7;
		cost=200;
		class CamShakeExplode
		{
			power="(110*0.2)";
			duration="((round (110^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5 + 110^0.5)*8)";
		};
		CraterEffects="GrenadeCrater";
		ExplosionEffects="GrenadeExplosion";
		airLock=0;
		allowAgainstInfantry=1;
		airFriction=0.2;
		sideAirFriction=0.1;
		initTime=0;
		thrust=0;
		thrustTime=0.050000001;
	};
	class gl_R_TBG7V_AT: gl_R_PG7VR_AT
	{
		model="a2_rpg7\TBG7V_Rocket";
		hit=105;
		indirectHit=90;
		indirectHitRange=10;
		cost=500;
		class CamShakeExplode
		{
			power="(110*0.2)";
			duration="((round (110^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((5 + 110^0.5)*8)";
		};
		CraterEffects="BombCrater";
		explosionEffects="BombExplosion";
		airLock=0;
		allowAgainstInfantry=1;
	};
};
class CfgMagazines
{
	class RPG32_F;
	class s_RPG7_PG7V: RPG32_F
	{
		scope=2;
		model="a2_rpg7\PG7_proxy";
		modelSpecial="a2_rpg7\rpg7_launcher_loaded";
		displayName="$STR_bi_pg7v_name";
		displaynameshort="$STR_bi_pg7v_name";
		descriptionShort="$STR_bi_pg7v_desc";
		ammo="gl_R_PG7V_AT";
		picture="\a2_rpg7\icons\m_pg7_ca.paa";
		initSpeed=120;
		maxLeadSpeed=80;
		mass=60;
	};
	class s_RPG7_PG7V_AA: s_RPG7_PG7V
	{
		ammo="gl_R_PG7V_AA";
		maxLeadSpeed=150;
	};
	class s_RPG7_PG7V_APERS: s_RPG7_PG7V
	{
		ammo="gl_R_PG7V_APERS";
	};
	class s_RPG7_PG7V_APERS_AA: s_RPG7_PG7V_AA
	{
		ammo="gl_R_PG7V_APERS_AA";
	};
	class s_RPG7_PG7VM: s_RPG7_PG7V
	{
		model="a2_rpg7\PG7VM_proxy";
		modelSpecial="a2_rpg7\rpg7m_launcher_loaded";
		displayName="$STR_bi_pg7vm_name";
		displaynameshort="$STR_bi_pg7vm_name";
		ammo="gl_R_PG7VM_AT";
		picture="\a2_rpg7\icons\m_pg7vm_ca.paa";
	};
	class s_RPG7_PG7VM_AA: s_RPG7_PG7VM
	{
		ammo="gl_R_PG7VM_AA";
		maxLeadSpeed=150;
	};
	class s_RPG7_PG7VM_APERS: s_RPG7_PG7VM
	{
		ammo="gl_R_PG7VM_APERS";
	};
	class s_RPG7_PG7VM_APERS_AA: s_RPG7_PG7VM_AA
	{
		ammo="gl_R_PG7VM_APERS_AA";
	};
	class s_RPG7_PG7VL: s_RPG7_PG7V
	{
		model="a2_rpg7\PG7VL_proxy";
		modelSpecial="a2_rpg7\rpg7L_launcher_loaded";
		displayName="$STR_bi_pg7vl_name";
		displaynameshort="$STR_bi_pg7vl_name";
		ammo="gl_R_PG7VL_AT";
		picture="\a2_rpg7\icons\m_PG7VL_ca.paa";
		initSpeed=115;
		mass=80;
	};
	class s_RPG7_PG7VL_AA: s_RPG7_PG7VL
	{
		ammo="gl_R_PG7VL_AA";
		maxLeadSpeed=150;
	};
	class s_RPG7_PG7VL_APERS: s_RPG7_PG7VL
	{
		ammo="gl_R_PG7VL_APERS";
	};
	class s_RPG7_PG7VL_APERS_AA: s_RPG7_PG7VL_AA
	{
		ammo="gl_R_PG7VL_APERS_AA";
	};
	class s_RPG7_PG7VR: s_RPG7_PG7V
	{
		model="a2_rpg7\PG7VR_proxy";
		modelSpecial="a2_rpg7\rpg7VR_launcher_loaded";
		displayName="$STR_bi_pg7vr_name";
		displaynameshort="$STR_bi_pg7vr_name";
		descriptionShort="$STR_bi_pg7vr_desc";
		ammo="gl_R_PG7VR_AT";
		picture="\a2_rpg7\icons\M_PG7VR_ca.paa";
		initspeed=66;
		mass=100;
	};
	class s_RPG7_OG7V: s_RPG7_PG7V
	{
		model="a2_rpg7\OG7V_proxy";
		modelSpecial="a2_rpg7\rpg7o_launcher_loaded";
		displayName="$STR_bi_og7v_name";
		displaynameshort="$STR_bi_og7v_name";
		descriptionShort="$STR_bi_og7v_desc";
		ammo="gl_R_OG7V_AT";
		picture="\a2_rpg7\icons\M_OG7V_ca.paa";
		initspeed=152;
		maxLeadSpeed=23;
		mass=40;
	};
	class s_RPG7_TBG7V: s_RPG7_PG7V
	{
		model="a2_rpg7\TBG7V_proxy";
		modelSpecial="a2_rpg7\tbg7v_launcher_loaded";
		displayName="$STR_bi_tbg7v_name";
		displaynameshort="$STR_bi_tbg7v_name";
		descriptionShort="$STR_bi_tbg7v_desc";
		ammo="gl_R_TBG7V_AT";
		picture="\a2_rpg7\icons\m_tbg7v_ca.paa";
		initspeed=66;
		maxLeadSpeed=23;
		mass=100;
	};
};
class CowsSlot;
class CfgWeapons
{
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class str_launch_RPG7V: launch_RPG32_F
	{
		scope=2;
		displayName="$STR_bi_rpg7v_name";
		model="a2_rpg7\rpg7_launcher";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"a2_rpg7\RPG7.rtm"
		};
		reloadAction="iGestureReloadRPG7V";
		modelOptics="-";
		magazines[]=
		{
			"s_RPG7_PG7V",
			"s_RPG7_PG7VM",
			"s_RPG7_PG7VL",
			"s_RPG7_PG7VR",
			"s_RPG7_OG7V",
			"s_RPG7_TBG7V",
			"s_RPG7_PG7V_AA",
			"s_RPG7_PG7VM_AA",
			"s_RPG7_PG7VL_AA",
			"s_RPG7_PG7V_APERS",
			"s_RPG7_PG7VM_APERS",
			"s_RPG7_PG7VL_APERS",
			"s_RPG7_PG7V_APERS_AA",
			"s_RPG7_PG7VM_APERS_AA",
			"s_RPG7_PG7VL_APERS_AA"
		};
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"str_optic_PGO7V",
					"str_optic_PGO7V2",
					"str_optic_PGO7V3",
					"str_optic_NSPU_RPG"
				};
			};
		};
		class OpticsModes
		{
			class irons
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					""
				};
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				distanceZoomMin=200;
				distanceZoomMax=500;
				cameraDir="aimpoint";
				discreteDistance[]={100,200,300,400,500};
				discreteDistanceCameraPoint[]=
				{
					"eye1",
					"eye",
					"eye2",
					"eye3",
					"eye4"
				};
				discreteDistanceInitIndex=0;
			};
		};
		picture="\a2_rpg7\icons\w_rpg7_ca.paa";
		aiRateOfFire=7;
		aiRateOfFireDistance=300;
		minRange=10;
		midRange=200;
		maxRange=500;
		soundFly[]=
		{
			"a2_rpg7\Fly",
			0.77828002,
			1,
			500
		};
		reloadMagazineSound[]=
		{
			"a2_rpg7\Reload",
			1.5,
			1,
			35
		};
		drySound[]=
		{
			"a2_rpg7\dry",
			1,
			1,
			10
		};
		begin1[]=
		{
			"a2_rpg7\RPG7V_s1",
			2,
			1,
			130
		};
		begin2[]=
		{
			"a2_rpg7\RPG7V_s2",
			2,
			1,
			130
		};
		begin3[]=
		{
			"a2_rpg7\RPG7V_s3",
			2,
			1,
			130
		};
		begin4[]=
		{
			"a2_rpg7\RPG7V_s4",
			2,
			1,
			130
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
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class str_optic_PGO7V: ItemCore
	{
		scope=2;
		displayName="$STR_bi_pgo7v_name";
		picture="\a2_rpg7\icons\pgo7v_icon.paa";
		model="\a2_rpg7\PGO7V_optic.p3d";
		descriptionShort="$STR_bi_pgo7v_desc";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			optics=1;
			modelOptics="\a2_rpg7\PGO7V_reticle.p3d";
			class OpticsModes
			{
				class regular
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.138;
					opticsZoomMax=0.138;
					opticsZoomInit=0.138;
					distanceZoomMin=200;
					distanceZoomMax=200;
					memoryPointCamera="sighteye";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="sightview";
					visionMode[]=
					{
						"Normal"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
				};
				class night: regular
				{
					opticsID=2;
					modelOptics="\a2_rpg7\PGO7V_reticle_night.p3d";
				};
			};
		};
	};
	class str_optic_PGO7V2: str_optic_PGO7V
	{
		displayName="$STR_bi_pgo7v2_name";
		picture="\a2_rpg7\icons\pgo7v2_icon.paa";
		model="\a2_rpg7\PGO7V2_optic.p3d";
		class ItemInfo: ItemInfo
		{
			modelOptics="\a2_rpg7\PGO7V2_reticle.p3d";
			class OpticsModes: OpticsModes
			{
				class regular: regular
				{
				};
				class night: regular
				{
					opticsID=2;
					modelOptics="\a2_rpg7\PGO7V2_reticle_night.p3d";
				};
			};
		};
	};
	class str_optic_PGO7V3: str_optic_PGO7V
	{
		displayName="$STR_bi_pgo7v3_name";
		picture="\a2_rpg7\icons\pgo7v3_icon.paa";
		model="\a2_rpg7\PGO7V3_optic.p3d";
		class ItemInfo: ItemInfo
		{
			modelOptics="\a2_rpg7\PGO7V3_reticle.p3d";
			class OpticsModes: OpticsModes
			{
				class regular: regular
				{
				};
				class night: regular
				{
					opticsID=2;
					modelOptics="\a2_rpg7\PGO7V3_reticle_night.p3d";
				};
			};
		};
	};
	class str_optic_NSPU_RPG: str_optic_PGO7V
	{
		displayName="$STR_bi_npsu_name";
		descriptionShort="$STR_bi_npsu_desc";
		picture="\a2_rpg7\icons\nspu_icon.paa";
		model="\a2_rpg7\NSPU_optic.p3d";
		class ItemInfo: ItemInfo
		{
			mass=10;
			modelOptics="\a2_rpg7\NV_nspu_optic.p3d";
			class OpticsModes
			{
				class regular
				{
					opticsID=1;
					useModelOptics=1;
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					distanceZoomMin=300;
					distanceZoomMax=300;
					memoryPointCamera="sighteye";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="sightview";
					visionMode[]=
					{
						"NVG"
					};
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
				};
			};
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1441026174";
};
