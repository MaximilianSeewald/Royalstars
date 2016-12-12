/*
Author: Loudless

*/
if (life_cash < 25000) exitWith {hint format [localize "STR_NOTF_NE_1",[_price] call life_fnc_numberText,localize _displayName];};
_uid = getPlayerUID player;
_side = playerSide;
_sender = player;
[_uid,_side,_sender] remoteExec ["DB_fnc_persoRequest2",2];