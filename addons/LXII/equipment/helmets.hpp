class Sol_Aux_Helm_4; // IC / Special Helmet
class Sol_Aux_Helm_1; //Regular Helmet
class IC_cad_kasr_helmet_green; // Kasrkin Helmet (Green)

class LXII_Helm_XII_Aux : Sol_Aux_Helm_1 {
    displayName = "LXII Helm Solar Aux";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "\SolarAuxStuff\textures\SolAux_BugEye_Helm_Base_CO.paa"
        };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "WebKnight";
};

class LXII_Helm_XII_Aux_LT : Sol_Aux_Helm_1 {
    displayName = "LXII Helm Solar Aux (LT)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\SolAux_BugEye_Helm_XIILT_CO.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_Helm_XII_Aux_SGT : Sol_Aux_Helm_1 {
    displayName = "LXII Helm Solar Aux (SGT)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\SolAux_BugEye_Helm_XIISGT_CO.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_Helm_XII_Aux_Medic : Sol_Aux_Helm_1 {
    displayName = "LXII Helm Solar Aux (Medic)";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\SolAux_BugEye_Helm_XIIMedic_CO.paa"
    };
    scope = 2; // Makes it available in Arsenal/Editor
    author = "Hex";
};

class LXII_KasrHelm_Grn : IC_cad_kasr_helmet_green {
    displayName = "LXII Kasrkin Helmet (Green)";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"\IC_cad_inf\Headgear\Data\CAD_helmet_kasr_green_co.paa"};
    scope = 2; // Makes it available in Arsenal/Editor
    author = "IC Mod";
};