class CfgPatches
{
	class str_weap_optic5
	{
		requiredversion=1;
		units[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class Rifle_Base_F;
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class optic_Hamr;
	class optic_Arco;
	class optic_ACO_grn;
	class optic_Yorris;
	class optic_AMS;
	class optic_Holosight;
	class optic_DMS;
	class optic_LRPS;
	class optic_Nightstalker;
	class optic_str_Aco: optic_ACO_grn
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\acor_pl";
		picture="\wpn_optic5\ui\aco";
	};
	class optic_str_eotech: optic_Holosight
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\eot_pl";
		picture="\wpn_optic5\ui\eot";
	};
	class optic_str_arco: optic_Arco
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\arco_pl";
		picture="\wpn_optic5\ui\arco";
	};
	class optic_str_harm: optic_Hamr
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\harm_pl";
		picture="\wpn_optic5\ui\ha";
	};
	class optic_str_dms: optic_DMS
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\mds";
		picture="\wpn_optic5\ui\dms";
	};
	class optic_str_lrps: optic_LRPS
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\LRPS";
		picture="\wpn_optic5\ui\lrps";
	};
	class optic_str_nstalk: optic_Nightstalker
	{
		scope=2;
		author="$STR_A3_Bohemia_Interactive";
		model="\wpn_optic5\NStalk";
		picture="\wpn_optic5\ui\NStl";
	};
};
class cfgMods
{
	author="76561198086111011";
	timepacked="1455918375";
};
