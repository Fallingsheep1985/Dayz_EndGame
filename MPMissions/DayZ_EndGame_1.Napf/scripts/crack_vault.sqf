private ["_obj"];
_obj = _this select 3;

if(DZE_ActionInProgress) exitWith { cutText [ "Crack Vault" , "PLAIN DOWN"]; };
DZE_ActionInProgress = true;

_removed = ([player,"ItemHotwireKit",1] call BIS_fnc_invRemove);

if (_removed == 1) then {

	if((random 100) <= 75) then {
		//add kit back
		[player,"ItemHotwireKit",1] call BIS_fnc_invAdd;
		cutText [("Vault Cracked!.") , "PLAIN DOWN"];
		_obj spawn player_unlockVault;
	} else {
		cutText [("Failed to Crack Vault.") , "PLAIN DOWN"];
	};
};

s_player_unlockvault = -1;
DZE_ActionInProgress = false;