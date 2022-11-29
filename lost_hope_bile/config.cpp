class cfgPatches
{
	class Lost_Hope_Bile
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
    class Static;
    class lost_hope_static_object_bile : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_bile\lost_hope_bile.p3d";
        displayName = "Bile (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_bile
			{
				name = lost_hope_static_item_bile;
				count = 1;
			};
		};
    };
};