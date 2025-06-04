  class BNB_FA_LXII_Rifleman_Desert: B_Soldier_F
  {
    faction="BNB_FA_LXII_Faction";
    editorSubcategory = "BNB_FA_LXII_Desert";
    side=1;
    displayName="Rifleman Desert";
    uniformClass="IC_CAD_U_776_2_B";
    weapons[]={"ic_cad_m36_lasgun","ic_cad_laspistol","Put","Throw"};
    respawnWeapons[]={"ic_cad_m36_lasgun","ic_cad_laspistol","Put","Throw"};
    items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_morphine","ACE_morphine",
         "ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool",
         "ACE_MapTools"};
    respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_morphine","ACE_morphine",
         "ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool",
         "ACE_MapTools"};
    magazines[]={"ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext","ic_las_powerpack_ext", 
        "ic_laspistol_powerpack", "ic_laspistol_powerpack", "IC_CAD_FRAG_mag", "IC_CAD_FRAG_mag", "IC_CAD_FRAG_mag", "IC_CAD_KRAK_mag", "IC_CAD_KRAK_mag", 
        "Echo_Smoke_Grenade_Mag", "Echo_Smoke_Grenade_Mag"};
    respawnMagazines[]={"ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext",
    "ic_laspistol_powerpack","ic_laspistol_powerpack","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_KRAK_mag","IC_CAD_KRAK_mag",
    "Echo_Smoke_Grenade_Mag","Echo_Smoke_Grenade_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","IC_cad_helmet_green","IC_CAD_FlakArmor_band_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","IC_cad_helmet_green","IC_CAD_FlakArmor_band_green"};
    backpack="BNB_FA_LXII_Rifleman_Desert_pack";
  };

  class BNB_FA_LXII_Medic_Desert: B_medic_F
  {
    faction="BNB_FA_LXII_Faction";
    editorSubcategory = "BNB_FA_LXII_Desert";
    side=1;
    displayName="Medic Desert";
    uniformClass="IC_CAD_U_776_2_B";
    weapons[]={"ic_cad_m36_lasgun","ic_cad_laspistol","Put","Throw"};
    respawnWeapons[]={"ic_cad_m36_lasgun","ic_cad_laspistol","Put","Throw"};
    items[]={"ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine",
    "ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet",
    "ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools","ACE_EntrenchingTool","ACE_surgicalKit","ACE_plasmaIV",
    "ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250",
    "ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_epinephrine","ACE_epinephrine",
    "ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_morphine","ACE_morphine","ACE_morphine",
    "ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    respawnItems[]={"ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine",
    "ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_tourniquet",
    "ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_MapTools",
    "ACE_EntrenchingTool","ACE_surgicalKit","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250",
    "ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500",
    "ACE_plasmaIV_500","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine",
    "ACE_adenosine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage",
    "ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
    magazines[]={"ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext","ic_las_powerpack_ext", 
        "ic_laspistol_powerpack", "ic_laspistol_powerpack", "IC_CAD_FRAG_mag", "IC_CAD_FRAG_mag", "IC_CAD_FRAG_mag", "IC_CAD_KRAK_mag", "IC_CAD_KRAK_mag", 
        "Echo_Smoke_Grenade_Mag", "Echo_Smoke_Grenade_Mag"};
    respawnMagazines[]={"ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext",
    "ic_laspistol_powerpack","ic_laspistol_powerpack","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_KRAK_mag","IC_CAD_KRAK_mag",
    "Echo_Smoke_Grenade_Mag","Echo_Smoke_Grenade_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","IC_cad_helmet_green","IC_CAD_FlakArmor_band_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","IC_cad_helmet_green","IC_CAD_FlakArmor_band_green"};
    backpack="BNB_FA_LXII_Medic_Desert_pack";
  };

  class BNB_FA_LXII_IC_Desert: B_Soldier_SL_F
  {
    faction="BNB_FA_LXII_Faction";
    editorSubcategory = "BNB_FA_LXII_Desert";
    side=1;
    displayName="IC Desert";
    uniformClass="IC_CAD_U_776_2_B";
    weapons[]={"ic_cad_m36_lasgun","ic_cad_laspistol","Put","Throw"};
    respawnWeapons[]={"ic_cad_m36_lasgun","ic_cad_laspistol","Put","Throw"};
    items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_morphine","ACE_morphine",
         "ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool",
         "ACE_MapTools"};
    respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage",
         "ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_morphine","ACE_morphine",
         "ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EntrenchingTool",
         "ACE_MapTools"};
    magazines[]={"ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext", "ic_las_powerpack_ext","ic_las_powerpack_ext", 
        "ic_laspistol_powerpack", "ic_laspistol_powerpack", "IC_CAD_FRAG_mag", "IC_CAD_FRAG_mag", "IC_CAD_FRAG_mag", "IC_CAD_KRAK_mag", "IC_CAD_KRAK_mag", 
        "Echo_Smoke_Grenade_Mag", "Echo_Smoke_Grenade_Mag"};
    respawnMagazines[]={"ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext","ic_las_powerpack_ext",
    "ic_laspistol_powerpack","ic_laspistol_powerpack","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_FRAG_mag","IC_CAD_KRAK_mag","IC_CAD_KRAK_mag",
    "Echo_Smoke_Grenade_Mag","Echo_Smoke_Grenade_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","IC_cad_helmet_green","IC_CAD_FlakArmor_band_green"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","IC_cad_helmet_green","IC_CAD_FlakArmor_band_green"};
    backpack="BNB_FA_LXII_IC_Desert_pack";
  };


  class BNB_FA_LXII_Rifleman_Desert_pack: ic_CadianBackpackV1
  {
    scope=2;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };


  class BNB_FA_LXII_Medic_Desert_pack: ic_CadianBackpackV1
  {
    scope=2;
    class TransportMagazines{};
    class TransportItems
    {
     class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
     class _xx_ACE_plasmaIV_500 {count=15;name="ACE_plasmaIV_500";};
     class _xx_ACE_epinephrine {count=16;name="ACE_epinephrine";};
     class _xx_ACE_adenosine {count=10;name="ACE_adenosine";};
     class _xx_ACE_morphine {count=10;name="ACE_morphine";};
     class _xx_ACE_elasticBandage {count=40;name="ACE_elasticBandage";};
     class _xx_ACE_packingBandage {count=25;name="ACE_packingBandage";};
     class _xx_ACE_tourniquet {count=6;name="ACE_tourniquet";};
    };
    class TransportWeapons{};
  };

  class BNB_FA_LXII_IC_Desert_pack: ic_VoxBackpack
  {
    scope=2;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };