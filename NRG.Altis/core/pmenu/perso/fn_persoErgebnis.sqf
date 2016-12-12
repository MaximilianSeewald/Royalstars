/*
	Autor: Felix von Studsinske
	Dateiname: fn_persoErgebnis.sqf
	Beschreibung:
		Überprüft die Personalausweisdaten auf das richtige Format (Strings) und weist den Personalausweis dem Spieler zu.
		
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
_text = [_this,0,[],[[]]] call BIS_fnc_param;
if(_text isEqualTo []) exitWith {0 cutText ["Fehler: Personalausweis muss angelegt werden","BLACK FADED"]; 0 cutFadeOut 9999999; [] call fvs_fnc_persoNeu};
if((count _text) < 7 || (count _text) > 7 || !(_this isEqualType [])) exitWith {endMission "fehlerprof";};
if(!((_text select 0) isEqualTo profileName)) exitWith {
	[(_text select 0)] spawn {
		[
			format["Du hast dich versucht mit einem anderem Profilname (%1) anzumelden, aber '%2' ist für den Personalausweis hinterlegt! Ändere deinen Namen im Profil oder melde dich beim Support im Teamspeak auf %3 oder im Forum unter <a href='http://%4'>%4</a></t>",profileName, _this select 0,getText(missionConfigFile >> "server" >> "ts"),getText(missionConfigFile >> "server" >> "web")],
			"Personalausweis - Falscher Name - Case-Sensitive (Groß-/Kleinschreibung)",
			"Verstanden",
			false
		] call BIS_fnc_guiMessage;
		endMission "falschprof";
	};
};
if(!(_text isEqualTypeArray ["","","","","","",""]) || (typeName _text != "ARRAY")) exitWith {endMission "fformatprof";};
_name = _text select 0;
_alter = _text select 1;
_sex = _text select 2;
_t = _text select 3;
_m = _text select 4;
_j = _text select 5;
_bildID = _text select 6;
_bildName = getText(missionConfigFile >> "Personalausweis" >> "persoBild" >> _bildID >> "name");
player setVariable ["personaltext",_text,true];
fvs_persoReady = true;