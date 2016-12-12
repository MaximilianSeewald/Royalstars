/*
Author: Loudless

*/
disableSerialization;
if (life_cash < 1000000) exitWith {hint format [localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];};

createDialog "personalausweis_70000";
(findDisplay 70000) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];
waitUntil {!isNull (findDisplay 70000)};
