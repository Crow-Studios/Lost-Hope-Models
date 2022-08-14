class cfgPatches
{
	class Lost_Hope_Flare_Case
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
    class lost_hope_static_object_flare_case : Static {
		author="Lost Hope Dev Team";
        scope = 2;
        model = "\lost_hope_flare_case\lost_hope_flare_case.p3d";
        displayName = "Flare Case (Object)";
        faction = "Empty";
        vehicleClass = "Lost_Hope_Static";
    };
};