#include "..\..\script_macros.hpp"
/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "playerSettings";
disableSerialization;

switch (playerSide) do {
    case west: {
	    ctrlShow[1207,false];
		ctrlShow[1209,false];
		
		ctrlShow[3025,false];
		ctrlShow[3026,false];
    };

    case civilian: {
        ctrlShow[1210,false];
		ctrlShow[2008,false];
    };

    case independent: {
	    ctrlShow[1210,false];
		ctrlShow[2008,false];
		
		ctrlShow[1207,false];
		ctrlShow[1209,false];
		
		ctrlShow[3025,false];
		ctrlShow[3026,false];
    };
};

[] call life_fnc_p_updateMenu;
