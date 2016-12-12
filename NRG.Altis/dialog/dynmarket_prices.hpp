class life_dynmarket_prices {
	idd = 7100;
	name= "life_dynmarket_prices";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn {sleep 1;[] call life_fnc_LoadIntoListbox;};";
	
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
		class RscFrame_1800: Life_RscText {
			idc = -1;
			x = 0.306563 * safezoneW + safezoneX;
			y = 0.390043 * safezoneH + safezoneY;
			w = 0.446875 * safezoneW;
			h = 0.219914 * safezoneH;
		};
		
		class RscListbox_1500: Life_RscListBox {
			idc = 7055;
			onLBSelChanged = "[] spawn {[] call life_fnc_DisplayPrices;};";
			colorBackground[] = {0, 0, 0, 0.1};
			x = 0.312292 * safezoneW + safezoneX;
			y = 0.398839 * safezoneH + safezoneY;
			w = 0.211979 * safezoneW;
			h = 0.202321 * safezoneH;
			sizeEx = 0.0260;
		};
		
		class RscText_1000: Life_RscText {
			idc = -1;
			text = "Verkaufspreis:"; 
			x = 0.53 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.217708 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		
		class RscText_1001: Life_RscText {
			idc = 7056;
			text = "Bitte wähle ein Item";
			x = 0.53 * safezoneW + safezoneX;
			y = 0.420831 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0549786 * safezoneH;
			sizeEx = 0.060;
		};

		class RscButtonMenu_2400: Life_RscButtonMenu {
			onButtonClick = "closeDialog 0;";
			idc = 1006;
			text = "OKAY";
			x = 0.53 * safezoneW + safezoneX;
			y = 0.57697 * safezoneH + safezoneY;
			w = 0.16 * safezoneW;
			h = 0.0219914 * safezoneH;
			colorText[] = {1,1,1,1};
		};

		class RscText_1007: Life_RscStructuredText {
			idc = 7058;
			text = "";
			x = 0.53 * safezoneW + safezoneX;
			y = 0.460221 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0549786 * safezoneH;
			colorText[] = {0.33,0.33,0.33,1};
		};
	};
};