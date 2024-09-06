class CfgPatches
{
	class MrFreezeMiningTranslate
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Cooking",
			"DZ_Rocks"
		};
	};
};
class CfgMods
{
	class MrFreezeMiningTranslate
	{
		dir="MrFreezeMiningTranslate";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="MrFreezeMiningTranslate";
		credits="MrFreezeGamesPC";
		author="MrFreezeGamesPC";
		authorID="https://steamcommunity.com/id/MrFreezeGamesPC/";
		version="0.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"MrFreezeMiningTranslate/4_world"
				};
			};
		};
	};
};
