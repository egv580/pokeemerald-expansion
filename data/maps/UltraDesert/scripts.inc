# 1 "data/maps/UltraDesert/scripts.pory"

# 2 "data/maps/UltraDesert/scripts.pory"
UltraDesert_MapScripts::
# 3 "data/maps/UltraDesert/scripts.pory"
	.byte 0

UltraDesertBattlePheromosa::
# 7 "data/maps/UltraDesert/scripts.pory"
	lockall
# 8 "data/maps/UltraDesert/scripts.pory"
	faceplayer
# 9 "data/maps/UltraDesert/scripts.pory"
	setwildbattle SPECIES_PHEROMOSA, 60
# 10 "data/maps/UltraDesert/scripts.pory"
	playmoncry SPECIES_PHEROMOSA, CRY_MODE_ENCOUNTER
# 11 "data/maps/UltraDesert/scripts.pory"
	msgbox UltraDesertBattlePheromosa_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/UltraDesert/scripts.pory"
	waitmoncry
# 13 "data/maps/UltraDesert/scripts.pory"
	dowildbattle
# 14 "data/maps/UltraDesert/scripts.pory"
	releaseall
	return


UltraDesertBattlePheromosa_Text_0:
# 11 "data/maps/UltraDesert/scripts.pory"
	.string "Peroche!$"
