if (!isDedicated) then {
	player_build = compile preprocessFileLineNumbers "custom\snap_pro\player_build.sqf";
	snap_build = compile preprocessFileLineNumbers "custom\snap_pro\snap_build.sqf";
	dayz_spaceInterrupt = compile preprocessFileLineNumbers "custom\snap_pro\dayz_spaceInterrupt.sqf";
	
	fnc_usec_damageActions =		compile preprocessFileLineNumbers "custom\PlotForLifev2\fn_damageActions.sqf";		//Checks which actions for nearby casualty
	fnc_usec_selfActions =			compile preprocessFileLineNumbers "custom\PlotForLifev2\fn_selfActions.sqf";		//Checks which actions for self
	player_packTent =				compile preprocessFileLineNumbers "custom\PlotForLifev2\player_packTent.sqf";
	player_packVault =				compile preprocessFileLineNumbers "custom\PlotForLifev2\player_packVault.sqf";
	player_unlockVault =			compile preprocessFileLineNumbers "custom\PlotForLifev2\player_unlockVault.sqf";
	player_removeObject =			compile preprocessFileLineNumbers "custom\PlotForLifev2\remove.sqf";
	player_lockVault =			compile preprocessFileLineNumbers "custom\PlotForLifev2\player_lockVault.sqf";
	player_updateGui =			compile preprocessFileLineNumbers "custom\PlotForLifev2\player_updateGui.sqf";
	player_tentPitch =			compile preprocessFileLineNumbers "custom\PlotForLifev2\tent_pitch.sqf";
	player_vaultPitch =			compile preprocessFileLineNumbers "custom\PlotForLifev2\vault_pitch.sqf";
};

