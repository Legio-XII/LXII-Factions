class IC_CAD_kasr_pack_green; // Kasrkin Backpack (Green) (CABLE ATTACHMENT)
class IC_CAD_kasr_pack_green_02; // Kasrkin Backpack (Green) (NO CABLE)

class LXII_KasrPack_Grn : IC_CAD_kasr_pack_green {
    displayName = "LXII Kasrkin Backpack (Green/Cable)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\IC_CAD_inf\Backpacks\data\ic_cad_kasr_pack_green_co.paa"};
    scope = 2; // Makes it available in Arsenal/Editor
    author = "IC Mod";
};

class LXII_KasrPack_Grn_NoCable : IC_CAD_kasr_pack_green_02 {
    displayName = "LXII Kasrkin Backpack (Green)";
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\IC_CAD_inf\Backpacks\data\ic_cad_kasr_pack_green_co.paa"};
    scope = 2; // Makes it available in Arsenal/Editor
    author = "IC Mod";
};
