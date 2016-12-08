#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Loudless

    Description:
    Edited usual script
*/

switch (playerSide) do {
    case civilian: {
    
    };

    case west: {
		(unitBackpack player) setObjectTextureGlobal [0,""];
		
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\human\cop\rekrut.jpg"];
        };
		if ((FETCH_CONST(life_coplevel) <= 10) && (uniform player isEqualTo "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\human\cop\polizei_uniform.jpg"];
        };
		if (uniform player isEqualTo "U_B_SpecopsUniform_sgg") then {
            player setObjectTextureGlobal [0, "textures\human\cop\polizei2.jpg"];
        };
		if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest") then {
            player setObjectTextureGlobal [0, "textures\human\cop\fbi_uniform.paa"];
        };
		if ((FETCH_CONST(life_coplevel) > 10) && (FETCH_CONST(life_coplevel) < 14) && (uniform player isEqualTo "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\human\cop\fbi_beamter.jpg"];
        };
		if ((FETCH_CONST(life_coplevel) > 13) && (FETCH_CONST(life_coplevel) < 15) && (uniform player isEqualTo "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\human\cop\soldier.jpg"];
        };
		if ((FETCH_CONST(life_coplevel) > 14) && (uniform player isEqualTo "U_B_CombatUniform_mcam_worn")) then {
            player setObjectTextureGlobal [0, "textures\human\cop\soldier_2.jpg"];
        };
		if ((FETCH_CONST(life_coplevel) > 14) && (uniform player isEqualTo "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\human\cop\soldier_3.jpg"];
        };
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
    };
};
