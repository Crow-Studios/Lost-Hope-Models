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
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class lost_hope_static_item_BEANZ: CBA_MiscItem
	{
		displayName = "Can Of Beanz (Not Open)";
		scope=2;
		author = "Lost Hope Dev Team";
		picture = "\lost_hope_BEANZ\UI\lost_hope_BEANZ_ca.paa";
		model = "\lost_hope_BEANZ\lost_hope_BEANZ.p3d";
		icon = "iconObject_circle";
		descriptionShort = "BEANZ WAT DA FU-";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
			scope = 0;
			type = 302;
		};
	};
	class lost_hope_static_item_BEANZ_Opened: CBA_MiscItem
	{
		displayName = "Can Of Beanz (Open)";
		scope=2;
		author = "Lost Hope Dev Team";
		picture = "\lost_hope_BEANZ\UI\lost_hope_BEANZ_ca.paa";
		model = "\lost_hope_BEANZ\lost_hope_BEANZ.p3d";
		icon = "iconObject_circle";
		descriptionShort = "BEANZ WAT DA FU-";
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