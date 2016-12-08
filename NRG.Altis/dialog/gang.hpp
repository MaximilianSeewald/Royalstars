class Life_My_Gang_Diag {
    idd = 2620;
    name= "life_my_gang_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

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
            idc = 2629;
            text = "";
            x = 0.2;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class GangMemberList: Life_RscListBox
        {
            idc = 2621;
            text = "";
            sizeEx = 0.035;
            x = 0.21;
            y = 0.26;
            w = 0.350;
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
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu;";
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

        class GangLeave: Life_RscButtonMenu {
            idc = -1;
            text = "Verlassen";
            onButtonClick = "[] call life_fnc_gangLeave";
            x = 0.57;
            y = 0.26;
            w = (9 / 40);
            h = (1 / 25);
        };

        class GangLock: Life_RscButtonMenu {
            idc = 2622;
            text = "Upgrade";
            onButtonClick = "[] spawn life_fnc_gangUpgrade";
            x = 0.57;
            y = 0.31;
            w = (9 / 40);
            h = (1 / 25);
        };

        class GangKick: Life_RscButtonMenu {
            idc = 2624;
            text = "Kick";
            onButtonClick = "[] call life_fnc_gangKick";
            x = 0.57;
            y = 0.36;
            w = (9 / 40);
            h = (1 / 25);
        };

        class GangLeader: Life_RscButtonMenu {
            idc = 2625;
            text = "Befördern";
            onButtonClick = "[] spawn life_fnc_gangNewLeader";
            x = 0.57;
            y = 0.41;
            w = (9 / 40);
            h = (1 / 25);
        };

        class InviteMember: GangLeader {
            idc = 2630;
            text = "Einladen";
            onButtonClick = "[] spawn life_fnc_gangInvitePlayer";
            y = .51;
        };

        class DisbandGang: InviteMember    {
            idc = 2631;
            text = "Auflösen";
            onButtonClick = "[] spawn life_fnc_gangDisband";
            y = .46;
        };

        class ColorList: Life_RscCombo {
            idc = 2632;
            x = 0.57;
            y = 0.56;
            w = (9 / 40);
            h = 0.03;
        };

        class GangBank: Title {
            idc = 601;
            style = 1;
            text = "";
        };
    };
};

class Life_Create_Gang_Diag {
    idd = 2520;
    name= "life_my_gang_menu_create";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn {waitUntil {!isNull (findDisplay 2520)}; ((findDisplay 2520) displayCtrl 2523) ctrlSetText format [localize ""STR_Gang_PriceTxt"",[(getNumber(missionConfigFile >> 'Life_Settings' >> 'gang_price'))] call life_fnc_numberText]};";

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
        class InfoMsg: Life_RscStructuredText {
            idc = 2523;
            sizeEx = 0.020;
            text = "";
            x = 0.31;
            y = 0.25;
            w = 0.5;
            h = .08;
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "Gang Menü";
            x = 0.44;
            y = 0.18;
            w = 0.6;
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
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu;";
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
 
        class GangCreateField: Life_RscButtonMenu {
            idc = -1;
            text = "Erstellen";
            onButtonClick = "[] call life_fnc_createGang";
            x = 0.42;
            y = 0.39;
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class CreateGangText: Life_RscEdit {
            idc = 2522;
            text = "";
			sizeEx = 0.030;
            x = 0.185 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.33;
            w = (13 / 40);
            h = (1 / 25);
        };
    };
};