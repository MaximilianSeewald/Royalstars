#include "..\..\script_macros.hpp"
/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Loudless

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

if ((FETCH_CONST(life_coplevel) > 10) && (FETCH_CONST(life_coplevel) < 14)) exitWith {

	player addUniform "U_B_CombatUniform_mcam_vest";
	
	player addMagazine "16Rnd_9x21_Mag";
	player addWeapon "hgun_P07_snds_F";
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	player addMagazine "16Rnd_9x21_Mag";
	
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "ItemGPS";
	
	[] call life_fnc_playerSkins;
	[] call life_fnc_saveGear;
};

if ((FETCH_CONST(life_coplevel) > 13)) exitWith {

	player addUniform "U_B_CombatUniform_mcam";
	player addVest "V_PlateCarrier2_rgr";
	player addHeadgear "H_HelmetB_plain_mcamo";
	
	player addMagazine "30Rnd_9x21_Mag";
	player addWeapon "arifle_MX_F";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";
	player addMagazine "30Rnd_9x21_Mag";

	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "ItemWatch";
	player linkItem "ItemGPS";
	
	[] call life_fnc_playerSkins;
	[] call life_fnc_saveGear;
};

//Default
player addUniform "U_Rangemaster";

player addMagazine "16Rnd_9x21_Mag";
player addWeapon "hgun_P07_snds_F";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";
player addMagazine "16Rnd_9x21_Mag";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
