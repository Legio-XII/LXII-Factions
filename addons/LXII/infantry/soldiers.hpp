class B_Soldier_base_F;

// Reference IC soldier classes
class IC_CAD_Soldier_776_B;
class IC_CAD_Soldier_776_2_B;
class Sol_Aux_Soldier_Uni_1;

// Green Soldier
class LXII_Soldier_XII_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Green Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII";
    model = "\IC_cad_inf\Uniform\IC_CAD_UNIFORM.p3d";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_green_co.paa",
        "\x\bnb_fa\LXII\textures\CAD_uni_pants_XII_co.paa"
    };
};

// Green Alternate Soldier
class LXII_Soldier_XII2_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Green Alternate Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII2";
    model = "\IC_cad_inf\Uniform\IC_CAD_UNIFORM_02.p3d";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_green_co.paa",
        "\x\bnb_fa\LXII\textures\CAD_uni_pants_XII2_co.paa"
    };
};

// Winter Soldier
class LXII_Soldier_XII_W_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Winter Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII_W";
    model = "\IC_cad_inf\Uniform\IC_CAD_UNIFORM.p3d";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_white_co.paa",
        "\x\bnb_fa\LXII\textures\CAD_uni_pants_XII_co.paa"
    };
};

// Winter Alternate Soldier
class LXII_Soldier_XII2_W_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Winter Alternate Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII2_W";
    model = "\IC_cad_inf\Uniform\IC_CAD_UNIFORM_02.p3d";
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_white_co.paa",
        "\x\bnb_fa\LXII\textures\CAD_uni_pants_XII2_co.paa"
    };
}; 

class LXII_Soldier_XII_Aux_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Solar Aux Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII_Aux";
    model = "\SolarAuxStuff\models\SolarAuxUni.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {
        "SolarAuxStuff\textures\Aux_Uni_63_CO.paa"
    };
};

class LXII_Soldier_XII_Aux_LT_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Solar Aux (LT) Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII_Aux_LT";
    model = "\SolarAuxStuff\models\SolarAuxUni.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\Aux_Uni_XIILT_CO.paa"
    };
};

class LXII_Soldier_XII_Aux_SGT_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Solar Aux (SGT) Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_XII_Aux_SGT";
    model = "\SolarAuxStuff\models\SolarAuxUni.p3d";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {
        "x\bnb_fa\LXII\textures\Aux_Uni_XIISGT_CO.paa"
    };
};

class LXII_Soldier_Kasr_XII_F : B_Soldier_base_F {
    scope = 1;
    displayName = "LXII Kasrkin Soldier";
    nakedUniform = "U_BasicBody";
    uniformClass = "LXII_Uniform_Kasr_XII";
    model = "\IC_cad_inf\Uniform\IC_CAD_UNIFORM_02.p3d";
    hiddenSelections[] = {"camo1","camo"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uni_pants_beige_co.paa",
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_beige_co.paa"
    };
};