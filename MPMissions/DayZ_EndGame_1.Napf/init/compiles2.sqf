
//Journal
horde_epeen_fnc_fill_page = 			compile preProcessFile "scripts\journal\playerstats\fill_page_fnc.sqf";
horde_epeen_determine_humanity_fnc = 	compile preProcessFile "scripts\journal\playerstats\determine_humanity_fnc.sqf";
horde_epeen_setText_journal_fnc =		compile preProcessFile "scripts\journal\playerstats\epeen_setText_journal.sqf";
horde_epeen_setText_humanity_fnc = 		compile preProcessFile "scripts\journal\playerstats\epeen_setText_humanity.sqf";
horde_epeen_setText_stats_fnc = 		compile preProcessFile "scripts\journal\playerstats\epeen_setText_stats.sqf";
horde_epeen_show_humanity_fnc = 		compile preProcessFile "scripts\journal\playerstats\show_humanity_fnc.sqf";

//Right Click
 player_selectSlot =            		compile preprocessFileLineNumbers "scripts\RightClick\ui_selectSlot.sqf";
 //Exploded vehicles drop loot
vehicle_handleKilled = 				compile preprocessFileLineNumbers "scripts\ExplodedVehicleLoot\vehicle_handleKilled.sqf";
//VASP
// trader menu code
	if (DZE_ConfigTrader) then {
		call compile preprocessFileLineNumbers "scripts\VASP\player_traderMenuConfig.sqf";
	}else{
		call compile preprocessFileLineNumbers "scripts\VASP\player_traderMenuHive.sqf";
	};
//ZombieBait/Bomb
zombie_findTargetAgent =    compile preprocessFileLineNumbers "scripts\ZombieBait_Bomb_Shield\zombie_findTargetAgent.sqf";


//Snap Build

if (!isDedicated) then {
	/* Use command menu instead of scroll menu? (default = false) */
	DZE_SNAP_PRO_USE_COMMAND_MENU = false;

	DZE_SNAP_BUILD_NUMKEYS = [0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B];

	snap_build = compile preprocessFileLineNumbers "scripts\snap_pro\snap_build.sqf";

	
};
//Infected Camps
infectedcamps = compile preprocessFileLineNumbers "scripts\InfectedCamps\object_infectedcamps.sqf";
camp_spawnZombies = compile preprocessFileLineNumbers "scripts\InfectedCamps\camp_spawnZombies.sqf";
