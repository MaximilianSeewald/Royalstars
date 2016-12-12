class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
        class MainBackground: Life_RscPicture {
            idc = -1;
			text = "textures\tablet\tablet.paa";
			x = 0.258501 * safezoneW + safezoneX;
			y = 0.0716 * safezoneH + safezoneY;
			w = 0.485625 * safezoneW;
			h = 0.854 * safezoneH;
        };
    };

    class controls {
        class Title: Life_RscTitle {
            idc = -1;
            text = "Telefon";
            x = 0.454;
            y = 0.18;
            w = 0.6;
            h = (1 / 25);
        };

        class TextToSend: Life_RscTitle {
            idc = 3002;
            text = "Nachricht verfassen:";
            x = 0.183;
            y = 0.3;
            w = 0.6;
            h = (1 / 25);
        };

        class textEdit: Life_RscEdit {
            idc = 3003;
            text = "";
            sizeEx = 0.030;
            x = 0.193;
            y = 0.35;
            w = 0.62;
            h = 0.03;
        };

        class TextMsgButton: Life_RscButtonMenu {
            idc = 3015;
            text = "SMS";
            onButtonClick = "[] call TON_fnc_cell_textmsg";
            x = 0.193;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
        };

        class PlayerList: Life_RscCombo {
            idc = 3004;
            x = 0.193;
            y = 0.45;
            w = 0.2;
            h = (1 / 25);
        };

        class TextCopButton: Life_RscButtonMenu {
            idc = 3016;
            text = "Polizei";
            onButtonClick = "[] call TON_fnc_cell_textcop";
            x = 0.403;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
        };

        class TextAdminButton: Life_RscButtonMenu {
            idc = 3017;
            text = "Support";
            onButtonClick = "[] call TON_fnc_cell_textadmin";
            x = 0.193;
            y = 0.5;
            w = 0.2;
            h = (1 / 25);
        };

        class AdminMsgButton: Life_RscButtonMenu {
            idc = 3020;
            text = "Admin SMS";
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
            x = 0.403;
            y = 0.45;
            w = 0.2;
            h = (1 / 25);
        };

        class AdminMsgAllButton: Life_RscButtonMenu {
            idc = 3021;
            text = "Rundruf";
            onButtonClick = "[] call TON_fnc_cell_adminmsgall";
            x = 0.613;
            y = 0.45;
            w = 0.2;
            h = (1 / 25);
        };

        class EMSRequest: Life_RscButtonMenu {
            idc = 3022;
            text = "THW";
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
			x = 0.613;
            y = 0.4;
            w = 0.2;
            h = (1 / 25);
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