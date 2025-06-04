class CfgFactionClasses 
{
	class BNB_FA_LXII_Faction 
	{
		displayName = "LXII";
		side = 1;
		icon = "\LXII\extras\legio.paa";
		priority = 1;
	};
};

class CfgEditorSubcategories 
{
	class BNB_FA_LXII_SA 
	{
		displayName = "LXII (SA)";
	};
	class BNB_FA_LXII_Desert 
	{
		displayName = "LXII (Desert)";
	};
	class BNB_FA_LXII_Woodland 
	{
		displayName = "LXII (Woodland)";
	};
	class BNB_FA_LXII_Winter 
	{
		displayName = "LXII (Winter)";
	};
};

class CfgGroups 
{
	class WEST 
	{
		name="BLUFOR";
		class BNB_FA_LXII_Group
		{
		name = "2BNB LXII";
			class BNB_FA_LXII_SA 
			{
				name = "2BNB LXII (SA)";
				class BNB_FA_LXII_Section_SA_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_LXII_SA";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_SA";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_SA";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Medic_SA";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_SA";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_SA";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_SA";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_SA";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_SA";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
			class BNB_FA_LXII_Desert 
			{
				name = "2BNB LXII (Desert)";
				class BNB_FA_LXII_Section_Desert_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_LXII_Desert";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_Desert";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_Desert";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Medic_Desert";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Desert";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			};	
			class BNB_FA_LXII_Woodland 
			{
				name = "LXII (Woodland)";
				class BNB_FA_LXII_Section_Woodland_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_LXII_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_Woodland";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_Woodland";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Medic_Woodland";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Woodland";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
			class BNB_FA_LXII_Winter
			{
				name = "LXII (Winter)";
				class BNB_FA_LXII_Section_Winter_Open
				{
					name = "Section (Open/Base)";
					side = 1;
					faction = "BNB_FA_LXII_Winter";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_Winter";
            			rank="SERGEANT";
            			position[]={-10,-10,0};
          			};
					class Unit1
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_IC_Winter";
            			rank="CORPORAL";
            			position[]={5,-5,0};
          			};
					class Unit2
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Medic_Winter";
            			rank="PRIVATE";
            			position[]={-5,-5,0};
          			};
					class Unit3
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={10,-10,0};
          			};
					class Unit4
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={0,-0,0};
          			};
					class Unit5
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={15,-15,0};
          			};
					class Unit6
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={-15,-15,0};
          			};
					class Unit7
          			{
            			side=1;
            			vehicle="BNB_FA_LXII_Rifleman_Winter";
            			rank="PRIVATE";
            			position[]={20,-20,0};
          			};
				};
			
			};
		};
	};
};