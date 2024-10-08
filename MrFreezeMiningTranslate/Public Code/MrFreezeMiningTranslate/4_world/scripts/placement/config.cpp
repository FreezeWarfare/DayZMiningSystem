class CfgPatches
{
	class FreezeMining_Base_Kit
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Container_Base;
	class WoodenCrate: Container_Base{};
	class FreezeMining_Kit_Base: WoodenCrate
	{
		scope = 0;
		displayName = "";
		descriptionShort = "";
		model = "\DZ\gear\camping\wooden_case.p3d";
		itemSize[] = {3,2};
		carveNavmesh = 1;
		canBeDigged = 0;
		simulation = "inventoryItem";
		physLayer = "item_small";
		SingleUseActions[] = {527};
		ContinuousActions[] = {231};
		rotationFlags = 2;
		InteractActions[] = {};
		weight = 300;
		itemBehaviour = 2;
		class Cargo{};
	};
	class FreezeFurnace_Kit: FreezeMining_Kit_Base
	{
		scope = 2;
		displayName = "$STR_FreezeFurnace_Kit";
		descriptionShort = "$STR_FreezeFurnace_Kit_desc";
	};
	class FreezeAnvil_Kit: FreezeMining_Kit_Base
	{
		scope = 2;
		displayName = "$STR_FreezeAnvil_Kit";
		descriptionShort = "$STR_FreezeAnvil_Kit_desc";
	};
	class FreezeGrindingStone_Kit: FreezeMining_Kit_Base
	{
		scope = 2;
		displayName = "$STR_FreezeGrindingStone_Kit";
		descriptionShort = "$STR_FreezeGrindingStone_Kit_desc";
	};
};
