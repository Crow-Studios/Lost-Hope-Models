class cfgPatches
{
	class Lost_Hope_BEANZ
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"lost_hope_static_item_BEANZ"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class lost_hope_static_item_BEANZ: ItemCore
	{
		displayName = "Can Of Beanz";
		scope=2;
		author = "Lost Hope Dev Team"; //Your Name
		picture = "\lost_hope_BEANZ\UI\lost_hope_BEANZ_ca.paa";
		model = "\lost_hope_BEANZ\lost_hope_BEANZ.p3d";
		icon = "iconObject_circle";
		descriptionShort = "BEANZ WAT DA FU-";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 5;
		};
	};
};

class CfgVehicles 
{	
    class Static;
    class lost_hope_static_object_BEANZ : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_BEANZ\lost_hope_BEANZ.p3d";
        displayName = "BEANZ (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_BEANZ
			{
				name = lost_hope_static_item_BEANZ;
				count = 1;
			};
		};
    };
};