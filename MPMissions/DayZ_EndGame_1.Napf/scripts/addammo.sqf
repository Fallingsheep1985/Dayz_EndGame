//2000Rnd_762x51_M134
private ["_ammoType","_obj","_ammo","_mag","_mags"];
_ammo = "2000Rnd_762x51_M134";
_ammoType = getText (configFile >> "cfgMagazines" >> "2000Rnd_762x51_M134" >> "displayName");
call r_player_removeActions2;

					_obj = player;
					_mags = getArray (configFile >> 'CfgWeapons' >> currentWeapon vehicle _obj >> 'magazines');
					_mag = _mags select 0;
					vehicle _obj addMagazine _mag;
					
	player removeMagazine _ammo;

	cutText [format[(localize "str_epoch_player_127"),_ammoType], "PLAIN DOWN"];