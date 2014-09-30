

execVM "admintools\AdminList.sqf";
execVM "scriptcontrol.sqf";
/*	
	For DayZ Epoch
	Addons Credits: Jetski Yanahui by Kol9yN, Zakat, Gerasimow9, YuraPetrov, zGuba, A.Karagod, IceBreakr, Sahbazz
*/
startLoadingScreen ["","RscDisplayLoadCustom"];
cutText ["","BLACK OUT"];
enableSaving [false, false];

//REALLY IMPORTANT VALUES
dayZ_instance =	24;					//The instance
dayzHiveRequest = [];
initialized = false;
dayz_previousID = 0;

//disable greeting menu 
player setVariable ["BIS_noCoreConversations", true];
//disable radio messages to be heard and shown in the left lower corner of the screen
enableRadio false;
// May prevent "how are you civillian?" messages from NPC
enableSentences false;

EpochEvents = [["any","any","any","any",30,"crash_spawner"],["any","any","any","any",0,"crash_spawner"],["any","any","any","any",15,"supply_drop"]];
DZE_AsReMix_PLAYER_HUD = true; //Open Custom 	AsReMix Player HUD

//Load in compiled functions
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\variables.sqf";				//Initilize the Variables (IMPORTANT: Must happen very early)
call compile preprocessFileLineNumbers "scripts\JAEM\variables.sqf";
call compile preprocessFileLineNumbers "init\variables.sqf";
progressLoadingScreen 0.1;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\publicEH.sqf";	
progressLoadingScreen 0.2;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\medical\setup_functions_med.sqf";	//Functions used by CLIENT for medical
progressLoadingScreen 0.4;
call compile preprocessFileLineNumbers "\z\addons\dayz_code\init\compiles.sqf";				//Compile regular functions
call compile preprocessFileLineNumbers "init\compiles.sqf";
progressLoadingScreen 0.5;
call compile preprocessFileLineNumbers "scripts\Buildables\Crafting_Compiles.sqf"; //Alchemy compiles
progressLoadingScreen 0.6;
call compile preprocessFileLineNumbers "server_traders.sqf";				//Compile trader configs
progressLoadingScreen 1.0;

"filmic" setToneMappingParams [0.153, 0.357, 0.231, 0.1573, 0.011, 3.750, 6, 4]; setToneMapping "Filmic";


if (isServer) then {
	call compile preprocessFileLineNumbers "\z\addons\dayz_server\missions\DayZ_Endgame_1.Napf\dynamic_vehicle_endgame.sqf";

	// Add trader citys
	_nil = [] execVM "\z\addons\dayz_server\missions\DayZ_Endgame_1.Napf\mission.sqf";
	_serverMonitor = execVM "\z\addons\dayz_code\system\server_monitor.sqf";
};



//anti arrest trader
if (!isDedicated) then {
	//Conduct map operations
	0 fadeSound 0;
	waitUntil {!isNil "dayz_loadScreenMsg"};
	dayz_loadScreenMsg = (localize "STR_AUTHENTICATING");
	
	//Run the player monitor
	_id = player addEventHandler ["Respawn", {_id = [] spawn player_death;}];
	_playerMonitor = 	 execVM "\z\addons\dayz_code\system\player_monitor.sqf";	
	
	if(VASPScript)then{
		_nil =  execVM "scripts\VASP\VASP_init.sqf";
	};
	//DZGM
	if(DZGMScript)then{
		execVM "scripts\dzgm\init.sqf";
	};
	if(KILLMSGScript)then{
		execVM "scripts\kill_msg.sqf";
	};
	//anti Hack
	 //execVM "\z\addons\dayz_code\system\antihack.sqf"; //moved admin check into anti hack
	
	//Lights
	//[false,12] execVM "\z\addons\dayz_code\compile\local_lights_init.sqf";
	if(SafezoneScripts)then{
		//Community Safezones
		 execVM "scripts\CAGN\initiate.sqf";	
	};
	
	//PAINT
	VehicleColourPaint =			compile preprocessFileLineNumbers "Paint\vehicleColourPaint.sqf";
	VehicleColourUpdate =			compile preprocessFileLineNumbers "Paint\VehicleColourUpdate.sqf";
	VehicleColourUpdate2 =			compile preprocessFileLineNumbers "Paint\VehicleColourUpdate2.sqf";
	player_paint =				compile preprocessFileLineNumbers "Paint\player_paint.sqf";
	
};
if(ServerWelcomeCreditsScript)then{
	//Welcome Credits
	 execVM "scripts\ServerWelcomeCredits.sqf";
};
if(RegenBloodScript)then{
	//Regen Blood
	 execVM "scripts\RegenBlood\regenblood.sqf";
};
#include "\z\addons\dayz_code\system\REsec.sqf"

