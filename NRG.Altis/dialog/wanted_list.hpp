class life_wanted_menu {
    idd = 2400;
    name= "life_wanted_menu";
    movingEnable = false;
    enableSimulation = true;

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
            text = "Fahndungsliste";
            x = 0.412;
            y = 0.18;
            w = 0.6;
            h = (1 / 25);
        };

        class WantedList: Life_RscListBox {
            idc = 2401;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[] spawn life_fnc_wantedGrab";
            x = 0.04;
            y = 0.28;
            w = 0.3;
            h = 0.3;
        };

        class PlayerList: Life_RscListBox {
            idc = 2406;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "";
            x = 0.36;
            y = 0.28;
            w = 0.3;
            h = 0.3;
        };

        class WantedDetails: Life_RscListBox {
            idc = 2402;
            text = "";
            sizeEx = 0.035;
            colorBackground[] = {0, 0, 0, 0};
            x = 0.12;
            y = 0.62;
            w = 0.3;
            h = 0.12;
        };

        class BountyPrice: Life_RscText    {
            idc = 2403;
            text = "";
            x = 0.675;
            y = 0.317;
            w = 0.6;
            h = 0.6;
        };

        class WantedAddL: Life_RscCombo    {
            idc = 2407;
            x = 0.67;
            y = 0.28;
            w = 0.3;
            h = 0.03;
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

        class PardonButtonKey: Life_RscButtonMenu {
            idc = 2405;
            text = "Vergeben";
            onButtonClick = "[] call life_fnc_pardon;";
            x = 0.11;
            y = 0.6;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonWantedAdd: Life_RscButtonMenu {
            idc = 9800;
            text = "Bestrafen";
            onButtonClick = "[] call life_fnc_wantedAddP;";
			x = 0.43;
            y = 0.6;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class wantedText: Life_RscText {
            idc = 1000;
            text = "Verbrecher";
            x = 0.04;
            y = 0.11;
            w = 0.2;
            h = 0.3;
        };

        class citizensText: Life_RscText {
            idc = 1001;
            text = "Bürger";
            x = 0.36;
            y = 0.11;
            w = 0.2;
            h = 0.3;
        };

        class crimesText: Life_RscText {
            idc = 1002;
            text = "Verbrechen";
            x = 0.67;
            y = 0.245;
            w = (8 / 52);
            h = 0.03;
        };
    };
};