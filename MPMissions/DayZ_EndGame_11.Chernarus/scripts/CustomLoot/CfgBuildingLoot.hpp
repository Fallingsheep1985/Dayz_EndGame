#include "CfgLoot.hpp"

class CfgBuildingLoot {
	class Default {
		zombieChance = 0.01;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.01;
		lootPos[] = {};

		lootPosSmall[] = {};
		lootPosZombie[] = {};
		
		itemType[] = {};

		itemChance[] = {};
		lootTypeSmall[] = {};
		itemChanceSmall[] = {};

		hangPos[] = {};
		vehPos[] = {};
	};
	
	class Castle: Default {
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
		//one spawn
		//tools
			{"ItemMatchbox_DZE","weapon",0.01},
			{"ItemKnife","weapon",0.01},
			{"ItemMap","generic",0.01},
			{"ItemCompass","weapon",0.01},
			{"ItemFlashlight","weapon",0.01},
		//weapons
			{"WeaponHolder_ItemHatchet_DZE","object",0.01},
		//special
			{"WeaponHolder_ItemTent","object",0.01},
			{"WeaponHolder_DomeTentStorage","object",0.01},
		//mags special
			{"PartWoodPile","magazine",0.01},
		//bags
			//{"DZ_Patrol_Pack_EP1","object",0.01},
		//Multiple spawns
			{"","Residential",0.01},
			{"","generic",0.01}
		};
	};
	class Residential: Default {
		zombieChance = 0.01;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{"ItemWatch","generic",0.01},
			{"ItemCompass","generic",0.01},
			{"ItemMap","weapon",0.01},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.01},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.32},
			{"backpacks","backpacks",0.01},
			{"tents","tents",0.01},
			{"","military",0.01},
			{"","trash",0.01},
			{"Binocular","weapon",0.01},
			{"PartPlywoodPack","magazine",0.01},
			{"clothes","clothes",0.01},
			{"specialclothes","specialclothes",0.01},
			{"WeaponHolder_MeleeCrowbar","object",0.01},
			{"pistols", "cfglootweapon", 0.01 },
			{"shotgunsingleshot", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.01 },
			{ "ItemWatch","weapon",0.01 },
			{ "ItemCompass","weapon",0.01 },
			{ "ItemMap","weapon",0.01 },
			{ "pistols","cfglootweapon",0.01 },
			{ "ItemFlashlight","weapon",0.01 },
			{ "ItemKnife","weapon",0.01 },
			{ "ItemMatchbox_DZE","weapon",0.01 },
			{ "","generic",0.01 },
			{ "","military",0.01 },
			{ "","trash",0.01 },
			{ "Binocular","weapon",0.01 },
			{ "clothes","single",0.01},
			{ "specialclothes","single",0.01 }
		};
	};
	class Office: Default {
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
		zombieChance = 0.01;
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemWatch","generic",0.01},
			{"ItemCompass","generic",0.01},
			{"ItemMap","weapon",0.01},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.01},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.01},
			{"backpacks","backpacks",0.01},
			{"tents","tents",0.01},
			{"","military",0.01},
			{"","trash",0.01},
			{"Binocular","weapon",0.01},
			{"PartPlywoodPack","magazine",0.01},
			{"clothes","clothes",0.01},
			{"specialclothes","specialclothes",0.01},
			{"WeaponHolder_MeleeCrowbar","object",0.01},
			{"ItemBriefcaseEmpty","magazine",0.01},
			{ "shotgunsingleshot", "cfglootweapon", 0.01}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.01 },
			{ "ItemWatch","weapon",0.01 },
			{ "ItemCompass","weapon",0.01 },
			{ "ItemMap","weapon",0.01 },
			{ "pistols","cfglootweapon",0.01 },
			{ "ItemFlashlight","weapon",0.01 },
			{ "ItemKnife","weapon",0.01 },
			{ "ItemMatchbox_DZE","weapon",0.01 },
			{ "","generic",0.01 },			
			{ "","military",0.01 },
			{ "","trash",0.01 },
			{ "Binocular","weapon",0.01 },
			{ "clothes","single",0.01 },
			{ "specialclothes","single",0.01 },
			{ "ItemDocument","magazine",0.01 }
		};
	};
	class Industrial: Default {
		zombieChance = 0.01;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.8;
		lootPos[] = {};
		lootType[] = {
			{"ItemGenerator","magazine",0.01},
			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"","generic",0.01},
			{"","trash",0.01},
			{"","military",0.01},
			{"PartGeneric","magazine",0.01},
			{"PartWheel","magazine",0.01},
			{"PartFueltank","magazine",0.01},
			{"PartEngine","magazine",0.01},
			{"PartGlass","magazine",0.01},
			{"PartVRotor","magazine",0.01},
			{"ItemJerrycan","magazine",0.01},
			{"WeaponHolder_ItemHatchet_DZE","object",0.01},
			{"ItemKnife","military",0.01},
			{"ItemToolbox","weapon",0.01},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.01},
			{"ItemKeyKit","weapon",0.01},
			{"CinderBlocks","magazine",0.01},
			{"MortarBucket","magazine",0.01}
		};
		lootTypeSmall[] = {
			{ "","generic",0.01 },
			{ "","trash",0.01 },
			{ "","military",0.01 },
			{ "ItemKnife","weapon",0.01 },
			{ "ItemKeyKit","weapon",0.01 }
		};
	};
	class IndustrialFuel: Default {
		zombieChance = 0.01;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{"ItemGenerator","magazine",0.01},
			{"fuel_pump_kit","magazine",0.01},
			{"","generic",0.01},
			{"","trash",0.01},
			{"","military",0.01},
			{"PartGeneric","magazine",0.01},
			{"PartWheel","magazine",0.01},
			{"PartFueltank","magazine",0.01},
			{"PartEngine","magazine",0.01},
			{"PartGlass","magazine",0.01},
			{"PartVRotor","magazine",0.01},
			{"ItemJerrycan","magazine",0.01},
			{"WeaponHolder_ItemHatchet_DZE","object",0.01},
			{"ItemKnife","military",0.01},
			{"ItemToolbox","weapon",0.01},
			{"ItemWire","magazine",0.01},
			{"ItemTankTrap","magazine",0.01},
			{"ItemKeyKit","weapon",0.01}
		};
		lootTypeSmall[] = {
			{ "","generic",0.01 },
			{ "","trash",0.01 },
			{ "","military",0.01 },
			{ "ItemKnife","weapon",0.01 },
			{ "ItemKeyKit","weapon",0.01 }
		};
	};
	class Farm: Default {
		zombieChance = 0.01;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{"ItemJerrycan","magazine",0.01},
			{"","generic",0.01},
			{"","trash",0.01},
			{"PartPlankPack","magazine",0.01},
			{"WeaponHolder_ItemHatchet_DZE","object",0.01},
			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"WeaponHolder_ItemMachete","object",0.01},
			{"ItemFishingPole","weapon",0.01},
			{"ItemLightBulb","magazine",0.01},
			{"ItemSledgeHandle","magazine",0.01},
			{ "farmweapons", "cfglootweapon", 0.01}
		};
		lootTypeSmall[] = {
			{ "","generic", 0.79},
			{ "","trash",0.01 },
			{ "","military",0.01},
			{ "ItemLightBulb","magazine",0.01},
			{ "ItemSledgeHead","magazine",0.01}
		};
	};
	class Supermarket: Default {
		lootChance = 0.8;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.01;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootType[] = {
			{"ItemSodaMdew","magazine",0.01},
			{"ItemSodaRbull","magazine",0.01},
			{"ItemSodaOrangeSherbet","magazine",0.01},
			{"ItemWatch","generic",0.01},
			{"ItemCompass","generic",0.01},
			{"ItemMap","weapon",0.01},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.01},
			{"ItemMatchbox_DZE","generic",0.01},
			{"","generic",0.01},
			{"backpacks","backpacks",0.01},
			{"tents","tents",0.01},
			{"","food",0.01},
			{"","trash",0.01},
			{"Binocular","weapon",0.01},
			{"PartPlywoodPack","magazine",0.01},
			{ "pistols", "cfglootweapon", 0.01},
			{ "shotgunsingleshot", "cfglootweapon", 0.01}
		};
		lootTypeSmall[] = {
			{ "ItemSodaMdew","magazine",0.01 },
			{ "ItemSodaRbull","magazine",0.01 },
			{ "ItemSodaOrangeSherbet","magazine",0.01 },
			{ "ItemWatch","weapon",0.01 },
			{ "ItemCompass","weapon",0.01 },
			{ "ItemMap","weapon",0.01 },
			{ "pistols","cfglootweapon",0.01 },
			{ "ItemFlashlight","weapon",0.01 },
			{ "ItemKnife","weapon",0.01 },
			{ "ItemMatchbox_DZE","weapon",0.01 },
			{ "","generic",0.01 },
			{ "","food",0.01 },
			{ "","trash",0.01 },
			{ "Binocular","weapon",0.01 },
			{ "ItemMixOil", "magazine",0.01}
		};
	};
	class HeliCrash: Default {
		zombieChance = 0.01;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.01 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "machineguns", "cfglootweapon", 0.01 },
			{"","military",0.01},
			{"","medical",0.01},
			{"MAAWS","weapon",0.01},
			{"MedBox0","object",0.01},
			{"NVGoggles","weapon",0.01},
			{"AmmoBoxSmall_556","object",0.01},
			{"AmmoBoxSmall_762","object",0.01},
			{"militaryclothes","militaryclothes",0.01},
			{"militaryammo","militaryammo",0.01}
		};
	};
	class HeliCrash_No50s: Default {
		zombieChance = 0.01;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.01 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "machineguns", "cfglootweapon", 0.01 },
			{ "", "military", 0.01 },
			{ "", "medical", 0.01 },
			{ "MAAWS", "weapon", 0.01 },
			{ "MedBox0", "object", 0.01 },
			{ "NVGoggles", "weapon", 0.01 },
			{ "AmmoBoxSmall_556", "object", 0.01 },
			{ "AmmoBoxSmall_762", "object", 0.01 },
			{ "militaryclothes", "militaryclothes", 0.01 },
			{ "militaryammo", "militaryammo", 0.01 }
		};
	};
	class Hospital: Default {
		zombieChance = 0.01;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{"","trash",0.01},
			{"","hospital",0.01},
			{"MedBox0","object",0.01}
		};
		lootTypeSmall[] = {
			{ "","trash",0.01 },
			{ "","hospital",0.01 }
		};
	};
	class Military: Default {
		zombieChance = 0.01;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.6;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.01},
			{ "assaultrifles", "cfglootweapon", 0.01 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.01 },
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.01},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"ItemRadio","military",0.01},
			{"ItemMap","military",0.01},
			{"militarybackpacks","militarybackpacks",0.01},
			{"","medical",0.01},
			{"","generic",0.01},
			{"","military",0.01},
			{"ItemEtool","weapon",0.01},
			{"ItemSandbag","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.01 },
			{ "Binocular", "weapon", 0.01 },
			{ "ItemFlashlightRed", "weapon", 0.01 },
			{ "ItemKnife", "weapon", 0.01 },
			{ "ItemGPS", "weapon", 0.01 },
			{ "", "medical", 0.01 },
			{ "", "generic", 0.01 },
			{ "", "military", 0.01 },
			{ "ItemEtool", "weapon", 0.01 }
		};
	};
	class MilitaryIndustrial: Default {
		zombieChance = 0.01;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.01 },
			{ "assaultrifles", "cfglootweapon", 0.01 },
			{ "PartGeneric", "magazine", 0.01 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.01 },
			{ "ItemGenerator", "magazine", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.01 },
			{"PartGeneric","magazine",0.01},
			{"ItemGenerator","magazine",0.01},
			{"PartWheel","magazine",0.01},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.01},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"PartVRotor","magazine",0.01},
			{"militarybackpacks","militarybackpacks",0.01},
			{"","medical",0.01},
			{"","generic",0.01},
			{"","military",0.01},
			{"ItemEtool","weapon",0.01},
			{"ItemSandbag","magazine",0.01},
			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"fuel_pump_kit","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.01 },
			{ "Binocular", "weapon", 0.01 },
			{ "ItemFlashlightRed", "weapon", 0.01 },
			{ "ItemKnife", "weapon", 0.01 },
			{ "ItemGPS", "weapon", 0.01 },
			{ "", "medical", 0.01 },
			{ "", "generic", 0.01 },
			{ "", "military", 0.01 },
			{ "ItemEtool", "weapon", 0.01 }
		};
	};
	class IndustrialMilitary: Default {
		zombieChance = 0.01;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman","z_soldier","z_soldier_heavy","z_policeman","z_worker1","z_worker2","z_worker3"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{ "pistols", "cfglootweapon", 0.01 },
			{ "assaultrifles", "cfglootweapon", 0.01 },
			{ "PartGeneric", "magazine", 0.01 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "shotgunsingleshot", "cfglootweapon", 0.01 },
			{ "ItemGenerator", "magazine", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.01 },
			{"PartGeneric","magazine",0.01},
			{"ItemGenerator","magazine",0.01},
			{"PartWheel","magazine",0.01},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.01},
			{"ItemKnife","military",0.01},
			{"ItemRadio","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"PartVRotor","magazine",0.01},
			{"PartFueltank","magazine",0.01},
			{"PartEngine","magazine",0.01},
			{"PartGlass","magazine",0.01},
			{"militarybackpacks","militarybackpacks",0.01},
			{"","medical",0.01},
			{"","generic",0.01},
			{"","military",0.01},
			{"ItemEtool","weapon",0.01},
			
			{"ItemSandbag","magazine",0.01},

			{"ItemFuelBarrelEmpty","magazine",0.01},
			{"fuel_pump_kit","magazine",0.01},
			{ "machineguns", "cfglootweapon", 0.01 }
		};
		lootTypeSmall[] = {
			{ "pistols", "cfglootweapon", 0.01 },
			{ "Binocular", "weapon", 0.01 },
			{ "ItemFlashlightRed", "weapon", 0.01 },
			{ "ItemKnife", "weapon", 0.01 },
			{ "ItemGPS", "weapon", 0.01 },
			{ "", "medical", 0.01 },
			{ "", "generic", 0.01 },
			{ "", "military", 0.01 },
			{ "ItemEtool", "weapon", 0.01 }
		};
	};
	class MilitarySpecial: Default {
		zombieChance = 0.01;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.01;
		lootPos[] = {};
		lootType[] = {
			{ "assaultrifles", "cfglootweapon", 0.01 },
			{ "machineguns", "cfglootweapon", 0.01 },
			{ "pistols", "cfglootweapon", 0.01 },
			{ "sniperrifles", "cfglootweapon", 0.01 },
			{ "militaryshotguns", "cfglootweapon", 0.01 },
			{ "submachinegun", "cfglootweapon", 0.01 },
			{"AmmoBoxSmall_556","object",0.01},
			{"AmmoBoxSmall_762","object",0.01},
			{"Binocular","weapon",0.01},
			{"ItemFlashlightRed","military",0.01},
			{"ItemKnife","military",0.01},
			{"ItemGPS","weapon",0.01},
			{"ItemMap","military",0.01},
			{"Binocular_Vector","military",0.01},
			{"militarybackpacks","militarybackpacks",0.01},
			{"","medical",0.01},
			{"ItemRadio","military",0.01},
			{"","generic",0.01},
			{"","military",0.01},
			{"machinegunammo","machinegunammo",0.01},
			{"militaryclothes","militaryclothes",0.01},
			{"NVGoggles","weapon",0.01}
		};
		lootTypeSmall[] = {
			{ "pistols","cfglootweapon",0.01 },
			{ "AmmoBoxSmall_556","object",0.01 },
			{ "AmmoBoxSmall_762","object",0.01 },
			{ "Binocular","weapon",0.01 },
			{ "ItemFlashlightRed","military",0.01 },
			{ "ItemKnife","military",0.01 },
			{ "ItemGPS","weapon",0.01 },
			{ "ItemMap","weapon",0.01 },
			{ "Binocular_Vector","weapon",0.01},
			{ "","medical",0.01},
			{ "","generic",0.01},
			{ "","military",0.01 },
			{ "5Rnd_86x70_L115A1","magazine",0.01},
			{ "10Rnd_127x99_m107","magazine",0.01},
			{ "machinegunammoexpl","single",0.01 },
			{ "militaryclothes","single",0.01 },
			{ "NVGoggles","weapon",0.01 },
			{ "100Rnd_762x54_PK","magazine",0.01 }
		};
	};
	class Hunting: Default {
		zombieChance = 0.01;
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_hunter","z_hunter","z_hunter"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{"ItemMap","weapon",0.01},
			{"ItemFlashlight","generic",0.01},
			{"ItemKnife","generic",0.01},
			{"ItemMatchbox_DZE","generic",0.01},
			{ "farmweapons", "cfglootweapon", 0.01 },
			{"","military",0.01},
			{"WeaponHolder_ItemMachete","object",0.01},
			{"","hunter",0.01}
		};
		lootTypeSmall[] =	{
			{"ItemMap","weapon",0.01},
			{"ItemFlashlight","weapon",0.01},
			{"ItemKnife","weapon",0.01},
			{"ItemMatchbox_DZE","weapon",0.01},
			{"","military",0.01},
			{"","hunter",0.01}
		};
	};
	class DynamicDebris: Default
	{
		lootChance = 0.01;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.01;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootType[] = {
			{ "ItemWatch", "generic", 0.01 },
			{ "ItemCompass", "generic", 0.01 },
			{ "ItemMap", "weapon", 0.01 },
			{ "Makarov", "weapon", 0.01 },
			{ "Colt1911", "weapon", 0.01 },
			{ "ItemFlashlight", "generic", 0.01 },
			{ "ItemKnife", "generic", 0.01 },
			{ "ItemMatchbox_DZE", "generic", 0.01 },
			{ "ItemToolbox", "weapon", 0.01 },
			{ "", "generic", 0.01 },
			{ "", "food", 0.01 },
			{ "PartGeneric", "magazine", 0.01 },
			{ "PartWheel", "magazine", 0.01 },
			{ "PartFueltank", "magazine", 0.01 },
			{ "PartEngine", "magazine", 0.01 },
			{ "PartGlass", "magazine", 0.01 },
			{ "WeaponHolder_ItemJerrycan", "object", 0.01 }
		};
	};
	class DynamicDebrisMilitary: Default
	{
		lootChance = 0.01;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0.01;
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		lootType[] = {
			{ "ItemEtool", "weapon", 0.01 },
			{ "ItemSandbag", "magazine", 0.01 },
			{ "", "military", 0.01 },
			{ "ItemWatch", "generic", 0.01 },
			{ "ItemCompass", "generic", 0.01 },
			{ "ItemMap", "weapon", 0.01 },
			{ "MakarovSD", "weapon", 0.01 },
			{ "Colt1911", "weapon", 0.01 },
			{ "ItemFlashlight", "generic", 0.01 },
			{ "ItemKnife", "generic", 0.01 },
			{ "ItemMatchbox_DZE", "generic", 0.01 },
			{ "ItemToolbox", "weapon", 0.01 },
			{ "", "generic", 0.01 },
			{ "", "food", 0.01 },
			{ "PartGeneric", "magazine", 0.01 },
			{ "PartWheel", "magazine", 0.01 },
			{ "PartFueltank", "magazine", 0.01 },
			{ "PartEngine", "magazine", 0.01 },
			{ "PartGlass", "magazine", 0.01 },
			{ "PartVRotor", "magazine", 0.01 },
			{ "WeaponHolder_ItemJerrycan", "object", 0.01 }
		};
	};
	class SupplyDrop: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "PartPlywoodPack", "magazine", 0.01 },
			{ "PartPlankPack", "magazine", 0.01 },
			{ "CinderBlocks", "magazine", 0.01 },
			{ "MortarBucket", "magazine", 0.01 },
			{ "bulk_PartGeneric", "magazine", 0.01 },
			{ "bulk_ItemSandbag", "magazine", 0.01 },
			{ "bulk_ItemTankTrap", "magazine", 0.01 },
			{ "ItemSledge", "weapon", 0.01 }
		};
	};
	class MassGrave: Default {
		zombieChance = 1;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_doctor","z_soldier_pilot","z_soldier_heavy"};
		lootChance = 1;
		lootPos[] = {};
		lootType[] = {
			{ "M16A2", "weapon", 0.01 },
			{ "M16A2GL", "weapon", 0.01 },
			{ "M249_EP1_DZ", "weapon", 0.01 },
			{ "M9SD", "weapon", 0.01 },
			{ "Pecheneg_DZ", "weapon", 0.01 },
			{ "PK_DZ", "weapon", 0.01 },
			{ "AK_74", "weapon", 0.01 },
			{ "M4A1_Aim", "weapon", 0.01 },
			{ "AKS_74_kobra", "weapon", 0.01 },
			{ "AKS_74_U", "weapon", 0.01 },
			{ "AK_47_M", "weapon", 0.01 },
			{ "M24", "weapon", 0.01 },
			{ "SVD_CAMO", "weapon", 0.01 },
			{ "M1014", "weapon", 0.01 },
			{ "BAF_LRR_scoped", "weapon", 0.01 },
			{ "M4SPR", "weapon", 0.01 },
			{ "M4A1", "weapon", 0.01 },
			{ "M14_EP1", "weapon", 0.01 },
			{ "UZI_EP1", "weapon", 0.01 },
			{ "Remington870_lamp", "weapon", 0.01 },
			{ "glock17_EP1", "weapon", 0.01 },
			{ "M240_DZ", "weapon", 0.01 },
			{ "M4A1_AIM_SD_camo", "weapon", 0.01 },
			{ "M16A4_ACG", "weapon", 0.01 },
			{ "M4A1_HWS_GL_camo", "weapon", 0.01 },
			{ "Mk_48_DZ", "weapon", 0.01 },
			{ "M4A3_CCO_EP1", "weapon", 0.01 },
			{ "AmmoBoxSmall_556", "object", 0.01 },
			{ "AmmoBoxSmall_762", "object", 0.01 },
			{ "Binocular", "weapon", 0.01 },
			{ "ItemFlashlightRed", "military", 0.01 },
			{ "ItemKnife", "military", 0.01 },
			{ "ItemGPS", "weapon", 0.01 },
			{ "ItemMap", "military", 0.01 },
			{ "Binocular_Vector", "military", 0.01 },
			{ "DZ_ALICE_Pack_EP1", "object", 0.01 },
			{ "DZ_TK_Assault_Pack_EP1", "object", 0.01 },
			{ "DZ_British_ACU", "object", 0.01 },
			{ "DZ_CivilBackpack_EP1", "object", 0.01 },
			{ "DZ_Backpack_EP1", "object", 0.01 },
			{ "DZ_LargeGunBag_EP1", "object", 0.01 },
			{ "", "medical", 0.01 },
			{ "", "generic", 0.01 },
			{ "", "military", 0.01 },
			{ "PipeBomb", "magazine", 0.01 },
			{ "Sa58V_RCO_EP1", "weapon", 0.01 },
			{ "Sa58V_CCO_EP1", "weapon", 0.01 },
			{ "G36_C_SD_camo", "weapon", 0.01 },
			{ "M40A3", "weapon", 0.01 },
			{ "100Rnd_762x54_PK", "magazine", 0.01 },
			{ "", "militaryclothes", 0.01 },
			{ "WeaponHolder_ItemMachete", "object", 0.01 },
			{ "SCAR_H_LNG_Sniper_SD", "weapon", 0.01 },
			{ "2000Rnd_762x51_M134", "magazine", 0.01 },
			{ "KSVK_DZE", "weapon", 0.01 },
			{ "m240_scoped_EP1_DZE", "weapon", 0.01 }
		};
	};

	#include "CfgBuildingPos.hpp"
	//If you want to copypast your loottable to your mission w/o
	//changing something on the lootPos then use the a include instead of copypasting the CfgBuildingPos.hpp

	//#include "\dayz_epoch_b\CfgBuildingPos.hpp"
};
