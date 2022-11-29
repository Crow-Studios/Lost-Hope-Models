class cfgPatches
{
	class Lost_Hope_Homemade_Bomb
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
    class lost_hope_static_object_homemade_bomb : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_homemade_bomb\lost_hope_homemade_bomb.p3d";
        displayName = "Homemade Bomb (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
		class TransportItems
		{
			class lost_hope_static_item_homemade_bomb
			{
				name = lost_hope_static_item_homemade_bomb;
				count = 1;
			};
		};
    };
};