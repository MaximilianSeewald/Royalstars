#define M_CONFIG(TYPE,CFG,CLASS,ENTRY) TYPE(missionConfigFile >> CFG >> CLASS >> ENTRY)
#define LICENSE_VARNAME(varName,flag) format ["license_%1_%2",flag,M_CONFIG(getText,"Licenses",varName,"variable")]

/*
	Autor: Felix von Studsinske
	Dateiname: fn_persoBeantragen.sqf
	Beschreibung:
		Überprüft nochmal die Eingaben/Auswahlen des Personalausweises und schickt die dann zum Server.
		
	Sie dürfen meine Funktionen/Scripte nur mit der "License-FvS.txt" nutzen sowie der Einhaltung der Regeln.
		Im Missionshauptverzeichnis oder in einem leicht zu findenen Ordner muss die "License-FvS.txt" vorhanden sein!
			Beispiel-Pfad: 
				Altis_Life.Altis\License-FvS.txt
				MyExampleMission.Altis\License-FvS.txt
	You are only allowed to use my scripts/functions with my littly "License-FvS.txt" and the agreements to the rules.
		The "License-FvS.txt" has to be in your mission root folder or in an easy to finding folder
			Destination example:
				Altis_Life.Altis\License-FvS.txt
				MyExampleMission.Altis\License-FvS.txt
*/
private ["_type","_varName","_sideFlag"];
disableSerialization;
if((lbCurSel 60002) == -1) exitWith {};
if((lbCurSel 60007) == -1) exitWith {};
if((lbCurSel 60008) == -1) exitWith {};
if((lbCurSel 60009) == -1) exitWith {};
if((lbCurSel 60017) == -1) exitWith {};
if(!fvs_hakenregeln || !fvs_hakenrichtig || !fvs_hakendaten || !fvs_namenInfo) exitWith {};

_sex = call compile format ["%1",lbData[60002,(lbCurSel 60002)]];
_bT = call compile format ["%1",lbValue[60007,(lbCurSel 60007)]];
_bM = call compile format ["%1",lbValue[60008,(lbCurSel 60008)]];
_bJ = call compile format ["%1",lbValue[60009,(lbCurSel 60009)]];
_bildID = call compile format ["%1",lbValue[60017,(lbCurSel 60017)]]; 
_insert = [];
_insert pushBack profileName;
_insert pushBack str((date select 0) - _bJ);
_insert pushBack _sex;
_insert pushBack str(_bT);
_insert pushBack str(_bM);
_insert pushBack str(_bJ);
_insert pushBack str(_bildID);
_uid = (getplayerUID player);
_side = side player;
[_insert,_uid,_side,player] remoteExec ["DB_fnc_persoInsert",2];

closeDialog 0;
fvs_hakenregeln = false;
fvs_hakenrichtig = false;
fvs_namenInfo = false;
fvs_hakendaten = false;
fvs_checking_a = false;

//Lizenz check
if(_sex isEqualTo "Deutsch") then{
	_type = "einbuergerung";
	_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
	_varName = LICENSE_VARNAME(_type,_sideFlag);
	missionNamespace setVariable [_varName,true];
	[2] call SOCK_fnc_updatePartial;
} else {
	_type = "einbuergerung_us";
	_sideFlag = M_CONFIG(getText,"Licenses",_type,"side");
	_varName = LICENSE_VARNAME(_type,_sideFlag);
	missionNamespace setVariable [_varName,true];
	[2] call SOCK_fnc_updatePartial;
};
