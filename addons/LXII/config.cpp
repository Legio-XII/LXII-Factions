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
			"BNB_FA_LXII_IC_Winter", "BNB_FA_LXII_Rifleman_PT","BNB_FA_LXII_Medic_PT","BNB_FA_LXII_IC_PT","BNB_FA_LXII_Rifleman_TSC","BNB_FA_LXII_Medic_TSC",
            "BNB_FA_LXII_IC_TSC","BNB_FA_LXII_Crewman_Woodland","BNB_FA_LXII_Crewman_Desert","BNB_FA_LXII_Crewman_Winter","IC_Taurox_HS_SL_empty",
            "IC_Taurox_HS_SL_PT_empty","TIOW_ValhallanChimAuto_Brown_empty","TIOW_CadianChimAuto_776_empty","TIOW_ValhallanChimAuto_White_Custom", "IC_Taurox_AutoCannon_empty",
            "IC_Taurox_BattleCannon_empty","IC_Taurox_GatlingGun_empty"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgVehicles {
    // Reference original classes
    class IC_Taurox_HS_SL;
    class TIOW_ValhallanChimAuto_Brown;
    class TIOW_CadianChimAuto_776;
    class TIOW_ValhallanChimAuto_White;
    class IC_Taurox_AutoCannon;
    class IC_Taurox_BattleCannon;
    class IC_Taurox_GatlingGun;

    // Empty variants
    class IC_Taurox_HS_SL_empty : IC_Taurox_HS_SL {
        displayName = "Taurox HS (Empty)";
        crew = "BNB_FA_LXII_Rifleman_SA";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class IC_Taurox_HS_SL_PT_empty : IC_Taurox_HS_SL {
        displayName = "Taurox HS (Empty)";
        crew = "BNB_FA_LXII_Rifleman_PT";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class TIOW_ValhallanChimAuto_Brown_empty : TIOW_ValhallanChimAuto_Brown {
        displayName = "Valhallan Chimera (Brown, Empty)";
        crew = "BNB_FA_LXII_Crewman_Desert";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class TIOW_CadianChimAuto_776_empty : TIOW_CadianChimAuto_776 {
        displayName = "Cadian Chimera (776, Empty)";
        crew = "BNB_FA_LXII_Crewman_Woodland";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class TIOW_ValhallanChimAuto_White_Custom : TIOW_ValhallanChimAuto_White {
        displayName = "Valhallan Chimera (White, Empty)";
        crew = "BNB_FA_LXII_Crewman_Winter";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class IC_Taurox_AutoCannon_empty : IC_Taurox_AutoCannon {
        displayName = "Taurox AutoCannon (Empty)";
        crew = "BNB_FA_LXII_Rifleman_TSC";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class IC_Taurox_BattleCannon_empty : IC_Taurox_BattleCannon {
        displayName = "Taurox BattleCannon (Empty)";
        crew = "BNB_FA_LXII_Rifleman_TSC";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
    class IC_Taurox_GatlingGun_empty : IC_Taurox_GatlingGun {
        displayName = "Taurox GatlingGun (Empty)";
        crew = "BNB_FA_LXII_Rifleman_TSC";
        typicalCargo[] = {};
        scope = 2;
        scopeCurator = 2;
    };
};

#include "infantry\index.hpp"
#include "groups\index.hpp"