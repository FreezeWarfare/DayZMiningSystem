Head over to mpmissions/mapname/cfgeconomycore.xml and after the closing </defaults> tag add this

    <ce folder="files_miningsystem">
		<file name="CE_FreezeMining_BAR.xml" type="types" />
        <file name="CE_FreezeMining_CraftBAR.xml" type="types" />
        <file name="CE_FreezeMining_Equipment.xml" type="types" />
        <file name="CE_FreezeMining_Gem.xml" type="types" />
        <file name="CE_FreezeMining_Node.xml" type="types" />
        <file name="CE_FreezeMining_Nugget.xml" type="types" />
        <file name="CE_FreezeMining_Stone.xml" type="types" />
	</ce>

Then copy the files_miningsystem folder into your mpmissions/mapname/ root directory. This handles lifetimes of specific items and objects that the mining system use.