class CfgPatches {
	class BNB_FA_LXII {
		// Addon identity
		name = "LXII Factions";
		author = "LXII";
		authors[] = {"FarCry (Qaiten)"};
		url = "https://discord.gg/JAQQmwHhve";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {"ace_medical_treatment","ace_hearing","ace_flashlights","ace_maptools","ace_trenches","ace_captives","ace_attach",
			"ace_explosives","ace_tagging","A3_Weapons_F"};
		units[] = {"BNB_FA_LXII_Rifleman_Woodland","BNB_FA_LXII_Medic_Woodland","BNB_FA_LXII_IC_Woodland","BNB_FA_LXII_Rifleman_Desert","BNB_FA_LXII_Medic_Desert",
			"BNB_FA_LXII_IC_Desert","BNB_FA_LXII_Rifleman_SA","BNB_FA_LXII_Medic_SA","BNB_FA_LXII_IC_SA","BNB_FA_LXII_Rifleman_Winter","BNB_FA_LXII_Medic_Winter",
			"BNB_FA_LXII_IC_Winter"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

#include "infantry\index.hpp"
#include "groups\index.hpp"