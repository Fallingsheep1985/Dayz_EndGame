disableSerialization;

private ["_dialog"];
transfer_plist = [];

{
	if ((getPlayerUID _x != "") && (getPlayerUID _x != getPlayerUID player)) then {
		transfer_plist set [count transfer_plist, name _x];
	};
} forEach entities "CAManBase";

{
	if ((count crew _x) > 0) then {
		{
			if ((getPlayerUID _x != "") && (getPlayerUID _x != getPlayerUID player)) then {
				transfer_plist set [count transfer_plist, name _x];
			};
		} forEach crew _x;
	};
} forEach (entities "LandVehicle" + entities "Air" + entities "Ship");

_display = findDisplay 8101;
_disp_plist = _display displayCtrl 8104;

if ((count transfer_plist) > 0) then {
	{
		_disp_plist lbAdd _x;
	} foreach transfer_plist;
};