//Start Dynamic Weather
execVM "\z\addons\dayz_code\external\DynamicWeatherEffects.sqf";
//EVR Blowout
if(EVRBlowoutScript)then{
	if (isServer) then { _bul = [ns_blow_emp] execVM "scripts\blowout\module\blowout_server.sqf"; };
	if (!isDedicated) then { _bul = [] execVM "scripts\blowout\module\blowout_client.sqf"; };
};

#include "\z\addons\dayz_code\system\BIS_Effects\init.sqf"

if(WaterMarkScript)then{
	//DayZ Watermark
	if (!isNil "server_name") then {
	  [] spawn {
		  waitUntil {(!isNull Player) and (alive Player) and (player == player)};
		  waituntil {!(isNull (findDisplay 46))};
		  5 cutRsc ["wm_disp","PLAIN"];
		  ((uiNamespace getVariable "wm_disp") displayCtrl 1) ctrlSetText server_name;
	  };
	};
};
if(FastropeScript)then{
	_fast_roping = [] execVM "scripts\Fastrope\BTC_fast_roping_init.sqf";
};
if(HarvestHempScript)then{
	if (isServer) then {
	//Hemp
	execVM "scripts\HarvestHemp\randomweedfarm.sqf";
	};
};
if(SnowScript)then{
	snowchance = 5; //5% chance to snow on server start/restart
	if (isServer) then {
		if((random 100) < snowchance)then{
			[] execVM "scripts\Weather\SnowStorm.sqf";//FPS HIT
		};
	};
};
if(WindDustScript)then{
	execVM "scripts\Weather\WindDust.sqf"; //FPS HIT
};
if(GroundFogScript)then{
	execVM "scripts\Weather\ground_fog.sqf"; //FPS HIT
};
if(DebugMonitorScript)then{
//turn on
debugMonitor = true;
	if (!isDedicated) then {
		//Debug Monitor
		execVM "scripts\DebugMonitor\debug_monitor.sqf";
	};
};
if(LightsScripts)then{
	if (isServer) then {
	axe_server_lampObjs =    compile preprocessFileLineNumbers "scripts\lights\fnc_returnLampWS.sqf";
		"axeLampObjects" addPublicVariableEventHandler {_id = (_this select 1) spawn axe_server_lampObjs};
	};
	 
	if (!isDedicated) then {
		//StreetLights
		execVM "scripts\lights\street_lights.sqf";
		//TowerLights
		execVM "scripts\lights\tower_lights.sqf";
		//HouseLights
		execVM "scripts\lights\house_lights.sqf";
	};
};
if(HeliLiftScript)then{
	_logistic = execVM "scripts\HeliLift\=BTC=_Logistic_Init.sqf";
};
if(HeroPerkScript)then{
	//hero spawn
	herospawn = compile preprocessFileLineNumbers "scripts\HeroPerks\heroperk.sqf";
};
if(WalkAmongstDeadScript)then{
	call compile preprocessFileLineNumbers "scripts\walkamongstthedead\config.sqf";
};
if(ServicePointScript)then{
	if (!isDedicated) then {
		execVM "scripts\ServicePoints\service_point.sqf";
	};
};
if(JAEMScript)then{
	if (!isDedicated) then {
		execVM "scripts\JAEM\EvacChopper_init.sqf";
	};
};
if(BaseJumpScript)then{
	if (!isDedicated) then {
		execVM "scripts\BaseJump\baseJump.sqf";
	};
};
if(ElevatorScript)then{
	if (!isDedicated) then {
		["scripts\elevator"] execVM "scripts\elevator\elevator_init.sqf";
	};
};
if(TradeFromVehicleScript)then{
		[] execVM "scripts\TradeFromVehicle\init.sqf";
};
//Weapon Mods
call compile preprocessFileLineNumbers "scripts\wmod\init.sqf";
if(ZombieTruckScript)then{
//Zombie Truck
call compile preprocessFileLineNumbers "scripts\zombietruck\init.sqf";
};

espawn = compile preprocessFileLineNumbers "scripts\spawn\spawn.sqf";
waitUntil {!isNil "PVDZE_plr_LoginRecord"};
if ((!isDedicated) && (dayzPlayerLogin2 select 2)) then {

call espawn;
	if(HeroPerkScript)then{
		player spawn herospawn;
	};
};

// Zupa - SC
    execVM "gold\init.sqf";
	execVM "gold\addbankmarkers.sqf";
     // my debug
    if (!isDedicated) then {
        if (DZE_AsReMix_PLAYER_HUD) then {
            execVM "addons\playerhud\playerHud.sqf"//AsReMix Player HUD
        };
    };
// END Zupa - SC

//wait before admin script is active
sleep 15;
if(adminScript)then{
	// Epoch Admin Tools
	[] execVM "admintools\Activate.sqf";
	[] execVM "admintools\tools\adminbuild\keypress.sqf";
};
