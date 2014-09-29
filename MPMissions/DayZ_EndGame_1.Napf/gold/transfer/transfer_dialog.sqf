private ["_dialog"];

// Configure this option to your needs
// true = Asks for confirmation when transferring currency
// false = Doesn't ask confirmation and transfers the currency as soon as player clicks Transfer
ConfirmTransfer = true;
// Configuration end

BankTransferFetchData = {
	_myBankBalance = player getVariable ['bankMoney', 0] call BIS_fnc_numberText;
	ctrlSetText [8103, format["%1 %2", _myBankBalance, CurrencyName]];
};

Sleep 0.2;
_dialog = createdialog "BankTransferDialog";
call BankTransferFetchData;
waitUntil { !dialog };