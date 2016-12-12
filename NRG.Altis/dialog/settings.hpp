class SettingsMenu {
    idd = 2900;
    name = "SettingsMenu";
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {
        class RscMainBackground: Life_RscPicture {
            idc = -1;
			text = "textures\tablet\tablet.paa";
			x = 0.258501 * safezoneW + safezoneX;
			y = 0.0716 * safezoneH + safezoneY;
			w = 0.485625 * safezoneW;
			h = 0.854 * safezoneH;
        };

        class PlayerTagsHeader: Life_RscText {
            idc = -1;
            text = "Spielernamen";
            x = 0.31;
            y = 0.43;
            w = 0.35;
            h = (1 / 25);
        };

        class SideChatHeader : PlayerTagsHeader {
            idc = -1;
            text = "Sidechat aktivieren";
            y = 0.48;
        };

        class RevealNearestHeader : PlayerTagsHeader {
            idc = -1;
            text = "Objekte anzeigen";
            y = 0.53;
        };

        class BroacastHeader : PlayerTagsHeader {
            idc = -1;
            text = "News aktivieren";
            y = 0.58;
        };

        class Title: Life_RscTitle {
            idc = -1;
            text = "Einstellungen";
            x = 0.418;
            y = 0.18;
            w = 0.6;
            h = (1 / 25);
        };
    };

    class controls {
        class VDonFoot: Life_RscText {
            idc = -1;
            text = "Zu Fuß:";
            x = 0.27;
            y = 0.258;
            w = 0.275;
            h = 0.04;
        };

        class VDinCar: Life_RscText {
            idc = -1;
            text = "Im Auto:";
            x = 0.27;
            y = 0.305;
            w = 0.275;
            h = 0.04;
        };

        class VDinAir: Life_RscText {
            idc = -1;
            text = "Im Heli:";
            x = 0.27;
            y = 0.355;
            w = 0.275;
            h = 0.04;
        };

        class VD_onfoot_slider: life_RscXSliderH {
            idc = 2901;
            text = "";
            onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "Sichtweite zu Fuß";
            x = 0.37;
            y = 0.30 - (1 / 25);
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };

        class VD_onfoot_value: Life_RscEdit {
            idc = 2902;
            text = "";
            onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
            x = .65;
            y = .258;
            w = .08;
            h = .04;
        };

        class VD_car_slider: life_RscXSliderH {
            idc = 2911;
            text = "";
            onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "Sichtweite in Fahrzeugen";
            x = 0.37;
            y = 0.35 - (1 / 25);
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };

        class VD_car_value: Life_RscEdit {
            idc = 2912;
            text = "";
            onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
            x = .65;
            y = .31;
            w = .08;
            h = .04;
        };

        class VD_air_slider: life_RscXSliderH {
            idc = 2921;
            text = "";
            onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "Sichtweite in Helikoptern";
            x = 0.37;
            y = 0.40 - (1 / 25);
            w = "9 *(((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1 *((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
        };

        class VD_air_value: Life_RscEdit {
            idc = 2922;
            text = "";
            onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
            onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
            x = 0.65;
            y = 0.36;
            w = .08;
            h = .04;
        };

        class PlayerTagsONOFF: Life_Checkbox {
            tooltip = "Regelt, ob Spieler Namensschilder über dem Kopf haben.";
            idc = 2970;
            sizeEx = 0.04;
            onCheckedChanged = "['tags',_this select 1] call life_fnc_s_onCheckedChange;";
            x = 0.66;
            y = 0.43;

        };

        class SideChatONOFF: PlayerTagsONOFF {
            idc = 2971;
            tooltip = "Sidechat aktivieren. Ausschalten, wenn du nicht mit Spielern deiner Fraktion sprechen möchtest.";
            onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";
            y = 0.48;
        };

        class RevealONOFF : PlayerTagsONOFF {
            idc = 2972;
            tooltip = "Zeigt automatisch nächstgelegene Objekte innerhalb von 15m an, deaktiviere es, wenn du Leistungprobleme hast.";
            onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
            y = 0.53;
        };

        class BroadcastONOFF : PlayerTagsONOFF {
            idc = 2973;
            tooltip = "Regelt, ob Nachrichten des Nachrichtensenders empfangen werden.";
            onCheckedChanged = "['broadcast',_this select 1] call life_fnc_s_onCheckedChange;";
            y = 0.58;
        };

		class CloseButtonPictureKey: life_RscPicture
		{
			idc = -1;
			text = "textures\tablet\close.paa";
			x = 0.485 * safezoneW + safezoneX;
			y = 0.6988 * safezoneH + safezoneY;
			w = 0.0315 * safezoneW;
			h = 0.056 * safezoneH;
		};
		
        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            onButtonClick = "closeDialog 0;";
			x = 0.485 * safezoneW + safezoneX;
			y = 0.6988 * safezoneH + safezoneY;
			w = 0.0315 * safezoneW;
			h = 0.056 * safezoneH;
			tooltip = "Schließen";
			colorBackground[] = {-1,-1,-1,-1};
			colorBackgroundFocused[] = {1,1,1,0.12};
			colorBackground2[] = {0.75,0.75,0.75,0.2};
			color[] = {1,1,1,1};
			colorFocused[] = {0,0,0,0};
			color2[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {1,0,0,0.1};
        };
    };
};
