/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;

//Entfernte Objekte

//Kavala HQ
private _delpos = [3299,12943,2];
(_delpos nearestObject 1119955) hideObject true;
(_delpos nearestObject 1119956) hideObject true;
(_delpos nearestObject 1119957) hideObject true;
(_delpos nearestObject 1119958) hideObject true;
(_delpos nearestObject 1119959) hideObject true;
(_delpos nearestObject 1119960) hideObject true;
(_delpos nearestObject 1119992) hideObject true;
(_delpos nearestObject 1119993) hideObject true;
(_delpos nearestObject 1119994) hideObject true;
(_delpos nearestObject 1119995) hideObject true;
//


