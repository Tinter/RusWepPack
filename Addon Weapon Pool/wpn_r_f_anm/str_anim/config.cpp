class CfgPatches
{
	class wpn_r_f_str_anims_reload
	{
		requiredaddons[]={};
		requiredversion=1;
		units[]=
		{
			""
		};
		weapons[]=
		{
			""
		};
		magazines[]=
		{
			""
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		str_ReloadAK1="str_ReloadAK1";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			str_ReloadAK1[]=
			{
				"strGestureRelAK1",
				"Gesture"
			};
			str_ReloadAK1_grip[]=
			{
				"strGestureRelAK1_g",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			str_ReloadAK1[]=
			{
				"strGestureRelAK1_prone",
				"Gesture"
			};
			str_ReloadAK1_grip[]=
			{
				"strGestureRelAK1_g_prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			str_ReloadAK1[]=
			{
				"strGestureRelAK1_Context",
				"Gesture"
			};
			str_ReloadAK1_grip[]=
			{
				"strGestureRelAK1_g_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			str_ReloadAK1[]=
			{
				"strGestureRelAK1_Context",
				"Gesture"
			};
			str_ReloadAK1_grip[]=
			{
				"strGestureRelAK1_g_Context",
				"Gesture"
			};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			str_ReloadAK1[]=
			{
				"strGestureRelAK1_Context",
				"Gesture"
			};
			str_ReloadAK1_grip[]=
			{
				"strGestureRelAK1_g_Context",
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
		class strGestureRelAK1: Default
		{
			file="\wpn_r_f_anm\str_anim\RelGest\ak_rel_up.rtm";
			looped=0;
			speed=-4;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKBeg="true";
			leftHandIKCurve[]={0};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0};
			rightHandIKEnd=1;
		};
		class strGestureRelAK1_prone: Default
		{
			file="\wpn_r_f\hlc_core\animation\oldgesture\reload_ak_prone.rtm";
			looped=0;
			speed=-4;
			mask="handsWeapon";
			headBobStrength=0.02;
			headBobMode=2;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,1,0.075000003,0,0.85000002,0,0.93000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class strGestureRelAK1_Context: strGestureRelAK1
		{
			mask="handsWeapon_context";
		};
		class strGestureRelAK1_g: Default
		{
			file="\wpn_r_f_anm\str_anim\RelGest\ak_rel_up.rtm";
			looped=0;
			speed=-4;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			leftHandIKBeg="true";
			leftHandIKCurve[]={1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0};
			rightHandIKEnd=1;
		};
		class strGestureRelAK1_g_prone: Default
		{
			file="\wpn_r_f\hlc_core\animation\oldgesture\reload_ak_prone.rtm";
			looped=0;
			speed=-4;
			mask="handsWeapon";
			headBobStrength=0.02;
			headBobMode=2;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0,1,0.075000003,0,0.85000002,0,0.93000001,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={1};
			rightHandIKEnd=1;
		};
		class strGestureRelAK1_g_Context: strGestureRelAK1
		{
			mask="handsWeapon_context";
		};
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455967464";
};
