//create an object for default build system style
private ["_passArray","_classname","_enableGhost","_ghost","_location1","_dir","_object","_objectHelper","_helperColor"];

_classname = _this select 0;
_ghost = _this select 1;
_offset = _this select 2;
_enableGhost = _this select 3; //pass false trough args if not using ghost preview

_passArray = [];
_objectHelper = objNull;

// get inital players position
_location1 = [player] call FNC_GetPos;

// if enabled, use ghost preview where available
if (_enableGhost) then {
	if (_ghost != "") then {
		_classname = _ghost;
	};
};

_object = createVehicle [_classname, [0,0,0], [], 0, "CAN_COLLIDE"]; //object preview, not an actual object that will be built

_objectHelper = "Sign_sphere10cm_EP1" createVehicle [0,0,0];
_helperColor = "#(argb,8,8,3)color(0,0,0,0,ca)";
_objectHelper setobjecttexture [0,_helperColor];
_objectHelper attachTo [player,_offset];
_object attachTo [_objectHelper,[0,0,0]];


if (isClass (missionConfigFile >> "SnapBuilding" >> _classname)) then {	
	["","","",["Init",_object,_classname,_objectHelper]] spawn snap_build;
};

_passArray = [_location1,_object,_objectHelper];
_passArray //[array,obj,array]

