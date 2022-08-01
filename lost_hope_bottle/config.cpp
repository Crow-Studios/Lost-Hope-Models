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
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgVehicles {	
    class Static;
    class lost_hope_static_object_bottle : Static {
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