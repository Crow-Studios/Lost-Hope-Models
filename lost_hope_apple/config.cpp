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
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class cfgVehicleClasses
{
	class Lost_Hope_Static
	{
		displayName = "[Lost Hope] Static Objects";
	};
};

class CfgVehicles {	
    class Static;
    class lost_hope_static_object_apple : Static {
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