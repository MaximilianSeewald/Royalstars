class Life_Clothing {
    idd = 3100;
    name= "Life_Clothing";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscPicture {
            idc = -1;
			text = "textures\phone\phone.paa";
            x = 0.01 * safezoneW + safezoneX;
            y = 0.165 * safezoneH + safezoneY;
            w = 0.7;
            h = 0.8;
        };
    };

    class controls {
        class ClothingList: Life_RscListBox {
            idc = 3101;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[_this] call life_fnc_changeClothes;";
            x = 0.0842977 * safezoneW + safezoneX;
            y = 0.240498 * safezoneH + safezoneY;
            w = 0.3;
            h = 0.35;
        };

        class PriceTag: Life_RscStructuredText {
            idc = 3102;
            text = "";
            sizeEx = 0.035;
            x = 0.0853304 * safezoneW + safezoneX;
            y = 0.439419 * safezoneH + safezoneY;
            w = 0.2;
            h = (1 / 25);
        };

        class TotalPrice: Life_RscStructuredText {
            idc = 3106;
            text = "";
            sizeEx = 0.035;
            x = 0.148258 * safezoneW + safezoneX;
            y = 0.439419 * safezoneH + safezoneY;
            w = 0.2;
            h = (1 / 25);
        };

        class FilterList: Life_RscCombo {
            idc = 3105;
            onLBSelChanged  = "_this call life_fnc_clothingFilter";
            x = 0.0845 * safezoneW + safezoneX;
            y = 0.468 * safezoneH + safezoneY;
            w = 0.3042;
            h = 0.035;
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0; [] call life_fnc_playerSkins;";
            x = 0.148 * safezoneW + safezoneX;
            y = 0.492 * safezoneH + safezoneY;
            w = 0.153;
            h = (1 / 25);
        };

        class BuyButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "Kaufen";
            onButtonClick = "[] call life_fnc_buyClothes;";
            x = 0.083 * safezoneW + safezoneX;
            y = 0.492 * safezoneH + safezoneY;
            w = 0.153;
            h = (1 / 25);
        };

        class viewAngle: life_RscXSliderH {
            idc = 3107;
			color[] = {1, 1, 1, 0.45};
            colorActive[] = {1, 1, 1, 0.65};
            text = "";
            onSliderPosChanged = "[4,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "";
            x = 0.25 * safezoneW + safezoneX;
            y = 0.95 * safezoneH + safezoneY;
            w = 0.5 * safezoneW;
            h = 0.02 * safezoneH;
        };
    };
};