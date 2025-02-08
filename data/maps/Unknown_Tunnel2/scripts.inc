# 1 "data/maps/Unknown_Tunnel2/scripts.pory"

# 2 "data/maps/Unknown_Tunnel2/scripts.pory"
Unknown_Tunnel2_MapScripts::
# 3 "data/maps/Unknown_Tunnel2/scripts.pory"
	.byte 0

Unknown_Tunnel_Room2_Goon1_Script::
# 7 "data/maps/Unknown_Tunnel2/scripts.pory"
	trainerbattle_single trainer = TRAINER_GRUNT_AQUA_HIDEOUT_2, intro_text = Unknown_Tunnel_Room2_Goon1_Intro_Text, lose_text = Unknown_Tunnel_Room2_Goon1_Lose_Text
# 11 "data/maps/Unknown_Tunnel2/scripts.pory"
	msgbox Unknown_Tunnel_Room2_Goon1_After_Defeat, MSGBOX_AUTOCLOSE
	return


Unknown_Tunnel_Room2_Goon1_Intro_Text::
# 15 "data/maps/Unknown_Tunnel2/scripts.pory"
	.string "Imagine trying to drive a truck through\n"
	.string "this place.$"

Unknown_Tunnel_Room2_Goon1_Lose_Text::
# 19 "data/maps/Unknown_Tunnel2/scripts.pory"
	.string "That's pretty much what it's like...$"

Unknown_Tunnel_Room2_Goon1_After_Defeat::
# 23 "data/maps/Unknown_Tunnel2/scripts.pory"
	.string "Imagine being the guy who has to guide\n"
	.string "the driver through the turns...$"
