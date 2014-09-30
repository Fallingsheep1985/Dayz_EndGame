//Script Control - Allows you to customize the repack by turning certain scripts on or off - true = on /false = off

//Server Name
server_name = "Dayz EndGame";

//Kill Messages
KILLMSGScript = true;
//Admintools
AdminScript = true;
//CAGN Safezones
SafezoneScripts = true;
//DZGM (Group Management)
DZGMScript = true;
//Regen Blood
RegenBloodScript = true;
//Welcome credits
ServerWelcomeCreditsScript = true;
//Watermark ( bottom left of screen)
WaterMarkScript = true;
//EVR Blowout
EVRBlowoutScript = true;
//Journal 
JournalScript = true;
//Help/Rules
HelpScript = true;
//Heroperks
HeroPerkScript = true;
//Fast Roping
FastropeScript = true;
//Harvest Hemp
HarvestHempScript = true;
//Lights
LightsScripts = true;
//Snow Storm
SnowScript = true;
//Ground Fog
GroundFogScript = false;//FPS HIT
//Wind Dust
WindDustScript = false;//FPS HIT
//Exploded vehicles drop loot
ExplodedVehicleLootScript = false;//Dosnt work yet
//Walk Amongst Dead
WalkAmongstDeadScript = true;
//Debug Monitor
DebugMonitorScript = true;
//HeliLift
HeliLiftScript = true;
//DZAI
DZAIScript = true;
//WAI
WAIScript = true;
//DZMS
DZMSScript = true;
//VASP
VASPScript = true;
//Arrest
ArrestScript = true;
//Animated SUV and MV22
AnimatedSUVMV22 = true;
//Taunt Zombies
TauntZombiesScript = true;
//Bury Human
BuryHumanScript = true;
//Burn Tents
BurnTentsScript = true;
//Tent Heal
TentHealScript = true;
//Rob Bank - bank will still be on map just cant rob it
RobBankScript = true;
//Drink Water
DrinkWaterScript = true;
//Anti-Zombie Emitter
AntiZombieEmitterScript = true;
//Zombie Bait
ZombieBaitScript = true;
//Zombie Bomb
ZombieBombScript = true;
//Take Clothes
TakeClothesScript = true;
//Suicide
SuicideScript = true;
//Deploy Bike/MotorBike/Mozzie
DeployBikeScript = true;
//Towing
TowingScript = true;
//Base Jump
BaseJumpScript = true;
//Service Points
ServicePointScript = true;
//NOS
NOSScript = true;
//Crafting
CRAFTINGSCRIPT = true;
//Carepackages (100oz Briefcase)
CarepackageScript = true;
//SirenS
SirenScript = true;
//Elevator
ElevatorScript = true;
//Zombie Trucks
ZombieTruckScript = true;
//trade from vehicle
TradeFromVehicleScript = true;
//EVAC chopper
JAEMScript = true;
// DayZ Epoch config
spawnShoremode = 1; // Default = 1 (on shore)
spawnArea= 1500; // Default = 1500
MaxVehicleLimit = 300; // Default = 50
MaxDynamicDebris = 500; // Default = 100
dayz_MapArea = 14000; // Default = 10000
dayz_maxLocalZombies = 30; // Default = 30 
dayz_paraSpawn = false;// WILL BREAK ESS
dayz_spawnselection = 0;
dayz_minpos = -1000; 
dayz_maxpos = 26000;
dayz_sellDistance_vehicle = 10;
dayz_sellDistance_boat = 30;
dayz_sellDistance_air = 40;
dayz_maxAnimals = 5; // Default: 8
dayz_tameDogs = true;
DynamicVehicleDamageLow = 0; // Default: 0
DynamicVehicleDamageHigh = 100; // Default: 100
dayz_spawnInfectedSite_clutterCutter = 2; // Infected Base Settings / 0 =  loot hidden in grass // 1 = loot lifted // 2 = cluttercutter // 3 = debug
dayz_fullMoonNights = true;
DZE_BuildOnRoads = true; // Default: False
DZE_requireplot = 1;
DZE_teleport = [26000,26000,26000,26000,26000];
DZE_StaticConstructionCount = 1;
DZE_FriendlySaving = true;
DZE_TRADER_SPAWNMODE = false;
DZE_DeathMsgGlobal = true;
DZE_DeathMsgTitleText = true;
DZE_DeathMsgSide = true;
DZE_BackpackGuard = false; //Default = true, true to enable, false to disable - wipes backpack on combat/ALT+F4 logging
DZE_ForceNameTagsOff = false;
DZE_R3F_WEIGHT = false; //use weight system
DZE_PlotPole = [100,115];	
DZE_BuildingLimit = 400;//how many items can a player build
DZE_PlayerZed = false; // should players have chance of becoming a ZOMBIE when they respawn after death
DZE_LootSpawnTimer = 15;// in minutes
DZE_MissionLootTable = true; //Custom Loot Tables
DZE_selfTransfuse = true; //Self blood bag
//Config based traders
DZE_ConfigTrader = true;
//Vector Build
DZE_noRotate = []; //Objects that cannot be rotated. Ex: DZE_noRotate = ["VaultStorageLocked"]
DZE_curPitch = 45; //Starting rotation angle. Only 1, 5, 45, or 90.
//Self Bloodbag
DZE_selfTransfuse_Values = [
6000, //Blood amount
 10,  // Chance of Infection
300 //Cooldown Timer
];
//EMP Blow out
ns_blowout = true; // true / false
ns_blowout_dayz = true;// true / false
ns_blow_delaymod = 0.90; //blowout delay
ns_blow_itemapsi = "NVGoggles"; //ItemAPSI replacement
ns_blow_playerdamage = 4000; // damage players without ns_blow_itemapsi can get per blowout
ns_blow_emp = false; //Namalsk Only
//Elevator
ELE_PlatformClass = "MetalFloor_DZ"; // what item to use as elevator
ELE_StopClass = "MetalFloor_Preview_DZ";
ELE_MaxRange = 25; 
ELE_Size = 4; 
ELE_Speed = 2;
ELE_StopWaitTime = 5;
ELE_UpdatesPerSecond = 60; // animation updates per second
ELE_RequiredBuildTools = ["ItemToolbox", "ItemCrowbar"]; // required tools for building an elevator and elevator stop
ELE_RequiredBuildItems = [["PartGeneric",4], "PartEngine", "ItemGenerator", "ItemJerrycan"]; // required items to build an elevator
ELE_RequiredBuildStopItems = [["PartGeneric",4]]; // required items to build an elevator stop
ELE_Debug = false;  // debug flag