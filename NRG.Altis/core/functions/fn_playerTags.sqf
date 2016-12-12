#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
_units = _units - [player];

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

private _index = -1;
{
    private "_text";
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };
        _sPos = worldToScreen _pos;
        _distance = _pos distance player;
        if (!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) then {
            if (count _sPos > 1 && {_distance < 15}) then {
                _text = switch (true) do {
                    case (_x in (units group player) && playerSide isEqualTo civilian): {format ["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];};
                    case (side _x isEqualTo west && {!isNil {_x getVariable "rank"}}): {format ["<img image='%1' size='1'></img> <t color='#005AFF'>%3</t><br/>%2",switch ((_x getVariable "rank")) do {
                        case 2: {"icons\ranks\rekrut.paa"};
                        case 3: {"icons\ranks\wachtmeister.paa"};
                        case 4: {"icons\ranks\hauptmeister.paa"};
                        case 5: {"icons\ranks\kommissar.paa"};
                        case 6: {"icons\ranks\oberkommissar.paa"};
                        case 7: {"icons\ranks\hauptkommissar.paa"};
                        case 8: {"icons\ranks\polizeirat.paa"};
						case 9: {"icons\ranks\polizeidirektor.paa"};
						case 10: {"icons\ranks\polizeipraesident.paa"};
						case 11: {"icons\ranks\fbi.paa"};
                        case 12: {"icons\ranks\fbi.paa"};
                        case 13: {"icons\ranks\fbi.paa"};
                        case 14: {"icons\ranks\private.paa"};
                        case 15: {"icons\ranks\corporal.paa"};
                        case 16: {"icons\ranks\sergeant.paa"};
                        case 17: {"icons\ranks\staff_sergeant.paa"};
						case 18: {"icons\ranks\captain.paa"};
						case 19: {"icons\ranks\major.paa"};
						case 20: {"icons\ranks\general.paa"};
                        default {"icons\ranks\anwaerter.paa"};
                        },_x getVariable ["realname",name _x],switch ((_x getVariable "rank")) do {
							case 2: {"Polizeimeister"};
							case 3: {"Polizeiobermeister"};
							case 4: {"Polizeihauptmeister"};
							case 5: {"Kommissar"};
							case 6: {"Oberkommissar"};
							case 7: {"Hauptkommissar"};
							case 8: {"Polizeirat"};
							case 9: {"Polizeidirektor"};
							case 10: {"Polizeipräsident"};
							case 11: {"Agent"};
							case 12: {"Special Agent"};
							case 13: {"Supervising Agent"};
							case 14: {"Private"};
							case 15: {"Corporal"};
							case 16: {"Sergeant"};
							case 17: {"Staff Sergeant"};
							case 18: {"Captain"};
							case 19: {"Major"};
							case 20: {"General"};
							default {"Polizeianwärter"};
							}]};
                    case (side _x isEqualTo independent): {format ["<t color='#FF0000'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa' size='1.5'></img></t> %1",_x getVariable ["realname",name _x]]};
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
                            format ["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
                        } else {
                            if (alive _x) then {
                                _x getVariable ["realname",name _x];
                            } else {
                                if (!isPlayer _x) then {
                                    _x getVariable ["realname","ERROR"];
                                };
                            };
                        };
                    };
                };

                _idc ctrlSetStructuredText parseText _text;
                _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
                _idc ctrlSetScale scale;
                _idc ctrlSetFade 0;
                _idc ctrlCommit 0;
                _idc ctrlShow true;
            } else {
                _idc ctrlShow false;
            };
        } else {
            _idc ctrlShow false;
        };
    } else {
        _idc ctrlShow false;
    };
    _index = _forEachIndex;
} forEach _units;
(_ui displayCtrl (iconID + _index + 1)) ctrlSetStructuredText parseText "";