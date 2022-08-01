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
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgVehicles {	
    class Static;
    class lost_hope_static_object_BEANZ : Static {
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