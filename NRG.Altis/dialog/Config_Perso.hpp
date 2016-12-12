/*
	Konfig für Perso	
*/
class Personalausweis {
	//Geschlecht = Staatsbürgerschaft
	geschlecht[] = {"Deutsch","Amerikanisch"};
	// Geburtsjahre von-bis # year of birth from-to
	// Wird mit dem Missionsdatum gegengerechnet # would be calculate with mission date
	jahre[] = {1950,2015};
	// Polizeimarke o. Logo (Pfad) # police badge destination
	logoWest = "#(rgb,8,8,3)color(0.07,0.06,0.83,0.5)";
	// Sanitäter-Logo (Pfad) # medical badge destination
	logoIndep = "#(rgb,8,8,3)color(0,0.93,0.05,0.5)";
	// Zivilisten-Logo (Pfad), ja Farben können angegeben werden # civilian badge destination, yes you can use color
	logoCiv = "#(rgb,8,8,3)color(0.49,0.06,0.44,0.5)";
	// Opfor-Logo (Pfad)/Unbekannte Fraktion # opfor badge destination/unkown side
	logoUnkn = "#(ai,64,64,1)Fresnel(0.3,3)";
	// Vorhandene Gesichter # some faces
	class persoBild
	{
		class 1
		{
			id = 1;
			name = "Bayh";
			pfad = "textures\persobilder\Bayh.jpg";
		};
		class 2
		{
			id = 4;
			name = "Campbell";
			pfad = "textures\persobilder\Campbell.jpg";
		};
		class 3
		{
			id = 10;
			name = "Doukas";
			pfad = "textures\persobilder\Doukas.jpg";
		};
		class 4
		{
			id = 11;
			name = "Gikas";
			pfad = "textures\persobilder\Gikas.jpg";
		};
		class 5
		{
			id = 12;
			name = "Halliwell";
			pfad = "textures\persobilder\Halliwell.jpg";
		};
		class 6
		{
			id = 21;
			name = "O Conner";
			pfad = "textures\persobilder\O_Conner.jpg";
		};
		class 7
		{
			id = 23;
			name = "Reed";
			pfad = "textures\persobilder\Reed.jpg";
		};
		class 8
		{
			id = 24;
			name = "Santorum";
			pfad = "textures\persobilder\Santorum.jpg";
		};
		class 9
		{
			id = 25;
			name = "Savalas";
			pfad = "textures\persobilder\Savalas.jpg";
		};
		class 10
		{
			id = 29;
			name = "Williams";
			pfad = "textures\persobilder\Williams.jpg";
		};
	};
};