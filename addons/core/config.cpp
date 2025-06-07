class CfgPatches {
	class bnb_e_core {
		name = "LXII Extras - Core";
		units[] = {"bnb_e_Module_AddArsenal", "Legio_Flag"};
		weapons[] = {};
		requiredAddons[] = {
			"cba_main",
			"ace_arsenal",
			"A3_Modules_F"
		};
		author = "Legio XII";
		authors[] = {
			"D. Ford",
			"Arend",
			"FarCry"
		};
	};
};

class CfgFunctions {
	class bnb_e_core {
		class zeus_modules {
			file="\x\bnb_e\core\functions\zeus_modules";
			class addArsenal {};
		};

		class utilities {
			file="\x\bnb_e\core\functions\utilities";
			class log {};
			class strToArray {};
			class toBoolean {};
		};
	};
};

// Native Zeus module registration
class CfgFactionClasses {
	class bnb_e_core {
		displayName = "LXII - Core";
		priority = 2;
		side = 7;
	};
};

class CfgVehicles {
	class Module_F;
	class bnb_e_Module_AddArsenal : Module_F {
		scope = 2;
		displayName = "Add Filtered Arsenal";
		category = "bnb_e_core";
		function = "bnb_e_core_fnc_addArsenal";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		curatorCanAttach = 1;
	};
	class Flag_White_F; // Add this line

	class Legio_Flag : Flag_White_F {
		author = "Hex";
        scope = 2;
        displayName = "Legio XII Flag";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture (getText (configFile >> 'CfgFlags' >> 'LegioFlag' >> 'texture'))";
        };
    };
};

class CfgFlags {
    class LegioFlag {
        name = "Legio XII";
        texture = "\x\bnb_e\core\data\legio-flag.paa";
    };
};

class Extended_PreInit_EventHandlers {
	class bnb_e_core_preInit {
        init = "call compile preprocessFileLineNumbers '\x\bnb_e\core\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class bnb_e_core_postInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_e\core\XEH_postInit.sqf'";
	};
};