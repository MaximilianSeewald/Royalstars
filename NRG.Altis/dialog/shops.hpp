class life_weapon_shop {
    idd = 38400;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class MainBackground: Life_RscPicture {
            text = "textures\phone\phone.paa";
            idc = -1;
            x = 0;
            y = 0;
            w = 0.7;
            h = 0.8;
        };

        class itemInfo: Life_RscStructuredText {
            idc = 38404;
            text = "";
            sizeEx = 0.035;
            x = 0.185;
            y = 0.54;
            w = 0.2;
            h = 0.2;
        };

        class FilterList: Life_RscCombo {
            idc = 38402;
            onLBSelChanged = "_this call life_fnc_weaponShopFilter";
            x = 0.185;
            y = 0.5;
            w = 0.3;
            h = 0.035;
        };
    };

    class controls {
        class itemList: Life_RscListBox {
            idc = 38403;
            onLBSelChanged = "_this call life_fnc_weaponShopSelection";
            sizeEx = 0.035;
            x = 0.185;
            y = 0.11;
            w = 0.3;
            h = 0.38;
        };

        class ButtonBuySell: Life_RscButtonMenu {
            idc = 38405;
            text = "$STR_Global_Buy";
            onButtonClick = "[] spawn life_fnc_weaponShopBuySell; true";
            x = 0.175;
            y = 0.66 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;";
            x = 0.175 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.66 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonMags: Life_RscButtonMenu {
            idc = 38406;
            text = "$STR_Global_Mags";
            onButtonClick = "_this call life_fnc_weaponShopMags; _this call life_fnc_weaponShopFilter";
            x = 0.175;
            y = 0.66 + (1 / 250 / (safezoneW / safezoneH));
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class ButtonAccs: Life_RscButtonMenu {
            idc = 38407;
            text = "$STR_Global_Accs";
            onButtonClick = "_this call life_fnc_weaponShopAccs; _this call life_fnc_weaponShopFilter";
            x = 0.175 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.66 + (1 / 250 / (safezoneW / safezoneH));
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};