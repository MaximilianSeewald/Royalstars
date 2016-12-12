class Life_key_management {
    idd = 2700;
    name= "life_key_chain";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_keyMenu;";

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
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "Schlüsselbund";
            x = 0.415;
            y = 0.18;
            w = 0.6;
            h = (1 / 25);
        };

        class KeyChainList: Life_RscListBox {
            idc = 2701;
            text = "";
            sizeEx = 0.035;
            x = 0.22;
            y = 0.26;
            w = 0.56;
            h = 0.370;
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

        class NearPlayers: Life_RscCombo {
            idc = 2702;
            x = 0.505;
            y = 0.645;
            w = 0.275;
            h = 0.03;
        };

        class DropKey: Life_RscButtonMenu {
            idc = -1;
            text = "Löschen";
            onButtonClick = "[] call life_fnc_keyDrop";
            x = 0.218;
            y = 0.642;
            w = (6.25 / 47);
            h = (1 / 25);
        };

        class GiveKey: Life_RscButtonMenu {
            idc = 2703;
            text = "Geben";
            onButtonClick = "[] call life_fnc_keyGive";
            x = 0.355;
            y = 0.642;
            w = (6.25 / 47);
            h = (1 / 25);
        };
    };
};