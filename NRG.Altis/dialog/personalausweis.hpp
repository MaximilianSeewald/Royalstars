class personalausweis_60000
{
	idd = 60000;
	name = "personalausweis_60000";
	movingEnabled = false;
	enableSimulation = true;
	onLoad = "";

	class controlsBackground {
		class hintergrund: Life_RscText
		{
			idc = -1;

			x = 0.0124995;
			y = 0.02;
			w = 0.974999;
			h = 0.78;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class text_bestaetigen: Life_RscText
		{
			idc = -1;
			sizeEx = 0.030;
			x = 0.162499;
			y = 0.88;
			w = 0.674999;
			h = 0.04;
			colorText[] = {1,-1,-1,1};
		};
		class text_alter: Life_RscText
		{
			idc = -1;

			text = "Alter";
			x = 0.0375007;
			y = 0.18;
			w = 0.125;
			h = 0.04;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0.7,0.7,0.7,1};
			sizeEx = 0.035;
		};
		class text_geschl: Life_RscText
		{
			idc = -1;

			text = "Staat";
			x = 0.0375007;
			y = 0.12;
			w = 0.125;
			h = 0.04;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0.7,0.7,0.7,1};
			sizeEx = 0.035;
		};
		class text_geburtsdatum: Life_RscText
		{
			idc = -1;

			text = "Geburtsdatum";
			x = 0.0375007;
			y = 0.3;
			w = 0.262499;
			h = 0.04;
			tooltip = "$STR_IDCard_bdayttip";
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {0.7,0.7,0.7,1};
			sizeEx = 0.035;
		};
		class text_ok: Life_RscText
		{
			idc = -1;

			text = "Akzeptieren:";
			x = 0.0249988;
			y = 0.8;
			w = 0.1375;
			h = 0.04;
			colorText[] = {1,-1,-1,1};
			sizeEx = 0.035;
		};
	};
	class controls {
		class knopf_beantragen: Life_RscButtonMenu
		{
			idc = 60015;
			class Attributes				{				align = "center";			 };
			onButtonClick="[] call fvs_fnc_persoBeantragen;";

			text = "Beantragen";
			x = 0.2;
			y = 0.94;
			w = 0.6;
			h = 0.08;
		};
		class haken_Regeln: Life_Checkbox
		{
			idc = 60100;
			onCheckedChanged	= "if(!fvs_hakenregeln) then {fvs_hakenregeln = true; systemChat localize 'STR_IDCard_check_rulesOK';} else {fvs_hakenregeln = false;systemChat localize 'STR_IDCard_check_rulesNOK';};";

			x = 0.174999;
			y = 0.8;
			w = 0.0375001;
			h = 0.04;
			tooltip = "Ich akzeptiere die Serverregeln und habe diese gelesen und Missverstaendnisse aufgeklaert!";
			
			textureChecked = "icons\haken_checked.paa";		//Texture of checked CheckBox.
			textureUnchecked = "icons\haken_unchecked.paa";		//Texture of unchecked CheckBox.
			textureFocusedChecked = "icons\haken_checked.paa";	//Texture of checked focused CheckBox (Could be used for showing different texture when focused).
			textureFocusedUnchecked = "icons\haken_unchecked.paa";	//Texture of unchecked focused CheckBox.
			textureHoverChecked = "icons\haken_checked.paa";
			textureHoverUnchecked = "icons\haken_unchecked.paa";
			texturePressedChecked = "icons\haken_checked.paa";
			texturePressedUnchecked = "icons\haken_unchecked.paa";
			textureDisabledChecked = "icons\haken_checked.paa";
			textureDisabledUnchecked = "icons\haken_unchecked.paa";
		};
		class haken_richtig: Life_Checkbox
		{
			idc = 60300;
			onCheckedChanged	= "if(!fvs_hakenrichtig) then {fvs_hakenrichtig = true; systemChat localize 'STR_IDCard_check_richtig';} else {fvs_hakenrichtig = false; systemChat localize 'STR_IDCard_check_nrichtig';};";

			x = 0.324999;
			y = 0.8;
			w = 0.0375001;
			h = 0.04;
			tooltip = "$STR_IDCard_check_ttip";
			
			textureChecked = "icons\haken_checked.paa";		//Texture of checked CheckBox.
			textureUnchecked = "icons\haken_unchecked.paa";		//Texture of unchecked CheckBox.
			textureFocusedChecked = "icons\haken_checked.paa";	//Texture of checked focused CheckBox (Could be used for showing different texture when focused).
			textureFocusedUnchecked = "icons\haken_unchecked.paa";	//Texture of unchecked focused CheckBox.
			textureHoverChecked = "icons\haken_checked.paa";
			textureHoverUnchecked = "icons\haken_unchecked.paa";
			texturePressedChecked = "icons\haken_checked.paa";
			texturePressedUnchecked = "icons\haken_unchecked.paa";
			textureDisabledChecked = "icons\haken_checked.paa";
			textureDisabledUnchecked = "icons\haken_unchecked.paa";
		};
		class haken_daten: Life_Checkbox
		{
			idc = 60200;
			onCheckedChanged	= "if(!fvs_hakendaten) then {fvs_hakendaten = true; systemChat localize 'STR_IDCard_check_persAngabenOK';} else {fvs_hakendaten = false; systemChat localize 'STR_IDCard_check_persAngabenNOK';};";

			x = 0.25;
			y = 0.8;
			w = 0.0375001;
			h = 0.04;
			tooltip = "$STR_IDCard_check_persAngabenttip";
			
			textureChecked = "icons\haken_checked.paa";		//Texture of checked CheckBox.
			textureUnchecked = "icons\haken_unchecked.paa";		//Texture of unchecked CheckBox.
			textureFocusedChecked = "icons\haken_checked.paa";	//Texture of checked focused CheckBox (Could be used for showing different texture when focused).
			textureFocusedUnchecked = "icons\haken_unchecked.paa";	//Texture of unchecked focused CheckBox.
			textureHoverChecked = "icons\haken_checked.paa";
			textureHoverUnchecked = "icons\haken_unchecked.paa";
			texturePressedChecked = "icons\haken_checked.paa";
			texturePressedUnchecked = "icons\haken_unchecked.paa";
			textureDisabledChecked = "icons\haken_checked.paa";
			textureDisabledUnchecked = "icons\haken_unchecked.paa";
		};
		class haken_aendernderInfosundProfilhinweis: Life_Checkbox
		{
			idc = 60400;
			onCheckedChanged  = "if(!fvs_namenInfo) then {fvs_namenInfo = true; systemChat localize 'STR_IDCard_check_persHinweisOK';} else {fvs_namenInfo = false;systemChat localize 'STR_IDCard_check_persHinweisNOK';};";

			x = 0.400581;
			y = 0.801549;
			w = 0.0375001;
			h = 0.04;
			tooltip = "Dieser Name kann nur im Bürgerbüro geaendert werden, wenn du Zivilist bist. Solltest du dich mit der Zeit mit einem anderen Profilnamen einloggen, so wird die Mission vorerst beendet.";
			
			textureChecked = "icons\haken_checked.paa";		//Texture of checked CheckBox.
			textureUnchecked = "icons\haken_unchecked.paa";		//Texture of unchecked CheckBox.
			textureFocusedChecked = "icons\haken_checked.paa";	//Texture of checked focused CheckBox (Could be used for showing different texture when focused).
			textureFocusedUnchecked = "icons\haken_unchecked.paa";	//Texture of unchecked focused CheckBox.
			textureHoverChecked = "icons\haken_checked.paa";
			textureHoverUnchecked = "icons\haken_unchecked.paa";
			texturePressedChecked = "icons\haken_checked.paa";
			texturePressedUnchecked = "icons\haken_unchecked.paa";
			textureDisabledChecked = "icons\haken_checked.paa";
			textureDisabledUnchecked = "icons\haken_unchecked.paa";
		};
		class lb_sex: Life_RscCombo
		{
			idc = 60002;

			x = 0.162499;
			y = 0.12;
			w = 0.25;
			h = 0.04;
			tooltip = "";
			colorBackground[] = {0.3,0.3,0.3,1};
		};
		class lb_tag: Life_RscCombo
		{
			idc = 60007;

			x = 0.312499;
			y = 0.3;
			w = 0.075;
			h = 0.04;
			tooltip = "$STR_IDCard_Geburtstagttip";
			colorBackground[] = {0.3,0.3,0.3,1};
		};
		class lb_monat: Life_RscCombo
		{
			idc = 60008;

			x = 0.4;
			y = 0.3;
			w = 0.075;
			h = 0.04;
			tooltip = "$STR_IDCard_Geburtsmonatttip";
			onLBSelChanged = "[] call fvs_fnc_updateTag";
			colorBackground[] = {0.3,0.3,0.3,1};
		};
		class lb_jahr: Life_RscCombo
		{
			idc = 60009;

			x = 0.487501;
			y = 0.3;
			w = 0.1;
			h = 0.04;
			tooltip = "$STR_IDCard_Geburtsjahrttip";
			onLBSelChanged = "[] call fvs_fnc_updateMonat";
			colorBackground[] = {0.3,0.3,0.3,1};
		};
		class lb_bildID: Life_RscCombo
		{
			idc = 60017;

			x = 0.7375;
			y = 0.424;
			w = 0.225;
			h = 0.04;
			colorBackground[] = {0.3,0.3,0.3,1};
			onLBSelChanged = "[] call fvs_fnc_updatePersoBild";
		};
		class anzeige_alter: Life_RscStructuredText
		{
			idc = 60003;
			text = "";
			class Attributes				{				align = "center";			 };

			x = 0.162499;
			y = 0.18;
			w = 0.1;
			h = 0.04;
		};
		class bild_perso: Life_RscPicture
		{
			idc = 60016;
			text = "";

			x = 0.737501;
			y = 0.06;
			w = 0.225;
			h = 0.36;
		};
	};
};
class personalausweis_70000
{
	idd = 70000;
	name = "personalausweis_70000";
	movingEnabled = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground {
		class hintergrund_a: life_RscPicture
		{
			idc = -1;
			text = "textures\tablet\tablet.paa";
			x = 0.258501 * safezoneW + safezoneX;
			y = 0.0716 * safezoneH + safezoneY;
			w = 0.485625 * safezoneW;
			h = 0.854 * safezoneH;
		};
		class text_name_a: Life_RscText
		{
			idc = -1;

			text = "Name:";
			x = 0.24;
			y = 0.255;
			w = 0.125;
			h = 0.04;
			sizeEx = 0.035;
		};
	};
	class controls {
		class anzeige_spielername_a: Life_RscEdit
		{
			idc = 70001;
			text="";
			x = 0.337;
			y = 0.26;
			w = 0.412504;
			h = 0.04;
			tooltip = "Du musst deinen Profilnamen zu dem hierangegebenen Namen ändern.";
		};
		class knopf_beantragen_a: Life_RscButtonMenu
		{
			idc = 70015;
			onButtonClick="[] call fvs_fnc_persoRename_init;";
			
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};

			text = "Bestätigen";
			x = 0.428;
			y = 0.84;
			w = 0.149;
			h = 0.04;
		};
	};
};

