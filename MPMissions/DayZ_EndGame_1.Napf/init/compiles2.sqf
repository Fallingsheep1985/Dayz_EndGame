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

initialized = true;