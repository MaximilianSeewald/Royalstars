#define CONTROL(disp,ctrl) ((findDisplay ##disp) displayCtrl ##ctrl)
/*
Author: Loudless

*/
disableSerialization;
_text = [_this,0,[],[[]]] call BIS_fnc_param;

_name = _text select 0;
_alter = _text select 1;
_sex = _text select 2;
_t = _text select 3;
_m = _text select 4;
_j = _text select 5;
_bildID = _text select 6;
_bildName = getText(missionConfigFile >> "Personalausweis" >> "persoBild" >> _bildID >> "name");

_spielername = ctrlText (CONTROL(70000,70001));
closeDialog 0;


_insert = [];
_insert pushBack _spielername;
_insert pushBack _alter;
_insert pushBack _sex;
_insert pushBack _t;
_insert pushBack _m;
_insert pushBack _j;
_insert pushBack _bildID;
_uid = (getplayerUID player);
_side = side player;
[_insert,_uid,_side,player] remoteExec ["DB_fnc_persoUpdate",2];

hint parseText format ["Dein Name wurde für 250.000 geändert! Du wirst in 1 Minute Disconnected um deinen Namen zu ändern."];
life_cash = life_cash - 250000;
[] call SOCK_fnc_updateRequest;
[] spawn{
	sleep 60;
	endMission "persoA";
};

