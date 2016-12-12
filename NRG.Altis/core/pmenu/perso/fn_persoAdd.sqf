#define M_CONFIG(TYPE,CFG,CLASS,ENTRY) TYPE(missionConfigFile >> CFG >> CLASS >> ENTRY)
#define LICENSE_VARNAME(varName,flag) format ["license_%1_%2",flag,M_CONFIG(getText,"Licenses",varName,"variable")]

/*
Author: Loudless

*/

_text = [_this,0,[],[[]]] call BIS_fnc_param;

_name = _text select 0;
_alter = _text select 1;
_sex = _text select 2;
_t = _text select 3;
_m = _text select 4;
_j = _text select 5;
_bildID = _text select 6;
_bildName = getText(missionConfigFile >> "Personalausweis" >> "persoBild" >> _bildID >> "name");

//Lizenz check
if(_sex isEqualTo "Deutsch") then{
	
	_type = "einbuergerung_us";
	_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
	_varName = LICENSE_VARNAME(_type,_sideFlag);
	missionNamespace setVariable [_varName,true];
	[2] call SOCK_fnc_updatePartial;
} else {
	_type = "einbuergerung";
	_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
	_varName = LICENSE_VARNAME(_type,_sideFlag);
	missionNamespace setVariable [_varName,true];
	[2] call SOCK_fnc_updatePartial;
};

_sex = "Deutsch\Amerikanisch";

_insert = [];
_insert pushBack _name;
_insert pushBack _alter;
_insert pushBack _sex;
_insert pushBack _t;
_insert pushBack _m;
_insert pushBack _j;
_insert pushBack _bildID;
_uid = (getplayerUID player);
_side = side player;
[_insert,_uid,_side,player] remoteExec ["DB_fnc_persoUpdate",2];

hint parseText format ["Du hast eine Deutsch\Amerikanisch für 1.000.000$ gekauft!"];
player setVariable ["personaltext",_insert,true];
life_cash = life_cash - 1000000;
[] call SOCK_fnc_updateRequest;

