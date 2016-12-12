/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
	class einbuergerung {
		variable = "einbuergerung";
		displayName = "STR_Deutscher";
		price = 1000000;
		illegal = false;
		side = "civ";
	};
	class einbuergerung_us {
		variable = "einbuergerung_us";
		displayName = "STR_Amerikaner";
		price = 1000000;
		illegal = false;
		side = "civ";
	};
	class jagd {
		variable = "jagd";
		displayName = "STR_Jagd";
		price = 10000;
		illegal = false;
		side = "civ";
	};
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 2000;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 2000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 5000;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 1500;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 100000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 30000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_License_Salt";
        price = 15000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_License_Sand";
        price = 15000;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 20000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 75000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 60000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 50000;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 1000000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 3500;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 2000;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 3500;
        illegal = false;
        side = "med";
    };
};
