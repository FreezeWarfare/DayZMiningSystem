////////////////////////////////////////////////////////////////////
//DeRap: 4_world\freezenodes_config\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jun 03 06:19:49 2024 : 'file' last modified on Sun Jun 02 01:06:37 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class FreezeMining_config
	{
		units[] = {"FreezeFurnace","FreezeAnvil","FreezeGrindingStone","FreezeAnvil_Static","FreezeGrindingStone_Static","FreezeFurnace_Static","FreezeGem_Base","FreezeGem_Amethyst","FreezeGem_Amethyst_Cut","FreezeGem_Jade","FreezeGem_Jade_Cut","FreezeGem_Turquoise","FreezeGem_Turquoise_Cut","FreezeGem_Ruby","FreezeGem_Iolite","FreezeGem_FancyColourDiamond","FreezeGem_Aquamarine","FreezeGem_Amber","FreezeGem_Amber_Cut","FreezeGem_Aquamarine_Cut","FreezeGem_FancyColourDiamond_Cut","FreezeGem_Iolite_Cut","FreezeGem_Ruby_Cut","FreezeNugget_base","Freezestone_base","FreezeBar_base","FreezeNode_copper","FreezeNode_gold","FreezeNode_iron","FreezeNode_silver","FreezeNode_tin","FreezeNode_stone","FreezeNode_uranium","FreezeNode_sulphur","FreezeNode_AmberGemNode","FreezeNode_AmethystGemNode","FreezeNode_AquamarineGemNode","FreezeNode_FancyColourDiamondGemNode","FreezeNode_IoliteGemNode","FreezeNode_JadeGemNode","FreezeNode_RubyGemNode","FreezeNode_TurquoiseGemNode","FreezeBar_copper","FreezeBar_gold","FreezeBar_iron","FreezeBar_silver","FreezeBar_tin","FreezeBar_uranium","FreezeBar_Adamantite","FreezeBar_Enchanted","FreezeBar_Cobalt","FreezeBar_Crimant","FreezeBar_Eridium","Freezestone_copper","Freezestone_tin","Freezestone_silver","Freezestone_iron","Freezestone_gold","Freezestone_uranium","Freezestone_sulphur","FreezeNugget_uranium","FreezeNugget_tin","FreezeNugget_silver","FreezeNugget_iron","FreezeNugget_copper","FreezeNugget_gold","FreezeRef_Sulphur","FreezePowder_Sulphur"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Consumables"};
	};
};
class CfgSounds
{
	sounds[] = {};
	class FreezeFurnace_On
	{
		name = "FreezeFurnace_On";
		sound[] = {"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezeminefiresound.ogg",1,1};
		titles[] = {};
	};
	class FreezeFurnace_Off
	{
		name = "FreezeFurnace_Off";
		sound[] = {"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezeminefiresound.ogg",1,1};
		titles[] = {};
	};
};
class CfgSoundShaders
{
	class FreezeFurnace_On_SoundShader
	{
		samples[] = {{"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezeminefiresound.ogg",1}};
		volume = 1;
		range = 30;
		rangeCurve = "linear";
	};
	class FreezeFurnace_Off_SoundShader
	{
		samples[] = {{"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezeminefiresound.ogg",1}};
		volume = 1;
		range = 30;
		rangeCurve = "linear";
	};
	class FreezeAnvil_On_SoundShader
	{
		samples[] = {{"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezemineanvilsound.ogg",1}};
		volume = 1;
		range = 45;
		rangeCurve = "linear";
	};
	class FreezeAnvil_Off_SoundShader
	{
		samples[] = {{"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezemineanvilsound.ogg",1}};
		volume = 1;
		range = 45;
		rangeCurve = "linear";
	};
	class FreezeGrindingStone_On_SoundShader
	{
		samples[] = {{"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezeminegrindstone.ogg",1}};
		volume = 1;
		range = 25;
		rangeCurve = "linear";
	};
	class FreezeGrindingStone_Off_SoundShader
	{
		samples[] = {{"\MrfreezeMiningSystem\4_world\freezenodes_config\sounds\freezeminegrindstone.ogg",1}};
		volume = 1;
		range = 25;
		rangeCurve = "linear";
	};
};
class CfgSoundSets
{
	class FreezeFurnace_On_SoundSet
	{
		soundShaders[] = {"FreezeFurnace_On_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		distanceFilter = "defaultDistanceFilter";
	};
	class FreezeFurnace_Off_SoundSet
	{
		soundShaders[] = {"FreezeFurnace_Off_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "defaultDistanceFilter";
	};
	class FreezeAnvil_On_SoundSet
	{
		soundShaders[] = {"FreezeAnvil_On_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		distanceFilter = "defaultDistanceFilter";
	};
	class FreezeAnvil_Off_SoundSet
	{
		soundShaders[] = {"FreezeAnvil_Off_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "defaultDistanceFilter";
	};
	class FreezeGrindingStone_On_SoundSet
	{
		soundShaders[] = {"FreezeGrindingStone_On_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 1;
		distanceFilter = "defaultDistanceFilter";
	};
	class FreezeGrindingStone_Off_SoundSet
	{
		soundShaders[] = {"FreezeGrindingStone_Off_SoundShader"};
		volumeFactor = 1;
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "defaultDistanceFilter";
	};
};
class CfgSlots
{
	class Slot_Freezestone_base
	{
		name = "Freezestone_base";
		displayName = "base";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_base1
	{
		name = "Freezestone_base1";
		displayName = "base1";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_base2
	{
		name = "Freezestone_base2";
		displayName = "base2";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_base3
	{
		name = "Freezestone_base3";
		displayName = "base3";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_copper
	{
		name = "Freezestone_copper";
		displayName = "#STR_Freezestone_copper";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_copper1
	{
		name = "Freezestone_copper1";
		displayName = "#STR_Freezestone_copper";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_copper2
	{
		name = "Freezestone_copper2";
		displayName = "#STR_Freezestone_copper";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_copper3
	{
		name = "Freezestone_copper3";
		displayName = "#STR_Freezestone_copper";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_FreezeIngot_copper
	{
		name = "FreezeNugget_copper";
		displayName = "#STR_FreezeNugget_copper";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_silver
	{
		name = "Freezestone_silver";
		displayName = "#STR_Freezestone_silver";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_silver1
	{
		name = "Freezestone_silver1";
		displayName = "#STR_Freezestone_silver";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_silver2
	{
		name = "Freezestone_silver2";
		displayName = "#STR_Freezestone_silver";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_silver3
	{
		name = "Freezestone_silver3";
		displayName = "#STR_Freezestone_silver";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_gold
	{
		name = "Freezestone_gold";
		displayName = "#STR_Freezestone_gold";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_gold1
	{
		name = "Freezestone_gold1";
		displayName = "#STR_Freezestone_gold";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_gold2
	{
		name = "Freezestone_gold2";
		displayName = "#STR_Freezestone_gold";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_gold3
	{
		name = "Freezestone_gold3";
		displayName = "#STR_Freezestone_gold";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_iron
	{
		name = "Freezestone_iron";
		displayName = "#STR_Freezestone_iron";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_iron1
	{
		name = "Freezestone_iron1";
		displayName = "#STR_Freezestone_iron";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_iron2
	{
		name = "Freezestone_iron2";
		displayName = "#STR_Freezestone_iron";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_iron3
	{
		name = "Freezestone_iron3";
		displayName = "#STR_Freezestone_iron";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_tin
	{
		name = "Freezestone_tin";
		displayName = "#STR_Freezestone_tin";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_tin1
	{
		name = "Freezestone_tin1";
		displayName = "#STR_Freezestone_tin";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_tin2
	{
		name = "Freezestone_tin2";
		displayName = "#STR_Freezestone_tin";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_tin3
	{
		name = "Freezestone_tin3";
		displayName = "#STR_Freezestone_tin";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_uranium
	{
		name = "Freezestone_uranium";
		displayName = "#STR_FreezeBar_uranium";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_uranium1
	{
		name = "Freezestone_uranium1";
		displayName = "#STR_FreezeBar_uranium";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_uranium2
	{
		name = "Freezestone_uranium2";
		displayName = "#STR_FreezeBar_uranium";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_uranium3
	{
		name = "Freezestone_uranium3";
		displayName = "#STR_FreezeBar_uranium";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_sulphur
	{
		name = "Freezestone_sulphur";
		displayName = "#STR_FreezePowder_Sulphur";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_sulphur1
	{
		name = "Freezestone_sulphur1";
		displayName = "#STR_FreezePowder_Sulphur";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_sulphur2
	{
		name = "Freezestone_sulphur2";
		displayName = "#STR_FreezePowder_Sulphur";
		ghostIcon = "stones";
		show = "true";
	};
	class Slot_Freezestone_sulphur3
	{
		name = "Freezestone_sulphur3";
		displayName = "#STR_FreezePowder_Sulphur";
		ghostIcon = "stones";
		show = "true";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class FreezeNode_copper: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Copper\copperore.p3d";
	};
	class FreezeNode_sulphur: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Sulphur\sulphurore.p3d";
	};
	class FreezeNode_gold: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Gold\goldore.p3d";
	};
	class FreezeNode_iron: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Iron\ironore.p3d";
	};
	class FreezeNode_silver: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Silver\silverore.p3d";
	};
	class FreezeNode_tin: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Tin\tinore.p3d";
	};
	class FreezeNode_stone: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Stone\stoneore.p3d";
	};
	class FreezeNode_uranium: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Uranium\Uraniumore.p3d";
	};
	class FreezeNode_AmberGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemAmber.p3d";
	};
	class FreezeNode_AmethystGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemAmethyst.p3d";
	};
	class FreezeNode_AquamarineGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemAquamrine.p3d";
	};
	class FreezeNode_FancyColourDiamondGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemFancyColourDimond.p3d";
	};
	class FreezeNode_IoliteGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemIolite.p3d";
	};
	class FreezeNode_JadeGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemJade.p3d";
	};
	class FreezeNode_RubyGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemRuby.p3d";
	};
	class FreezeNode_TurquoiseGemNode: HouseNoDestruct
	{
		scope = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 600;
				};
			};
		};
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemTurquoise.p3d";
	};
	class FreezeProp_Anvil: HouseNoDestruct
	{
		scope = 4;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\anvil.p3d";
	};
	class FreezeProp_GrindingStone: HouseNoDestruct
	{
		scope = 4;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\GrindingStone.p3d";
	};
	class FreezeProp_Furnace: HouseNoDestruct
	{
		scope = 4;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\FreezeFurnace.p3d";
	};
	class FreezePropNode_copper: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Copper\copperore.p3d";
	};
	class FreezePropNode_gold: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Gold\goldore.p3d";
	};
	class FreezePropNode_iron: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Iron\ironore.p3d";
	};
	class FreezePropNode_silver: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Silver\silverore.p3d";
	};
	class FreezePropNode_tin: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Tin\tinore.p3d";
	};
	class FreezePropNode_stone: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Stone\stoneore.p3d";
	};
	class FreezePropNode_uranium: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\Uranium\Uraniumore.p3d";
	};
	class FreezePropNode_AmberGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemAmber.p3d";
	};
	class FreezePropNode_AmethystGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemAmethyst.p3d";
	};
	class FreezePropNode_AquamrineGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemAquamrine.p3d";
	};
	class FreezePropNode_FancyColourDiamondGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemFancyColourDimond.p3d";
	};
	class FreezePropNode_IoliteGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemIolite.p3d";
	};
	class FreezePropNode_JadeGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemJade.p3d";
	};
	class FreezePropNode_RubyGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemRuby.p3d";
	};
	class FreezePropNode_TurquoiseGem: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ore\GemNode\GemTurquoise.p3d";
	};
	class FreezeProp_CutJade: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\jade\jade.p3d";
	};
	class FreezeProp_CutAmethyst: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\amethyst\Gem_Amethyst.p3d";
	};
	class FreezeProp_CutAquamarine: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\aquamarine\aquamarine.p3d";
	};
	class FreezeProp_CutAmber: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\amber\amber.p3d";
	};
	class FreezeProp_CutFancyColourDiamond: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\FancyColourDiamond\FancyColourDiamond.p3d";
	};
	class FreezeProp_CutIolite: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\iolite\iolite.p3d";
	};
	class FreezeProp_CutRuby: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\ruby\ruby.p3d";
	};
	class FreezeProp_CutTurquoise: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\turquoise\turquoise.p3d";
	};
	class FreezeProp_NuggetGold: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\gold_nugget.p3d";
	};
	class FreezeProp_NuggetCopper: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\copper_nugget.p3d";
	};
	class FreezeProp_NuggetIron: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\iron_nugget.p3d";
	};
	class FreezeProp_NuggetSilver: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\silver_nugget.p3d";
	};
	class FreezeProp_NuggetTin: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\tin_nugget.p3d";
	};
	class FreezeProp_NuggetUranium: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\Uranium_nugget.p3d";
	};
	class FreezeProp_StoneOreCopper: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\copperstone\copperstone.p3d";
	};
	class FreezeProp_StoneOreGold: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\goldstone\goldstone.p3d";
	};
	class FreezeProp_StoneOreIron: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\ironstone\ironstone.p3d";
	};
	class FreezeProp_StoneOreSilver: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\silverstone\silverstone.p3d";
	};
	class FreezeProp_StoneOreTin: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\tinstone\tinstone.p3d";
	};
	class FreezeProp_StoneOreUranium: HouseNoDestruct
	{
		scope = 1;
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Uranium_stone.p3d";
	};
	class Inventory_Base;
	class SmallStone: Inventory_Base
	{
		itemsCargoSize[] = {0,0};
	};
	class FreezeGem_Base: Inventory_Base
	{
		scope = 2;
		displayName = "Base Gem NO USE";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\BaseGem\uncut_gem.p3d";
		descriptionShort = "#STR_FreezeGem_Base_desc";
		itemSize[] = {1,1};
		weight = 1;
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\BaseGem\base_gem_co.paa"};
		inventorySlot[] = {};
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\gems.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\gems.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\gems.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\gems.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\gems.rvmat"}}};
				};
			};
		};
	};
	class FreezeGem_Jade: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Jade";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_jade_co.paa"};
	};
	class FreezeGem_Jade_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Jade_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\jade\jade.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\jade\jade.paa"};
	};
	class FreezeGem_Amethyst: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Amethyst";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_amethystt_co.paa"};
	};
	class FreezeGem_Amethyst_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Amethyst_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\amethyst\Gem_Amethyst.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\amethyst\amethyst.paa"};
	};
	class FreezeGem_Amber: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Amber";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_amber_co.paa"};
	};
	class FreezeGem_Amber_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Amber_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\amber\amber.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\amber\amber.paa"};
	};
	class FreezeGem_Aquamarine: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Aquamarine";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_aquamarine_co.paa"};
	};
	class FreezeGem_Aquamarine_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Aquamarine_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\aquamarine\aquamarine.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\aquamarine\aquamarine.paa"};
	};
	class FreezeGem_FancyColourDiamond: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_FancyColourDiamond";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_FancyColourDiamond_co.paa"};
	};
	class FreezeGem_FancyColourDiamond_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_FancyColourDiamond_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\FancyColourDiamond\FancyColourDiamond.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\FancyColourDiamond\FancyColourDiamond.paa"};
	};
	class FreezeGem_Iolite: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Iolite";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_iolite_co.paa"};
	};
	class FreezeGem_Iolite_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Iolite_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\iolite\iolite.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\iolite\iolite.paa"};
	};
	class FreezeGem_Ruby: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Ruby";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_ruby_co.paa"};
	};
	class FreezeGem_Ruby_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Ruby_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\ruby\ruby.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\ruby\ruby.paa"};
	};
	class FreezeGem_Turquoise: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Turquoise";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\UnCut\RawGems\raw_turquoise_co.paa"};
	};
	class FreezeGem_Turquoise_Cut: FreezeGem_Base
	{
		displayName = "#STR_FreezeGem_Turquoise_Cut";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\turquoise\turquoise.p3d";
		descriptionShort = "#STR_FreezeGem_Cut_desc";
		hiddenSelections[] = {"gem"};
		hiddenSelectionsTextures[] = {"MrfreezeMiningSystem\4_World\FreezeNodes_config\Gems\data\turquoise\turquoise.paa"};
	};
	class FreezeAnvil: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeAnvil";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\anvil.p3d";
		descriptionShort = "#STR_FreezeAnvil_desc";
		itemsCargoSize[] = {10,10};
		canBeDigged = 0;
		carveNavmesh = 1;
		overrideDrawArea = "4.0";
		placement = "ForceSlopeOnTerrain";
		heavyItem = 1;
		weight = 10000;
		physLayer = "item_large";
		itemBehaviour = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeAnvil_Static: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeAnvil";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\anvil.p3d";
		descriptionShort = "#STR_FreezeAnvil_desc";
		itemsCargoSize[] = {0,0};
		canBeDigged = 0;
		carveNavmesh = 1;
		overrideDrawArea = "4.0";
		placement = "ForceSlopeOnTerrain";
		heavyItem = 1;
		weight = 10000;
		physLayer = "item_large";
		itemBehaviour = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeAnvil_Kit_Holo: Inventory_Base
	{
		scope = 0;
		displayName = "FreezeAnvil HOLO";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\anvil.p3d";
	};
	class FreezeGrindingStone: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeGrindingStone";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\GrindingStone.p3d";
		descriptionShort = "#STR_FreezeGrindingStone_desc";
		itemsCargoSize[] = {10,10};
		canBeDigged = 0;
		carveNavmesh = 1;
		overrideDrawArea = "4.0";
		placement = "ForceSlopeOnTerrain";
		heavyItem = 1;
		weight = 10000;
		physLayer = "item_large";
		itemBehaviour = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\ss_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\ss_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Anvil\data\anvil_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeGrindingStone_Static: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeGrindingStone";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\GrindingStone.p3d";
		descriptionShort = "#STR_FreezeGrindingStone_desc";
		itemsCargoSize[] = {0,0};
		canBeDigged = 0;
		carveNavmesh = 1;
		overrideDrawArea = "4.0";
		placement = "ForceSlopeOnTerrain";
		heavyItem = 1;
		weight = 10000;
		physLayer = "item_large";
		itemBehaviour = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss.rvmat"}},{0.5,{"MMrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\data\ss_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeGrindingStone_Kit_Holo: Inventory_Base
	{
		scope = 0;
		displayName = "FreezeGrindingStone HOLO";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Sharpening_Stone\GrindingStone.p3d";
	};
	class FreezeFurnace: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeFurnace";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\FreezeFurnace.p3d";
		descriptionShort = "#STR_FreezeFurnace_desc";
		itemsCargoSize[] = {10,10};
		canBeDigged = 0;
		carveNavmesh = 1;
		overrideDrawArea = "8.0";
		placement = "ForceSlopeOnTerrain";
		destroyOnEmpty = 0;
		quantityBar = 0;
		varQuantityMax = 0;
		heavyItem = 1;
		weight = 10000;
		itemBehaviour = 0;
		physLayer = "item_large";
		allowOwnedCargoManipulation = 1;
		attachments[] = {"Freezestone_gold","Freezestone_gold1","Freezestone_gold2","Freezestone_gold3","Freezestone_silver","Freezestone_silver1","Freezestone_silver2","Freezestone_silver3","Freezestone_copper","Freezestone_copper1","Freezestone_copper2","Freezestone_copper3","Freezestone_tin","Freezestone_tin1","Freezestone_tin2","Freezestone_tin3","Freezestone_iron","Freezestone_iron1","Freezestone_iron2","Freezestone_iron3","Freezestone_base","Freezestone_base1","Freezestone_base2","Freezestone_base3","Freezestone_uranium","Freezestone_uranium1","Freezestone_uranium2","Freezestone_uranium3","Freezestone_sulphur","Freezestone_sulphur1","Freezestone_sulphur2","Freezestone_sulphur3"};
		class GUIInventoryAttachmentsProps
		{
			class GoldProcessing_Storage
			{
				name = "#STR_GoldProcessing_Storage";
				description = "Fill with Gold Ore";
				attachmentSlots[] = {"Freezestone_gold","Freezestone_gold1","Freezestone_gold2","Freezestone_gold3"};
				icon = "stones";
			};
			class TinProcessing_Storage
			{
				name = "#STR_TinProcessing_Storage";
				description = "Fill with Tin Ore";
				attachmentSlots[] = {"Freezestone_tin","Freezestone_tin1","Freezestone_tin2","Freezestone_tin3"};
				icon = "stones";
			};
			class IronProcessing_Storage
			{
				name = "#STR_IronProcessing_Storage";
				description = "Fill with iron Ore";
				attachmentSlots[] = {"Freezestone_iron","Freezestone_iron1","Freezestone_iron2","Freezestone_iron3"};
				icon = "stones";
			};
			class SilverProcessing_Storage
			{
				name = "#STR_SilverProcessing_Storage";
				description = "Fill with Silver Ore";
				attachmentSlots[] = {"Freezestone_silver","Freezestone_silver1","Freezestone_silver2","Freezestone_silver3"};
				icon = "stones";
			};
			class CopperProcessing_Storage
			{
				name = "#STR_CopperProcessing_Storage";
				description = "Fill with Copper Ore";
				attachmentSlots[] = {"Freezestone_copper","Freezestone_copper1","Freezestone_copper2","Freezestone_copper3"};
				icon = "stones";
			};
			class uraniumProcessing_Storage
			{
				name = "#STR_uraniumProcessing_Storage";
				description = "Fill with Uranium Ore";
				attachmentSlots[] = {"Freezestone_uranium","Freezestone_uranium1","Freezestone_uranium2","Freezestone_uranium3"};
				icon = "stones";
			};
			class sulphurProcessing_Storage
			{
				name = "#STR_sulphurProcessing_Storage";
				description = "Fill with Sulphur Ore";
				attachmentSlots[] = {"Freezestone_sulphur","Freezestone_sulphur1","Freezestone_sulphur2","Freezestone_sulphur3"};
				icon = "stones";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeFurnace_Static: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeFurnace";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\FreezeFurnace.p3d";
		descriptionShort = "#STR_FreezeFurnace_desc";
		itemsCargoSize[] = {10,5};
		canBeDigged = 0;
		carveNavmesh = 1;
		overrideDrawArea = "8.0";
		placement = "ForceSlopeOnTerrain";
		destroyOnEmpty = 0;
		quantityBar = 0;
		varQuantityMax = 0;
		heavyItem = 1;
		weight = 10000;
		itemBehaviour = 0;
		physLayer = "item_large";
		allowOwnedCargoManipulation = 1;
		attachments[] = {"Freezestone_gold","Freezestone_gold1","Freezestone_gold2","Freezestone_gold3","Freezestone_silver","Freezestone_silver1","Freezestone_silver2","Freezestone_silver3","Freezestone_copper","Freezestone_copper1","Freezestone_copper2","Freezestone_copper3","Freezestone_tin","Freezestone_tin1","Freezestone_tin2","Freezestone_tin3","Freezestone_iron","Freezestone_iron1","Freezestone_iron2","Freezestone_iron3","Freezestone_base","Freezestone_base1","Freezestone_base2","Freezestone_base3","Freezestone_uranium","Freezestone_uranium1","Freezestone_uranium2","Freezestone_uranium3","Freezestone_sulphur","Freezestone_sulphur1","Freezestone_sulphur2","Freezestone_sulphur3"};
		class GUIInventoryAttachmentsProps
		{
			class GoldProcessing_Storage
			{
				name = "#STR_GoldProcessing_Storage";
				description = "Fill with Gold Ore";
				attachmentSlots[] = {"Freezestone_gold","Freezestone_gold1","Freezestone_gold2","Freezestone_gold3"};
				icon = "stones";
			};
			class TinProcessing_Storage
			{
				name = "#STR_TinProcessing_Storage";
				description = "Fill with Tin Ore";
				attachmentSlots[] = {"Freezestone_tin","Freezestone_tin1","Freezestone_tin2","Freezestone_tin3"};
				icon = "stones";
			};
			class IronProcessing_Storage
			{
				name = "#STR_IronProcessing_Storage";
				description = "Fill with Iron Ore";
				attachmentSlots[] = {"Freezestone_iron","Freezestone_iron1","Freezestone_iron2","Freezestone_iron3"};
				icon = "stones";
			};
			class SilverProcessing_Storage
			{
				name = "#STR_SilverProcessing_Storage";
				description = "Fill with Silver Ore";
				attachmentSlots[] = {"Freezestone_silver","Freezestone_silver1","Freezestone_silver2","Freezestone_silver3"};
				icon = "stones";
			};
			class CopperProcessing_Storage
			{
				name = "#STR_CopperProcessing_Storage";
				description = "Fill with Copper Ore";
				attachmentSlots[] = {"Freezestone_copper","Freezestone_copper1","Freezestone_copper2","Freezestone_copper3"};
				icon = "stones";
			};
			class uraniumProcessing_Storage
			{
				name = "#STR_uraniumProcessing_Storage";
				description = "Fill with Uranium Ore";
				attachmentSlots[] = {"Freezestone_uranium","Freezestone_uranium1","Freezestone_uranium2","Freezestone_uranium3"};
				icon = "stones";
			};
			class sulphurProcessing_Storage
			{
				name = "#STR_sulphurProcessing_Storage";
				description = "Fill with Sulphur Ore";
				attachmentSlots[] = {"Freezestone_sulphur","Freezestone_sulphur1","Freezestone_sulphur2","Freezestone_sulphur3"};
				icon = "stones";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\data\Furnace_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeFurnace_Kit_Holo: Inventory_Base
	{
		scope = 0;
		displayName = "FreezeFurnace HOLO";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Furnace\FreezeFurnace.p3d";
	};
	class FreezeBar_base: Inventory_Base
	{
		scope = 2;
		displayName = "Ore Bar";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\tinbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\basebar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\basebar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\basebar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\basebar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\basebar_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_copper: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_copper";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\CopperIngot\copperbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\CopperIngot\data\copperbar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\CopperIngot\data\copperbar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\CopperIngot\data\copperbar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\CopperIngot\data\copperbar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\CopperIngot\data\copperbar_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_Adamantite: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_Adamantite";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Adamantite\Adamantite.p3d";
		descriptionShort = "#STR_FreezeBar_mixed_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Adamantite\data\Adamantite.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Adamantite\data\Adamantite.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Adamantite\data\Adamantite_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Adamantite\data\Adamantite_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Adamantite\data\Adamantite_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_Eridium: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_Eridium";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Eridium\Eridium.p3d";
		descriptionShort = "#STR_FreezeBar_mixed_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Eridium\data\Eridium.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Eridium\data\Eridium.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Eridium\data\Eridium_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Eridium\data\Eridium_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Eridium\data\Eridium_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_Enchanted: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_Enchanted";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Enchanted\Enchanted.p3d";
		descriptionShort = "#STR_FreezeBar_mixed_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Enchanted\data\Enchanted.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Enchanted\data\Enchanted.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Enchanted\data\Enchanted_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Enchanted\data\Enchanted_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Enchanted\data\Enchanted_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_Cobalt: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_Cobalt";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Cobalt\Cobalt.p3d";
		descriptionShort = "#STR_FreezeBar_mixed_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Cobalt\data\Cobalt.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Cobalt\data\Cobalt.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Cobalt\data\Cobalt_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Cobalt\data\Cobalt_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Cobalt\data\Cobalt_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_Crimant: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_Crimant";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Crimant\Crimant.p3d";
		descriptionShort = "#STR_FreezeBar_mixed_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Crimant\data\Crimant.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Crimant\data\Crimant.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Crimant\data\Crimant_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Crimant\data\Crimant_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Crimant\data\Crimant_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_gold: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_gold";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\GoldIngot\goldbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\GoldIngot\data\goldbar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\GoldIngot\data\goldbar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\GoldIngot\data\goldbar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\GoldIngot\data\goldbar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\GoldIngot\data\goldbar_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_iron: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_iron";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\IronIngot\Ironbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\IronIngot\data\silverbar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\IronIngot\data\silverbar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\IronIngot\data\silverbar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\IronIngot\data\silverbar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\IronIngot\data\silverbar_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_silver: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_silver";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\SilverIngot\silverbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\SilverIngot\data\silverbar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\SilverIngot\data\silverbar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\SilverIngot\data\silverbar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\SilverIngot\data\silverbar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\SilverIngot\data\silverbar_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_tin: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_tin";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\tinbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\tinbar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\tinbar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\tinbar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\data\tinbar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\TinIngot\tinbar_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezePowder_Sulphur: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezePowder_Sulphur";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Sulphur\SulphurPowder.p3d";
		descriptionShort = "#STR_FreezePowder_Sulphur_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Sulphur\data\powdered_sulphur.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Sulphur\data\powdered_sulphur.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Sulphur\data\powdered_sulphur_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Sulphur\data\powdered_sulphur_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\Sulphur\data\powdered_sulphur_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeBar_uranium: Inventory_Base
	{
		scope = 2;
		displayName = "#STR_FreezeBar_uranium";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\UraniumIngot\Uraniumbar.p3d";
		descriptionShort = "#STR_FreezeBar_base_desc";
		itemSize[] = {1,2};
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		weight = 30;
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\UraniumIngot\data\Uraniumbar.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\UraniumIngot\data\Uraniumbar.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\UraniumIngot\data\Uraniumbar_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\UraniumIngot\data\Uraniumbar_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Ingots\UraniumIngot\data\Uraniumbar_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_base: SmallStone
	{
		scope = 2;
		displayName = "Don't Use this Ore rock";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\stone.p3d";
		descriptionShort = "#STR_Freezestone_base_desc";
		itemSize[] = {2,1};
		weight = 1;
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		inventorySlot[] = {"Freezestone_base","Freezestone_base1","Freezestone_base2","Freezestone_base3"};
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_copper: Freezestone_base
	{
		displayName = "#STR_Freezestone_copper";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\copperstone\copperstone.p3d";
		weight = 4;
		inventorySlot[] = {"Freezestone_copper","Freezestone_copper1","Freezestone_copper2","Freezestone_copper3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_gold: Freezestone_base
	{
		displayName = "#STR_Freezestone_gold";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\goldstone\goldstone.p3d";
		weight = 4;
		inventorySlot[] = {"Freezestone_gold","Freezestone_gold1","Freezestone_gold2","Freezestone_gold3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_iron: Freezestone_base
	{
		displayName = "#STR_Freezestone_iron";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\ironstone\ironstone.p3d";
		weight = 4;
		inventorySlot[] = {"Freezestone_iron","Freezestone_iron1","Freezestone_iron2","Freezestone_iron3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_silver: Freezestone_base
	{
		displayName = "#STR_Freezestone_silver";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\silverstone\silverstone.p3d";
		weight = 4;
		inventorySlot[] = {"Freezestone_silver","Freezestone_silver1","Freezestone_silver2","Freezestone_silver3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_tin: Freezestone_base
	{
		displayName = "#STR_Freezestone_tin";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\tinstone\tinstone.p3d";
		weight = 4;
		inventorySlot[] = {"Freezestone_tin","Freezestone_tin1","Freezestone_tin2","Freezestone_tin3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\BaseStone\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_uranium: Freezestone_base
	{
		displayName = "#STR_Freezestone_uranium";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Uranium_stone.p3d";
		weight = 4;
		inventorySlot[] = {"Freezestone_uranium","Freezestone_uranium1","Freezestone_uranium2","Freezestone_uranium3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class Freezestone_sulphur: Freezestone_base
	{
		displayName = "#STR_Freezestone_sulphur";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\sulphurstone\sulphurstone.p3d";
		descriptionShort = "#STR_Freezestone_sulphur_desc";
		weight = 4;
		inventorySlot[] = {"Freezestone_sulphur","Freezestone_sulphur1","Freezestone_sulphur2","Freezestone_sulphur3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\orerocks\uraniumstone\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_base: SmallStone
	{
		scope = 2;
		displayName = "Ore Nugget";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\basenugget\FreezeNugget_base.p3d";
		descriptionShort = "#STR_FreezeNugget_base_desc";
		itemSize[] = {1,1};
		weight = 1;
		canBeSplit = 1;
		varQuantityDestroyOnMin = 1;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 10;
		inventorySlot[] = {"FreezeNugget_base","FreezeNugget_base1","FreezeNugget_base2","FreezeNugget_base3"};
		physLayer = "item_small";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\basenugget\data\base_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\basenugget\data\base_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\basenugget\data\Freeze_nugget_base_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\basenugget\data\Freeze_nugget_base_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\basenugget\data\Freeze_nugget_base_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_gold: FreezeNugget_base
	{
		displayName = "#STR_FreezeNugget_gold";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\gold_nugget.p3d";
		weight = 4;
		inventorySlot[] = {"FreezeNugget_gold","FreezeNugget_gold1","FreezeNugget_gold2","FreezeNugget_gold3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\data\gold_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\data\gold_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\data\gold_nugget_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\data\gold_nugget_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Goldnugget\data\gold_nugget_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeRef_Sulphur: FreezeNugget_base
	{
		displayName = "#STR_FreezeRef_Sulphur";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\sulphurRef\sulphurRef.p3d";
		descriptionShort = "#STR_FreezeRef_Sulphur_desc";
		weight = 4;
		inventorySlot[] = {"FreezeRef_Sulphur","FreezeRef_Sulphur1","FreezeRef_Sulphur2","FreezeRef_Sulphur3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\sulphurRef\data\sulphur_ref.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\sulphurRef\data\sulphur_ref.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\sulphurRef\sulphur_ref_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\sulphurRef\data\sulphur_ref_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\sulphurRef\data\sulphur_ref_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_copper: FreezeNugget_base
	{
		displayName = "#STR_FreezeNugget_copper";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\copper_nugget.p3d";
		weight = 4;
		inventorySlot[] = {"FreezeNugget_copper","FreezeNugget_copper1","FreezeNugget_copper2","FreezeNugget_copper3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\data\gold_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\data\gold_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\data\gold_nugget_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\data\gold_nugget_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Coppernugget\data\gold_nugget_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_iron: FreezeNugget_base
	{
		displayName = "#STR_FreezeNugget_iron";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\iron_nugget.p3d";
		weight = 4;
		inventorySlot[] = {"FreezeNugget_iron","FreezeNugget_iron1","FreezeNugget_iron2","FreezeNugget_iron3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\data\gold_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\data\gold_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\data\gold_nugget_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\data\gold_nugget_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Ironnugget\data\gold_nugget_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_silver: FreezeNugget_base
	{
		displayName = "#STR_FreezeNugget_silver";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\silver_nugget.p3d";
		weight = 4;
		inventorySlot[] = {"FreezeNugget_silver","FreezeNugget_silver1","FreezeNugget_silver2","FreezeNugget_silver3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\data\gold_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\data\gold_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\data\gold_nugget_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\data\gold_nugget_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Silvernugget\data\gold_nugget_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_tin: FreezeNugget_base
	{
		displayName = "#STR_FreezeNugget_tin";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\tin_nugget.p3d";
		weight = 4;
		inventorySlot[] = {"FreezeNugget_tin","FreezeNugget_tin1","FreezeNugget_tin2","FreezeNugget_tin3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\data\gold_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\data\gold_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\data\gold_nugget_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\data\gold_nugget_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Tinnugget\data\gold_nugget_destruct.rvmat"}}};
				};
			};
		};
	};
	class FreezeNugget_uranium: FreezeNugget_base
	{
		displayName = "#STR_FreezeNugget_uranium";
		model = "MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\Uranium_nugget.p3d";
		weight = 4;
		inventorySlot[] = {"FreezeNugget_uranium","FreezeNugget_uranium1","FreezeNugget_uranium2","FreezeNugget_uranium3"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\data\gold_nugget.rvmat"}},{0.7,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\data\gold_nugget.rvmat"}},{0.5,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\data\gold_nugget_damage.rvmat"}},{0.3,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\data\gold_nugget_damage.rvmat"}},{0,{"MrfreezeMiningSystem\4_World\FreezeNodes_config\Nuggets\nuggets\Uraniumnugget\data\gold_nugget_destruct.rvmat"}}};
				};
			};
		};
	};
};
