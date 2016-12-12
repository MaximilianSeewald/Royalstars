/*
Author: Loudless

*/

_uid = getPlayerUID player;
_side = playerSide;
_sender = player;
[_uid,_side,_sender] remoteExec ["DB_fnc_persoRequest3",2];
