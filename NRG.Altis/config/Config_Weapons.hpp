/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 5000, 2500, "" },
            { "hgun_Pistol_heavy_02_F", "", 7500, 3750, "" },
            { "hgun_ACPC2_F", "", 10000, 5000, "" },
            { "hgun_PDW2000_F", "", 15000, 7500, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 100, 50, "" },
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" },
            { "9Rnd_45ACP_Mag", "", 100, 50, "" },
            { "30Rnd_9x21_Mag", "", 100, 50, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 3000, 1500, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "arifle_SDAR_F", "", 10000, 5000, "" },
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 65000, 32500, "" },
			{ "srifle_EBR_F", "", 220000, 110000, "" },
			{ "srifle_DMR_01_F", "", 180000, 90000, "" },
			{ "srifle_DMR_06_camo_F", "", 250000, 125000, "" },
			{ "srifle_dmr_03_f", "", 220000, 110000, "" },
			{ "arifle_AK12_F", "", 200000, 100000, "" },
			{ "arifle_AKM_F", "", 270000, 135000, "" },
			{ "arifle_MXC_F", "", 80000, 40000, "" },
			{ "arifle_MX_SW_F", "", 100000, 50000, "" },
			{ "arifle_MXM_F", "", 120000, 60000, "" },
			{ "arifle_Mk20_F", "", 50000, 25000, "" },
			{ "arifle_ctar_blk_f", "", 280000, 140000, "" },
			{ "arifle_SPAR_01_blk_F", "", 200000, 100000, "" }
			
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 150, 75, "" },
            { "30Rnd_65x39_caseless_green", "", 400, 200, "" },
            { "20Rnd_762x51_Mag", "", 1000, 500, "" },
			{ "10Rnd_762x54_Mag", "", 700, 350, "" },
			{ "30Rnd_762x39_Mag_F", "", 800, 400, "" },
			{ "30Rnd_65x39_caseless_mag", "", 550, 250, "" },
			{ "100Rnd_65x39_caseless_mag", "", 700, 350, "" },
			{ "30Rnd_556x45_Stanag", "", 400, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 800, 400, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3000, 1500, "" },
            { "optic_Holosight", "", 3000, 1500, "" },
			{ "muzzle_snds_m", "", 3500, 1750, "" },
			{ "muzzle_snds_b", "", 7500, 3750, "" },
			{ "muzzle_snds_l", "", 2500, 1250, "" },			
			{ "muzzle_snds_h", "", 5000, 2500, "" },
			{ "optic_Hamr", "", 4500, 2250, "" },
			{ "optic_ams", "", 25000, 12500, "" },
			{ "optic_dms", "", 15000, 7500, "" },
			{ "optic_arco", "", 7500, 3250, "" },
			{ "optic_mrco", "", 3200, 1600, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 5000, 2500, "" },
            { "hgun_Pistol_heavy_02_F", "", 7500, 3750, "" },
            { "hgun_ACPC2_F", "", 10000, 5000, "" },
			{ "smg_05_f", "", 20000, 10000, "" },
            { "hgun_PDW2000_F", "", 15000, 7500, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 100, 50, "" },
            { "6Rnd_45ACP_Cylinder", "", 100, 50, "" },
            { "9Rnd_45ACP_Mag", "", 100, 50, "" },
            { "30Rnd_9x21_Mag", "", 100, 50, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 3000, 1500, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 5000, 2500, "" },
            { "ItemGPS", "", 50, 25, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 1000, 500, "" },
			{ "ToolKit", "", 5000, 2500, "" },
            { "NVGoggles", "", 3000, 1500, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Tankstelle";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 10000, 5000, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 100, 50, "" },
            { "ItemCompass", "", 100, 50, "" },
            { "ItemWatch", "", 100, 50, "" },
            { "FirstAidKit", "", 2000, 1000, "" },
			{ "ToolKit", "", 10000, 5000, "" },
            { "NVGoggles", "", 6000, 3000, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Polizei Shop";
        side = "cop";
        conditions = "call life_coplevel < 11";
        items[] = {
            { "Binocular", "", 500, 250, "" },
            { "FirstAidKit", "", 500, 250, "" },
			{ "ToolKit", "", 500, 250, "" },
            { "NVGoggles", "", 500, 250, "" },
            { "HandGrenade_Stone", "Blendgranate", 800, 400, "" },
            { "hgun_P07_snds_F", "Taser", 1000, 500, "" },
			{ "smg_02_f", "", 5000, 2500, "" },
			{ "srifle_EBR_F", "", 40000, 20000, "" },
			{ "arifle_MXC_F", "", 10000, 5000, "" },
			{ "arifle_MX_SW_F", "", 25000, 12500, "" },
			{ "arifle_MXM_F", "", 25000, 12500, "" },
			{ "arifle_SPAR_01_blk_F", "", 15000, 7500, "" },
			{ "arifle_spar_03_blk_f", "", 30000, 15000, "" },
			{ "lmg_mk200_f", "", 30000, 15000, "" },
			{ "srifle_dmr_03_f", "", 40000, 20000, "" },
			{ "srifle_DMR_06_camo_F", "", 45000, 27500, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Tasermunition", 50, 25, "" },
            { "30Rnd_9x21_Mag", "", 100, 50, "" },
			{ "200Rnd_65x39_cased_Box", "", 500, 250, "" },
			{ "30Rnd_65x39_caseless_mag", "", 250, 125, "" },
			{ "100Rnd_65x39_caseless_mag", "", 400, 200, "" },
			{ "30Rnd_556x45_Stanag", "", 350, 175, "" },
			{ "20Rnd_762x51_Mag", "", 400, 200, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 100, 50, "" },
            { "optic_Holosight", "", 100, 50, "" },
			{ "muzzle_snds_m", "", 120, 60, "" },
			{ "muzzle_snds_b", "", 200, 100, "" },
			{ "muzzle_snds_l", "", 100, 50, "" },			
			{ "muzzle_snds_h", "", 150, 125, "" },
			{ "optic_Hamr", "", 200, 100, "" },
			{ "optic_ams", "", 800, 400, "" },
			{ "optic_dms", "", 350, 175, "" },
			{ "optic_arco", "", 250, 125, "" },
			{ "optic_mrco", "", 120, 60, "" },
            { "acc_flashlight", "", 50, 25, "" }
        };
    };
	class cop_basic_fbi {
        name = "FBI Shop";
        side = "cop";
        conditions = "(call life_coplevel >= 11) && (call life_coplevel < 14)";
		items[] = {
            { "Binocular", "", 500, 250, "" },
            { "FirstAidKit", "", 500, 250, "" },
			{ "ToolKit", "", 500, 250, "" },
            { "NVGoggles", "", 500, 250, "" },
            { "HandGrenade_Stone", "Blendgranate", 800, 400, "" },
            { "hgun_P07_snds_F", "Taser", 1000, 500, "" },
			{ "smg_02_f", "", 5000, 2500, "" },
			{ "srifle_EBR_F", "", 40000, 20000, "" },
			{ "arifle_MXC_F", "", 10000, 5000, "" },
			{ "arifle_MX_SW_F", "", 25000, 12500, "" },
			{ "arifle_MXM_F", "", 25000, 12500, "" },
			{ "arifle_SPAR_01_blk_F", "", 15000, 7500, "" },
			{ "arifle_spar_03_blk_f", "", 30000, 15000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "Tasermunition", 50, 25, "" },
            { "30Rnd_9x21_Mag", "", 100, 50, "" },
			{ "30Rnd_65x39_caseless_mag", "", 250, 125, "" },
			{ "100Rnd_65x39_caseless_mag", "", 400, 200, "" },
			{ "30Rnd_556x45_Stanag", "", 350, 175, "" },
			{ "20Rnd_762x51_Mag", "", 400, 200, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 100, 50, "" },
            { "optic_Holosight", "", 100, 50, "" },
			{ "muzzle_snds_m", "", 120, 60, "" },
			{ "muzzle_snds_b", "", 200, 100, "" },
			{ "muzzle_snds_l", "", 100, 50, "" },			
			{ "muzzle_snds_h", "", 150, 125, "" },
			{ "optic_Hamr", "", 200, 100, "" },
			{ "optic_ams", "", 800, 400, "" },
			{ "optic_dms", "", 350, 175, "" },
			{ "optic_arco", "", 250, 125, "" },
			{ "optic_mrco", "", 120, 60, "" },
            { "acc_flashlight", "", 50, 25, "" }
		};
    };
	class cop_basic_sol {
        name = "US Army Shop";
        side = "cop";
        conditions = "call life_coplevel >= 14";
        items[] = {
            { "Binocular", "", 500, 250, "" },
            { "FirstAidKit", "", 500, 250, "" },
			{ "ToolKit", "", 500, 250, "" },
            { "NVGoggles", "", 500, 250, "" },
            { "HandGrenade_Stone", "Blendgranate", 800, 400, "" },
			{ "smg_05_f", "", 5000, 2500, "" },
			{ "srifle_EBR_F", "", 40000, 20000, "" },
			{ "arifle_Katiba_F", "", 10000, 5000, "" },
			{ "arifle_MX_SW_F", "", 25000, 12500, "" },
			{ "arifle_MXM_F", "", 25000, 12500, "" },
			{ "arifle_ctar_blk_f", "", 15000, 7500, "" },
			{ "arifle_spar_03_blk_f", "", 30000, 15000, "" },
			{ "lmg_mk200_f", "", 30000, 15000, "" },
			{ "srifle_dmr_03_f", "", 40000, 20000, "" },
			{ "srifle_DMR_06_camo_F", "", 45000, 27500, "" }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 100, 50, "" },
			{ "200Rnd_65x39_cased_Box", "", 500, 250, "" },
			{ "30Rnd_65x39_caseless_mag", "", 250, 125, "" },
			{ "30Rnd_65x39_caseless_green", "", 250, 125, "" },
			{ "100Rnd_65x39_caseless_mag", "", 400, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 350, 175, "" },
			{ "30Rnd_556x45_Stanag", "", 350, 175, "" },
			{ "20Rnd_762x51_Mag", "", 400, 200, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 100, 50, "" },
            { "optic_Holosight", "", 100, 50, "" },
			{ "muzzle_snds_m", "", 120, 60, "" },
			{ "muzzle_snds_b", "", 200, 100, "" },
			{ "muzzle_snds_l", "", 100, 50, "" },			
			{ "muzzle_snds_h", "", 150, 125, "" },
			{ "optic_Hamr", "", 200, 100, "" },
			{ "optic_ams", "", 800, 400, "" },
			{ "optic_dms", "", 350, 175, "" },
			{ "optic_arco", "", 250, 125, "" },
			{ "optic_mrco", "", 120, 60, "" },
            { "acc_flashlight", "", 50, 25, "" }
		};
    };

    //Medic Shops
    class med_basic {
        name = "THW Shop";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 100, 50, "" },
            { "FirstAidKit", "", 100, 50, "" },
			{ "ToolKit", "", 100, 50, "" },
            { "NVGoggles", "", 100, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
