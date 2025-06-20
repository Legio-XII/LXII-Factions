class Uniform_Base;
class UniformItem;

// Base classes for inheritance
class IC_CAD_U_776_B;
class IC_CAD_U_776_2_B;
class IC_CAD_U_667_2_B;
class Sol_Aux_Uni_1;

// Green Uniform (uses CAD_uni_pants_XII_co.paa - IC_CAD_U_776_B)
class LXII_Uniform_XII : IC_CAD_U_776_B {
    scope = 2;
    displayName = "LXII Uniform Green";
    picture = "\IC_cad_inf\Uniform\Data\UI\icon_uniform_ca.paa";
    
    // Override the texture selections to use our custom pants
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_green_co.paa",
        "\x\bnb_fa\LXII\textures\CAD_uni_pants_XII_co.paa"
    };
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

// Green Alternate Uniform (uses CAD_uni_pants_XII2_co.paa - IC_CAD_U_776_2_B)
class LXII_Uniform_XII2 : IC_CAD_U_776_2_B {
    scope = 2;
    displayName = "LXII Uniform Green Alternate";
    picture = "\IC_cad_inf\Uniform\Data\UI\icon_uniform_ca.paa";
    
    // Override the texture selections to use our custom pants
    hiddenSelections[] = {"camo", "camo1"};
    hiddenSelectionsTextures[] = {
        "\IC_cad_inf\Uniform\Data\CAD_uniform_top_green_co.paa",
        "\x\bnb_fa\LXII\textures\CAD_uni_pants_XII2_co.paa"
    };
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII2_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

// Winter Uniform
class LXII_Uniform_XII_W : Uniform_Base {
    scope = 2;
    displayName = "LXII Uniform Winter";
    picture = "\IC_cad_inf\Uniform\Data\UI\icon_uniform_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII_W_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

// Winter Alternate Uniform
class LXII_Uniform_XII2_W : Uniform_Base {
    scope = 2;
    displayName = "LXII Uniform Winter Alternate";
    picture = "\IC_cad_inf\Uniform\Data\UI\icon_uniform_ca.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII2_W_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

class LXII_Uniform_XII_Aux : Uniform_Base {
    scope = 2;
    displayName = "LXII Uniform Solar Aux";
    picture = "\SolarAuxStuff\icons\AuxBaseIcon.paa";
    model = "\SolarAuxStuff\models\SolarAuxUni.p3d";

    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII_Aux_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

class LXII_Uniform_XII_Aux_LT : Uniform_Base {
    scope = 2;
    displayName = "LXII Uniform Solar Aux (LT)";
    picture = "\SolarAuxStuff\icons\AuxBaseIcon.paa";
    model = "\SolarAuxStuff\models\SolarAuxUni.p3d";
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII_Aux_LT_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

class LXII_Uniform_XII_Aux_SGT : Uniform_Base {
    scope = 2;
    displayName = "LXII Uniform Solar Aux (SGT)";
    picture = "\SolarAuxStuff\icons\AuxBaseIcon.paa";
    model = "\SolarAuxStuff\models\SolarAuxUni.p3d";
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_XII_Aux_SGT_F";
        containerClass = "Supply90";
        mass = 80;
    };
};

class LXII_Uniform_Kasr_XII : Uniform_Base {
    scope = 2;
    displayName = "LXII Kasrkin Uniform Green";
    picture = "\IC_cad_inf\Uniform\Data\UI\icon_uniform_ca.paa";
    model = "\IC_cad_inf\Uniform\IC_CAD_UNIFORM_02.p3d";
    
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "LXII_Soldier_Kasr_XII_F";
        containerClass = "Supply90";
        mass = 80;
    };
};