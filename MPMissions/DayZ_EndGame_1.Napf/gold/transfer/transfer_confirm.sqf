disableSerialization;

private ["_dialog"];

_display = findDisplay 8101;
_listbox = _display displayCtrl 8104;
_moneyamount = _display displayCtrl 8106;
_selection = lbCurSel _listbox; if(_selection < 0) exitWith{};
_transferMoney = parseNumber(ctrlText 8106); if(isNil "_transferMoney") exitWith{};

if (_transferMoney < 1 || _transferMoney > 999999) exitWith {
	cutText ["Please insert a number between 1 and 999,999.", "PLAIN DOWN"];
	_display closeDisplay 9000;
};

if (_transferMoney > (player getVariable ['bankMoney', 0])) exitWith {
	cutText [format["You do not have enough %1 in your bank account.",CurrencyName], "PLAIN DOWN"];
	_display closeDisplay 9000;
};

_selectedName = lbtext [8104,_selection];

{
	if(name _x == _selectedName) then
	{
		transferTarget = _x;
	};
} forEach entities "CAManBase";

{
	if ((count crew _x) > 0) then {
		{
			if (getPlayerUID _x != "" && name _x == _selectedName) then {
				transferTarget = _x;
			};
		} forEach crew _x;
	};
} forEach (entities "LandVehicle" + entities "Air" + entities "Ship");

transferMoney = _transferMoney;


if (isNil "transferTarget") exitWith {
	cutText ["Transfer failed! Could not find target.", "PLAIN DOWN"];
};

FetchConfirmData = {
	_targetName = (_this select 0);
	_targetMoney = (_this select 1);
	ctrlSetText [8203, format["transfer %1 %2", _targetMoney call BIS_fnc_numberText, "Coins"]];
	ctrlSetText [8204, format["to %1?", _targetName]];
};

FinishBankTransition = {
	private ["_abort","_target","_targetMoney"];
	_sourceMoney = player getVariable ['bankMoney', 0];
	_target = transferTarget;
	_targetMoney = transferMoney;
	_abort = false;
	
	// Let's double-check everything, just in case
	
	if (_targetMoney < 1 || _targetMoney > 999999) exitWith {
		cutText ["Insert a number between 1 and 999,999.", "PLAIN DOWN"];
	};
	
	if (_sourceMoney < _targetMoney) exitWith {
		cutText [format["You do not have enough %1 in your bank account.",CurrencyName], "PLAIN DOWN"];
	};
	
	{
		if(_x == _target) then
		{
			transferTargetCheck = _x;
		};
	} forEach entities "CAManBase";
	
	{
		if ((count crew _x) > 0) then {
			{
				if (getPlayerUID _x != "" && _x == _target) then {
					transferTargetCheck = _x;
				};
			} forEach crew _x;
		};
	} forEach (entities "LandVehicle" + entities "Air" + entities "Ship");
	
	if (isNil "_target" || isNil "transferTargetCheck") exitWith {
		cutText ["Transfer failed! Could not find target.", "PLAIN DOWN"];
	};
	
	if (_target != transferTargetCheck) exitWith {
		cutText ["Transfer failed! Could not find target.", "PLAIN DOWN"];
	};
	
	_targetBankBalance = _target getVariable ['bankMoney', 0];
	
	if (LimitOnBank && ((_targetBankBalance + _targetMoney) >  MaxBankMoney)) then {
		if (!(getPlayerUID _target in DonatorListZupa )) then {
			_abort = true;
		} else {
			if ((_targetBankBalance + _targetMoney) > MaxDonatorBankMoney) then {
				_abort = true;
			};
		};
	};
	
	if (_abort) exitWith {
		cutText ["Transfer failed! Target has reached his bank limit.", "PLAIN DOWN"];
	};
	
	// Seems like everything checks out
	
	player setVariable["bankMoney",_sourceMoney - _targetMoney, true];
	_targetBankBalance = _target getVariable ['bankMoney', 0]; // We call this again in case we're transferring money to self (debug purposes)
	_target setVariable["bankMoney",_targetBankBalance + _targetMoney, true];
	
	PVDZE_plr_Save = [player,(magazines player),true,true] ;
	publicVariableServer "PVDZE_plr_Save";
	PVDZE_bank_Save = [player];
	publicVariableServer "PVDZE_bank_Save";
	
	PVDZE_plr_Save = [_target,(magazines _target),true,true] ;
	publicVariableServer "PVDZE_plr_Save";
	PVDZE_bank_Save = [_target];
	publicVariableServer "PVDZE_bank_Save";
	
	cutText[format["You transferred %1 %2 to %3's bank account.", _targetMoney call BIS_fnc_numberText, CurrencyName, name _target], "PLAIN DOWN"];
	if (true) exitWith {};
};

Sleep 0.2;
_display closeDisplay 9000;

if (ConfirmTransfer) then {
	_dialog = createdialog "BankTransitionConfirm";
	[_selectedName,_transferMoney] call FetchConfirmData;
	waitUntil { !dialog };
} else {
	[] call FinishBankTransition;
};