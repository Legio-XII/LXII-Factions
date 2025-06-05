["LXII Modules", "Add Filtered Arsenal",
{
	// Array of position AGLS, ObjNull or the object under the module as it's placed
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	[_position, _objectUnderCursor] call bnb_e_core_fnc_addArsenal;
}];

private _bnb_e_settings = [
	[
		"bnb_e_debug",
		"CHECKBOX",
		["Enable Debug", "Tick enable LXII debug messages to appear in RPT and systemChat"],
		"LXII Utilities",
		false
	],
	[
		"bnb_e_arsenal_objects",
		"EDITBOX",
		["Arsenal Objects", "Classnames, separated by commas and without double quotations, of objects that are spawnable by ""Add Filtered Arsenal"" module"],
		["LXII Zeus", "Arsenal"],
		"C_supplyCrate_F,B_Slingload_01_Ammo_F"
	]
];