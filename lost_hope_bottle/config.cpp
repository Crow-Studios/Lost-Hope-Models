class cfgPatches
{
	class Lost_Hope_Bottle
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			"lost_hope_static_item_bottle"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgWeapons
{
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class lost_hope_static_item_bottle: CBA_MiscItem
	{
		displayName = "Water Bottle";
		scope=2;
		author = "Lost Hope Dev Team"; //Your Name
		picture = "\lost_hope_bottle\UI\lost_hope_bottle_ca.paa";
		model = "\lost_hope_bottle\lost_hope_bottle.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Watah' Bot'le";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 4;
			scope = 0;
			type = 302;
		};
	};
};

class CfgVehicles 
{	
    class Static;
    class lost_hope_static_object_bottle : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_bottle\lost_hope_bottle.p3d";
        displayName = "Water Bottle (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_bottle
			{
				name = lost_hope_static_item_bottle;
				count = 1;
			};
		};
    };
};