/*
	Autor: Felix von Studsinske
	Dateiname: fn_persoNeu.sqf
	Beschreibung:
		Anlegen eines neuen Personalausweises
		
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
fvs_checking = true;
0 cutText ["","BLACK FADED"];
0 cutFadeOut 9999999;
disableSerialization;
createDialog "personalausweis_60000";
(findDisplay 60000) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];
waitUntil {!isNull (findDisplay 60000)};
_display = findDisplay 60000;

_spielername = _display displayCtrl 60001;
_lb_geschlechtList = _display displayCtrl 60002;
_anzeigeAlter = _display displayCtrl 60003;
_lb_bdayTagList = _display displayCtrl 60007;
_lb_bdayMonatList = _display displayCtrl 60008;
_lb_bdayJahrList = _display displayCtrl 60009;
_knopfsenden = _display displayCtrl 60015;
_bild = _display displayCtrl 60016;
_lb_bildID = _display displayCtrl 60017;

_knopfsenden ctrlEnable false; // Weil neu ^^

_name = "";
_profname = (profileName) splitString "";
_zeichen = "1234567890!$%&/()=?{[]}\^+*~#.:,;<>|";
_zeichen = _zeichen splitString "";
{
	if(!(_x in _zeichen)) then {
		if(_x == " ") then {
			_name = _name + "_";
		} else {
			_name = _name + _x;
		};
	};
} forEach _profname;

_configs_B = (missionConfigFile >> "Personalausweis" >> "persoBild") call BIS_fnc_getCfgSubClasses;
_arrayBild = [];
{
	_arrayBild pushBack [getNumber(missionConfigFile >> "Personalausweis" >> "persoBild" >> _x >> "id"),getText(missionConfigFile >> "Personalausweis" >> "persoBild" >> _x >> "name")];
} forEach _configs_B;
{
	_lb_bildID lbAdd format["%1 %2",_x select 0, _x select 1];
	_lb_bildID lbSetValue [(lbSize _lb_bildID)-1,_x select 0];
} forEach _arrayBild;
lbSetCurSel [60017,0];

_jahreArr = getArray(missionConfigFile >> "Personalausweis" >> "jahre");
for "_bJ" from (_jahreArr select 0) to (_jahreArr select 1) do
{
	_lb_bdayJahrList lbAdd format["%1",_bJ];
	_lb_bdayJahrList lbSetValue [(lbSize _lb_bdayJahrList)-1,_bJ];
};
lbSetCurSel [60009,0];

_sex = getArray(missionConfigFile >> "Personalausweis" >> "geschlecht");
{
	_lb_geschlechtList lbAdd format["%1",_x];
	_lb_geschlechtList lbSetData [(lbSize _lb_geschlechtList)-1,str(_x)];
} forEach _sex;
lbSetCurSel [60002,0];

[] spawn {
	while{true} do {
		if(isNull (findDisplay 60000)) exitWith {};
		if(!fvs_checking) exitWith {};
		[]call fvs_fnc_persoCheck;
		sleep .01;
	};
};