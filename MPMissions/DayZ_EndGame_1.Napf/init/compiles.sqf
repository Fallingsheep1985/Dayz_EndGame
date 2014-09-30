/*
	FUNCTION COMPILES
*/
//Player only

BIS_fnc_numberDigits 	= compile preprocessFileLineNumbers "custom\numberDigits.sqf";
BIS_fnc_numberText 	= compile preprocessFileLineNumbers "custom\numberText.sqf"; 

if (!isDedicated) then {
	player_wearClothes =		compile preprocessFileLineNumbers "compile\player_wearClothes.sqf";
};

	call compile preprocessFileLineNumbers "gold\player_traderMenu.sqf";

//CUSTOM HUD
player_updateGui  = 	compile preprocessFileLineNumbers "compile\player_updateGui.sqf";

//Plotpole for life
	fnc_usec_damageActions =		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\fn_damageActions.sqf";		//Checks which actions for nearby casualty
	player_packTent =				compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\player_packTent.sqf";
	player_packVault =				compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\player_packVault.sqf";
	player_unlockVault =			compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\player_unlockVault.sqf";
	player_lockVault =			compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\player_lockVault.sqf";
	player_updateGui =			compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\player_updateGui.sqf";
	player_tentPitch =			compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\tent_pitch.sqf";
	player_vaultPitch =			compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\vault_pitch.sqf";

	if (DZE_modularBuild) then {
		player_build =				compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\modular_build.sqf";
		player_build_countNearby =	compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_countNearby.sqf";
		player_build_states =		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_states.sqf";
		player_build_needNearby =	compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_needNearby.sqf";
		player_build_getConfig =	compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_getConfig.sqf";
		player_build_plotCheck =	compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_plotCheck.sqf";
		player_build_buildReq =		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_buildReq.sqf";
		player_build_create =		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_create.sqf";
		player_build_controls =		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_controls.sqf";
		player_build_publish =		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build_publish.sqf";
		DZE_snap_build_file = 		"Custom\Snap_Pro\snap_build.sqf"; // Set as a global variable as it is also referenced in snapbuild.sqf
		snap_build = 				compile preprocessFileLineNumbers DZE_snap_build_file;
	} else {
		player_build =				compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\player_build.sqf";
	};
	
	FNC_check_owner =			compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Compile\fn_check_owner.sqf";
	
	player_plotPreview = 		compile preprocessFileLineNumbers "Custom\A_Plot_for_Life\Action\object_showPlotRadius.sqf";
	
	if (isServer) then {
		call compile preprocessFileLineNumbers "custom\init\server_functions.sqf";
	} else {
		eh_localCleanup = {};
	};
	
initialized = true;