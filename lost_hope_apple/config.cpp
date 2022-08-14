class cfgPatches
{
	class Lost_Hope_Apple
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"lost_hope_static_item_apple"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class lost_hope_static_item_apple: ItemCore
	{
		displayName = "Apple";
		scope=2;
		author = "Lost Hope Dev Team";
		picture = "\lost_hope_apple\UI\lost_hope_apple_ca.paa";
		model = "\lost_hope_apple\lost_hope_apple.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Nom Nom Nom";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 3;
		};
	};
};

class CfgVehicles 
{	
    class Static;
    class lost_hope_static_object_apple : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_apple\lost_hope_apple.p3d";
        displayName = "Apple (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_apple
			{
				name = lost_hope_static_item_apple;
				count = 1;
			};
		};
    };
};