/*
 Author: Loudless

*/

while {true} do { 
	sleep 900; 
	if (alive player) then 
	{
		[false] call SOCK_fnc_syncData;
	};
};