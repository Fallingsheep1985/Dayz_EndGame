private ["_vault","_removed"];
_vault = _this select 3;

_cursorTarget = cursorTarget;
_typeOfCursorTarget = typeOf _cursorTarget;

if(DZE_ActionInProgress) exitWith { cutText [ "Crack Vault" , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_removed = ([player,"ItemHotwireKit",1] call BIS_fnc_invRemove);

if (_removed == 1) then {

	if((random 100) <= 75) then {
		//unlock vault
		spawn player_unlockVault; 
		//add kit back
		[player,"ItemHotwireKit",1] call BIS_fnc_invAdd;
		cutText [("Vault Cracked!.") , "PLAIN DOWN"];
		s_player_unlockvault = -1;
		DZE_ActionInProgress = false;
	} else {
		cutText [("Failed to Crack Vault.") , "PLAIN DOWN"];
		s_player_unlockvault = -1;
		DZE_ActionInProgress = false;
	};
};
s_player_unlockvault = -1;
DZE_ActionInProgress = false;