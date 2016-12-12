class playerPerso
{
	idd = -1;
	movingEnable = 0;
	fadein = 0;
	duration = 5;
	fadeout = 0;
	name = "playerPerso";
	onLoad = "uiNamespace setVariable ['playerPerso',_this select 0];";
	objects[] = {};
	
	class controlsBackground {
		class perso_bild: Life_RscPicture
		{
			idc = -1;

			text = "textures\persobilder\personalausweis.paa";
			x = 0.700063 * safezoneW + safezoneX;
			y = 0.3636 * safezoneH + safezoneY;
			w = 0.294936 * safezoneW;
			h = 0.5346 * safezoneH;
		};
	};
	class controls {
		class bild_person: Life_RscPicture
		{
			idc = 410001;

			text = "";
			x = 0.709322 * safezoneW + safezoneX;
			y = 0.62 * safezoneH + safezoneY;
			w = 0.0771876 * safezoneW;
			h = 0.167963 * safezoneH;
		};
		class text_name: Life_RscStructuredText
		{
			idc = 410002;
			shadow = 0;
			
			x = 0.84 * safezoneW + safezoneX;
			y = 0.664 * safezoneH + safezoneY;
			w = 0.155187 * safezoneW;
			h = 0.0266297 * safezoneH;
		};
		class text_bday: Life_RscStructuredText
		{
			idc = 410003;
			shadow = 0;

			x = 0.874 * safezoneW + safezoneX;
			y = 0.702 * safezoneH + safezoneY;
			w = 0.153125 * safezoneW;
			h = 0.0266297 * safezoneH;
		};
		class text_sex: Life_RscStructuredText
		{
			idc = 410006;
			shadow = 0;

			x = 0.805 * safezoneW + safezoneX;
			y = 0.767 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.0266297 * safezoneH;
		};
	};
};