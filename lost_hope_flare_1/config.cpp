class cfgPatches
{
	class Lost_Hope_Flare_1
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"lost_hope_static_item_flare_1"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class lost_hope_static_item_flare_1: ItemCore
	{
		displayName = "Airdrop Flare (Blue)";
		scope=2;
		author = "Lost Hope Dev Team"; //Your Name
		picture = "\lost_hope_flare_1\UI\lost_hope_flare_1_ca.paa";
		model = "\lost_hope_flare_1\lost_hope_flare_1.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Airdrop Signal Flare";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 30;
		};
	};
};

class CfgVehicles 
{	
    class Static;
    class lost_hope_static_object_flare_1 : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_flare_1\lost_hope_flare_1.p3d";
        displayName = "Flare 1 (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_flare_1
			{
				name = lost_hope_static_item_flare_1;
				count = 1;
			};
		};
    };
};