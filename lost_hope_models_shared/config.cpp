class cfgPatches
{
	class Lost_Hope_Models_Shared
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
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F"};
	};
};

class cfgVehicleClasses
{
	class Lost_Hope_Static
	{
		displayName = "[Lost Hope] Static Objects";
	};
};

class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		moveVelocity[] = {0, 0, 10};
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		moveVelocity[] = {0, 0, 15};
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=0.1;
		interval=1;
		moveVelocity[] = {0, 0, 5};
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=0.2;
		interval=1;
		moveVelocity[] = {0, 0, 10};
	};
};

class cfgAmmo
{
	class SmokeShellRed;
	class lost_hope_ammo_flare_1: SmokeShellRed
	{
		model="\lost_hope_flare_1\lost_hope_flare_1_throw.p3d";
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="SmokeShellWhiteEffect"; //SmokeShellRedEffect 
	};
	class lost_hope_ammo_flare_2: SmokeShellRed
	{
		model="\lost_hope_flare_2\lost_hope_flare_2_throw.p3d";
		smokeColor[]={0.1383,0.1353,0.84380001,1};
		effectsSmoke="SmokeShellWhiteEffect"; //SmokeShellBlueEffect
	};
};

class cfgMagazines {
	class SmokeShellRed;
	class HandGrenade;
	class lost_hope_mag_flare_1: SmokeShellRed
	{
		author="Lost Hope Dev Team";
		displayName="Signal Flare";
		displayNameShort="Signal Flare";
		picture="\lost_hope_flare_1\UI\lost_hope_flare_1_ca.paa";
		model="\lost_hope_flare_1\lost_hope_flare_1_throw.p3d";
		ammo="lost_hope_ammo_flare_1";
		descriptionShort="Signal Flare, Used For Calling In Airdrops";
	};
	class lost_hope_mag_flare_2: SmokeShellRed
	{
		author="Lost Hope Dev Team";
		displayName="Signal Flare (Blue)";
		displayNameShort="Signal Flare (Blue)";
		picture="\lost_hope_flare_2\UI\lost_hope_flare_2_ca.paa";
		model="\lost_hope_flare_2\lost_hope_flare_2_throw.p3d";
		ammo="lost_hope_ammo_flare_2";
		descriptionShort="Signal Flare, Used For Calling In Specific Airdrops";
	};
};

class cfgWeapons
{
	class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"lost_hope_mag_flare_1_throw", "lost_hope_mag_flare_2_throw"};
		class ThrowMuzzle;
		class lost_hope_mag_flare_1_throw : ThrowMuzzle
		{
			magazines[] = {"lost_hope_mag_flare_1"};
		};
		class lost_hope_mag_flare_2_throw : ThrowMuzzle
		{
			magazines[] = {"lost_hope_mag_flare_2"};
		};
	};
};
