// Original Referenced Classes
class IC_CAD_FlakArmor_band_green; // Guardsmen Flak Armour (Green) Bandolier
class IC_CAD_FlakArmor_band_white; // Guardsmen Flak Armour (White) Bandolier
class Sol_Aux_Vest_5; // Solar Aux Vest
class IC_CAD_KasrArmor_green; //Kasrkin Armour (Green)

class LXII_FlakArmor_LT_Grn : IC_CAD_FlakArmor_band_green {
    displayName = "LXII Flak Armor Green (LT)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XII_LT_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_SGT_Grn : IC_CAD_FlakArmor_band_green {
    displayName = "LXII Flak Armor Green (SGT)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XII_SGT_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_CPL_Grn : IC_CAD_FlakArmor_band_green {
    displayName = "LXII Flak Armor Green (CPL)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XII_CPL_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_Medic_Grn : IC_CAD_FlakArmor_band_green {
    displayName = "LXII Flak Armor Green (Medic)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XII_Medic_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_Grn : IC_CAD_FlakArmor_band_green {
    displayName = "LXII Flak Armor Green";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XII_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_LT_W : IC_CAD_FlakArmor_band_white {
    displayName = "LXII Flak Armor White (LT)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XIIWinterLT_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_SGT_W : IC_CAD_FlakArmor_band_white {
    displayName = "LXII Flak Armor White (SGT)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XIIWinterSGT_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_CPL_W : IC_CAD_FlakArmor_band_white {
    displayName = "LXII Flak Armor White (CPL)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XIIWinterCPL_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_Medic_W : IC_CAD_FlakArmor_band_white {
    displayName = "LXII Flak Armor White (Medic)";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XIIWinterMedic_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_FlakArmor_W : IC_CAD_FlakArmor_band_white {
    displayName = "LXII Flak Armor White";
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "x\bnb_fa\LXII\textures\CAD_flakarmor_XIIWinter_co.paa",
        "\IC_cad_inf\Vest\Data\bandolier_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_Vest_XII_Aux : Sol_Aux_Vest_5 {
    displayName = "LXII Vest Solar Aux";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\SolarAuxStuff\textures\SolAux_AuxArmor_Jupiter3_Aux_CO.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "WebKnight";
};

class LXII_Vest_XII_Aux_LT : Sol_Aux_Vest_5 {
    displayName = "LXII Vest Solar Aux (LT)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\Veletari_Vest_XIILT_CO.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_Vest_XII_Aux_SGT : Sol_Aux_Vest_5 {
    displayName = "LXII Vest Solar Aux (SGT)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\Veletari_Vest_XIISGT_CO.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_KasrArmor_Grn : IC_CAD_KasrArmor_green {
    displayName = "LXII Kasrkin Armor (Green)";
    hiddenSelections[] = {"Camo","camo1","camo2","CamoB"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Vest\Data\CAD_vest_co.paa",
        "\IC_cad_inf\Vest\Data\CAD_KasrArmor2_green_co.paa",
        "\IC_cad_inf\Vest\Data\CAD_kasrarmor_green_co.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "IC Mod";
};
