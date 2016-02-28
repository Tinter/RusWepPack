class CfgPatches
{
	class DZ_Anims_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		DZ_GestureReloadMosin="DZ_GestureReloadMosin";
		DZ_GestureReloadMosinFast="DZ_GestureReloadMosinFast";
		DZ_GestureReloadSKS="DZ_GestureReloadSKS";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			DZ_GestureReloadMosin[]=
			{
				"DZ_GestureReloadMosin",
				"Gesture"
			};
			DZ_GestureReloadMosinFast[]=
			{
				"DZ_GestureReloadMosinFast",
				"Gesture"
			};
			DZ_GestureReloadSKS[]=
			{
				"DZ_GestureReloadSKS",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			DZ_GestureReloadMosin[]=
			{
				"DZ_GestureReloadMosin_prone",
				"Gesture"
			};
			DZ_GestureReloadMosinFast[]=
			{
				"DZ_GestureReloadMosinFast_prone",
				"Gesture"
			};
			DZ_GestureReloadSKS[]=
			{
				"DZ_GestureReloadSKS_prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			DZ_GestureReloadMosin[]=
			{
				"DZ_GestureReloadMosin_Context",
				"Gesture"
			};
			DZ_GestureReloadMosinFast[]=
			{
				"DZ_GestureReloadMosinFast_Context",
				"Gesture"
			};
			DZ_GestureReloadSKS[]=
			{
				"DZ_GestureReloadSKS_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			DZ_GestureReloadMosin[]=
			{
				"DZ_GestureReloadMosin_Context",
				"Gesture"
			};
			DZ_GestureReloadMosinFast[]=
			{
				"DZ_GestureReloadMosinFast_Context",
				"Gesture"
			};
			DZ_GestureReloadSKS[]=
			{
				"DZ_GestureReloadSKS_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			DZ_GestureReloadMosin[]=
			{
				"DZ_GestureReloadMosin",
				"Gesture"
			};
			DZ_GestureReloadMosinFast[]=
			{
				"DZ_GestureReloadMosinFast",
				"Gesture"
			};
			DZ_GestureReloadSKS[]=
			{
				"DZ_GestureReloadSKS",
				"Gesture"
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class Default2: Default
	{
		actions="NoActions";
		file="";
		looped="true";
		speed=0.5;
		relSpeedMin=1;
		relSpeedMax=1;
		soundEnabled="false";
		soundOverride="";
		soundEdge[]={0.5,1};
		terminal="false";
		equivalentTo="";
		connectAs="";
		connectFrom[]={};
		connectTo[]={};
		interpolateWith[]={};
		interpolateTo[]={};
		interpolateFrom[]={};
		mask="FullUpperBodyNoPelvis";
		interpolationSpeed=6;
		interpolationRestart="true";
		preload="true";
		disableWeapons="true";
		enableOptics="true";
		showWeaponAim="true";
		enableMissile="true";
		enableBinocular="true";
		showItemInHand="false";
		showItemInRightHand="false";
		showHandGun="false";
		canPullTrigger="false";
		walkcycles=1;
		headBobMode=0;
		headBobStrength=0;
		leftHandIKBeg="false";
		leftHandIKEnd="false";
		rightHandIKBeg="false";
		rightHandIKEnd="false";
		leftHandIKCurve[]={1};
		rightHandIKCurve[]={1};
		forceAim=0;
		class AnimHooks
		{
		};
		disableInventory=1;
		disableWeaponChange=1;
	};
	class States
	{
		class DZ_GestureReloadMosin: Default2
		{
			file="wpn_r_f\anim\mosya\CdzpPercMstpMosinNagant_full.rtm";
			speed=-8;
			rightHandIKCurve[]={0,0.0099999998,0.31999999,0.1};
			leftHandIKcurve[]={1};
			looped="false";
			disableInventory=1;
			disableWeaponChange=1;
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			rightHandIKBeg="false";
			rightHandIKEnd="true";
			mask="handsWeapon";
		};
		class DZ_GestureReloadMosin_prone: Default2
		{
			file="wpn_r_f\anim\mosya\CdzpPpneMstpMosinNagant_full.rtm";
			speed=-5;
			rightHandIKCurve[]={0,0.0099999998,0.31999999,0.1};
			leftHandIKcurve[]={1};
			looped="false";
			disableInventory=1;
			disableWeaponChange=1;
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			rightHandIKBeg="false";
			rightHandIKEnd="true";
			mask="handsWeapon";
		};
		class DZ_GestureReloadBoMosin_Context: DZ_GestureReloadMosin
		{
			mask="handsWeapon_context";
		};
		class DZ_GestureReloadMosinFast: Default2
		{
			file="wpn_r_f\anim\mosya\CdzpPercMstpMosinNagant_full.rtm";
			speed=-5;
			rightHandIKCurve[]={0,0.0099999998,0.31999999,0.1};
			leftHandIKcurve[]={1};
			looped="false";
			disableInventory=1;
			disableWeaponChange=1;
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			rightHandIKBeg="false";
			rightHandIKEnd="true";
			mask="handsWeapon";
		};
		class DZ_GestureReloadMosinFast_prone: Default2
		{
			file="wpn_r_f\anim\mosya\CdzpPpneMstpMosinNagant_full.rtm";
			speed=-8;
			rightHandIKCurve[]={0,0.0099999998,0.31999999,0.1};
			leftHandIKcurve[]={1};
			looped="false";
			disableInventory=1;
			disableWeaponChange=1;
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			rightHandIKBeg="false";
			rightHandIKEnd="true";
			mask="handsWeapon";
		};
		class DZ_GestureReloadBoMosinFast_Context: DZ_GestureReloadMosin
		{
			mask="handsWeapon_context";
		};
		class DZ_GestureReloadSKS: Default2
		{
			file="wpn_r_f\anim\sks\CdzpPercMstpSKS.rtm";
			speed=-5;
			rightHandIKCurve[]={0,0.1,0.79000002,0.1,0.81,0.25,0.89999998,0.15000001};
			leftHandIKcurve[]={1};
			looped="false";
			disableInventory=1;
			disableWeaponChange=1;
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			rightHandIKBeg="false";
			rightHandIKEnd="true";
			mask="handsWeapon";
		};
		class DZ_GestureReloadSKS_prone: Default2
		{
			file="wpn_r_f\anim\sks\CdzpPpneMstpSKS.rtm";
			speed=-5;
			rightHandIKCurve[]={0,0.1,0.79000002,0.1,0.81,0.25,0.89999998,0.15000001};
			leftHandIKcurve[]={1};
			looped="false";
			disableInventory=1;
			disableWeaponChange=1;
			leftHandIKBeg="true";
			leftHandIKEnd="true";
			rightHandIKBeg="false";
			rightHandIKEnd="true";
			mask="handsWeapon";
		};
		class DZ_GestureReloadSKS_Context: DZ_GestureReloadSKS
		{
			mask="handsWeapon_context";
		};
	};
};
