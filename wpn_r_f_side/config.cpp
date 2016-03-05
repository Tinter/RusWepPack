class CfgPatches
{
	class obshaya_planka
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"cba_main"
		};
	};
};
class asdg_SlotInfo;
class asdg_str_SideW: asdg_SlotInfo
{
	linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
	displayName="$STR_A3_PointerSlot0";
	iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
	class compatibleItems
	{
		str_amba=1;
		str_fo_2lw=1;
		str_zenit_ka=1;
	};
};
class asdg_str_SideM: asdg_SlotInfo
{
	linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
	displayName="$STR_A3_PointerSlot0";
	iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
	class compatibleItems
	{
		str_amba_plnk=1;
		str_fo_2lw_plnk=1;
		str_zenit_plk=1;
	};
};