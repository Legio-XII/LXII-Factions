class CfgFactionClasses 
{
    class BNB_FA_LXII_Faction 
    {
        displayName = "LXII - Factions";
        side = 1;
        scope = 2;
        icon = "\LXII\extras\legio.paa";
        priority = 1;
    };
};

class CfgEditorSubcategories 
{
    class BNB_FA_LXII_SA { displayName = "Solar Auxilia"; };
    class BNB_FA_LXII_Desert { displayName = "Guardsmen Desert"; };
    class BNB_FA_LXII_Woodland { displayName = "Guardsmen Woodland"; };
    class BNB_FA_LXII_Winter { displayName = "Guardsmen Winter"; };
    class BNB_FA_LXII_TSC { displayName = "Tempestus Scions"; };
    class BNB_FA_LXII_PT { displayName = "Praetorian Guard"; };
};

class CfgGroups 
{
    class WEST 
    {
        name = "BLUFOR";
        class BNB_FA_LXII_Group
        {
            name = "LXII - Factions";

            class BNB_FA_LXII_SA 
            {
                name = "Solar Auxilia";
                class BNB_FA_LXII_Section_SA_Open
                {
                    name = "Section (Base)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_SA";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_SA"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_SA"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_SA"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={20,-20,0}; };
                };
                class BNB_FA_LXII_SA_Mech
                {
                    name = "Section (Mechanised)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_SA";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_SA"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_SA"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_SA"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="IC_Taurox_HS_SL_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Rifleman_SA"; rank="PRIVATE"; position[]={0,0,0}; };
                };
            };
            class BNB_FA_LXII_Desert 
            {
                name = "Guardsmen (Desert)";
                class BNB_FA_LXII_Section_Desert_Open
                {
                    name = "Section (Base)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_Desert";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_Desert"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_Desert"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_Desert"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={20,-20,0}; };
                };
                class BNB_FA_LXII_Desert_Mech
                {
                    name = "Section (Mechanised)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_Desert";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_Desert"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_Desert"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_Desert"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_Desert"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="TIOW_ValhallanChimAuto_Brown_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Crewman_Desert"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Crewman_Desert"; rank="PRIVATE"; position[]={0,0,0}; };
                };
            };
            class BNB_FA_LXII_PT 
            {
                name = "Praetorians";
                class BNB_FA_LXII_Section_PT_Open
                {
                    name = "Section (Base)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_PT";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_PT"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_PT"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_PT"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={20,-20,0}; };
                };
                class BNB_FA_LXII_PT_Mech
                {
                    name = "Section (Mechanised)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_PT";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_PT"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_PT"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_PT"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="IC_Taurox_HS_SL_PT_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Rifleman_PT"; rank="PRIVATE"; position[]={0,0,0}; };
                };
            };
            class BNB_FA_LXII_TSC 
            {
                name = "Tempestus Scions";
                class BNB_FA_LXII_Section_TSC_Open
                {
                    name = "Section (Base)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_TSC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_TSC"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={20,-20,0}; };
                };
                class BNB_FA_LXII_TSC_Mech_AC
                {
                    name = "Section (Mechanised / AutoCannon)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_TSC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_TSC"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="IC_Taurox_AutoCannon_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,0,0}; };
                };
                class BNB_FA_LXII_TSC_Mech_BC
                {
                    name = "Section (Mechanised / BattleCannon)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_TSC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_TSC"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="IC_Taurox_BattleCannon_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,0,0}; };
                };
                class BNB_FA_LXII_TSC_Mech_GG
                {
                    name = "Section (Mechanised / Gatling)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_TSC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_TSC"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_TSC"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="IC_Taurox_GatlingGun_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Rifleman_TSC"; rank="PRIVATE"; position[]={0,0,0}; };
                };
            };
            class BNB_FA_LXII_Woodland
            {
                name = "Guardsmen (Woodland)";
                class BNB_FA_LXII_Section_Woodland_Open
                {
                    name = "Section (Base)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_Woodland"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_Woodland"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_Woodland"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={20,-20,0}; };
                };
                class BNB_FA_LXII_Woodland_Mech
                {
                    name = "Section (Mechanised)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_Woodland";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_Woodland"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_Woodland"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_Woodland"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_Woodland"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="TIOW_CadianChimAuto_776_empty"; rank="PRIVATE"; position[]={0,-30,0}; };
                    class Unit9 { side=1; vehicle="BNB_FA_LXII_Crewman_Woodland"; rank="PRIVATE"; position[]={0,0,0}; };
                    class Unit10 { side=1; vehicle="BNB_FA_LXII_Crewman_Woodland"; rank="PRIVATE"; position[]={0,0,0}; };
                };
            };
            class BNB_FA_LXII_Winter
            {
                name = "Guardsmen (Winter)";
                class BNB_FA_LXII_Section_Winter_Open
                {
                    name = "Section (Base)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_Winter";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_Winter"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_Winter"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_Winter"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={20,-20,0}; };
                };
                class BNB_FA_LXII_Winter_Mech
                {
                    name = "Section (Mechanised)";
                    side = 1;
                    scope = 2;
                    scopeCurator = 2;
                    faction = "BNB_FA_LXII_Winter";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    class Unit0 { side=1; vehicle="BNB_FA_LXII_IC_Winter"; rank="SERGEANT"; position[]={-10,-10,0}; };
                    class Unit1 { side=1; vehicle="BNB_FA_LXII_IC_Winter"; rank="CORPORAL"; position[]={5,-5,0}; };
                    class Unit2 { side=1; vehicle="BNB_FA_LXII_Medic_Winter"; rank="PRIVATE"; position[]={-5,-5,0}; };
                    class Unit3 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={10,-10,0}; };
                    class Unit4 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={0,-0,0}; };
                    class Unit5 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={15,-15,0}; };
                    class Unit6 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={-15,-15,0}; };
                    class Unit7 { side=1; vehicle="BNB_FA_LXII_Rifleman_Winter"; rank="PRIVATE"; position[]={20,-20,0}; };
                    class Unit8 { side=1; vehicle="TIOW_ValhallanChimAuto_White_Custom"; rank="PRIVATE"; position[]={0,-30,0}; };
                    // class Unit9 { side=1; vehicle="BNB_FA_LXII_Crewman_Winter"; rank="PRIVATE"; position[]={0,0,0}; };
                    // class Unit10 { side=1; vehicle="BNB_FA_LXII_Crewman_Winter"; rank="PRIVATE"; position[]={0,0,0}; };
                };
            };
        };
    };
};