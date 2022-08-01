class cfgPatches
{
	class Lost_Hope_Duffle_Bag
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgVehicles
{
	class Bag_Base;
	class lost_hope_duffle_backpack : Bag_Base
	{
		author = "Zelo/Silence";
		scope = 2;
		model = "lost_hope_duffle_bag\lost_hope_duffle_bag.p3d";
		displayName = "Duffle Bag";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
		maximumLoad = 1200;
		mass = 20;
	};
};