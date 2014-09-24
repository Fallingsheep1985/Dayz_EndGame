private ["_vault","_removed"];
_vault = _this select 3;

_cursorTarget = cursorTarget;
_typeOfCursorTarget = typeOf _cursorTarget;
_text = getText (configFile >> "CfgVehicles" >> _typeOfCursorTarget >> "displayName");

if(DZE_ActionInProgress) exitWith { cutText [(localize "str_epoch_player_32") , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_removed = ([player,"ItemHotwireKit",1] call BIS_fnc_invRemove);

if (_removed == 1) then {

	if((random 100) <= 75) then {
		if((_typeOfCursorTarget in DZE_LockableStorage) && (player distance _cursorTarget < 3)){
			//unlock vault
			spawn player_unlockVault; 
		};
		//add kit back
		[player,"ItemHotwireKit",1] call BIS_fnc_invAdd;
		cutText [("Vault Cracked!.") , "PLAIN DOWN"];
	} else {
		cutText [("Failed to Crack Vault.") , "PLAIN DOWN"];
	};
};
s_player_unlockvault = -1;
DZE_ActionInProgress = false;