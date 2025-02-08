# 1 "data/maps/Unknown_Tunnel/scripts.pory"

# 2 "data/maps/Unknown_Tunnel/scripts.pory"
Unknown_Tunnel_MapScripts::
# 3 "data/maps/Unknown_Tunnel/scripts.pory"
	.byte 0

Unknown_Tunnel_TruckDriver::
# 10 "data/maps/Unknown_Tunnel/scripts.pory"
	trainerbattle_single trainer = TRAINER_GRUNT_AQUA_HIDEOUT_1, intro_text = Unknown_Tunnel_TruckDriverIntroText, lose_text = Unknown_Tunnel_TruckDriverLoseText
# 11 "data/maps/Unknown_Tunnel/scripts.pory"
	msgbox Unknown_Tunnel_TruckDriverAfterDefeat, MSGBOX_AUTOCLOSE
	return


Unknown_Tunnel_Goon2::
# 15 "data/maps/Unknown_Tunnel/scripts.pory"
	trainerbattle_single trainer = TRAINER_GRUNT_AQUA_HIDEOUT_2, intro_text = Unknown_Tunnel_Goon1IntroText, lose_text = Unknown_Tunnel_Goon1LoseText
# 16 "data/maps/Unknown_Tunnel/scripts.pory"
	msgbox Unknown_Tunnel_Goon1AfterDefeat, MSGBOX_AUTOCLOSE
	return


UnknownTunnel_ItemBallPotion1::
# 20 "data/maps/Unknown_Tunnel/scripts.pory"
	lockall
# 21 "data/maps/Unknown_Tunnel/scripts.pory"
	removeobject 2
# 22 "data/maps/Unknown_Tunnel/scripts.pory"
	giveitem ITEM_FLOATY_BALLOON, 1
# 23 "data/maps/Unknown_Tunnel/scripts.pory"
	setflag FLAG_GET_FLOATYBALLOON
# 24 "data/maps/Unknown_Tunnel/scripts.pory"
	releaseall
	return


UnknownTunnel_ItemBallGoldenRepel::
# 28 "data/maps/Unknown_Tunnel/scripts.pory"
	lockall
# 29 "data/maps/Unknown_Tunnel/scripts.pory"
	giveitem ITEM_GOLDEN_REPEL, 1
# 30 "data/maps/Unknown_Tunnel/scripts.pory"
	removeobject 8
# 31 "data/maps/Unknown_Tunnel/scripts.pory"
	releaseall
	return


UnknownTunnel_ItemBallElixir::
# 35 "data/maps/Unknown_Tunnel/scripts.pory"
	lockall
# 36 "data/maps/Unknown_Tunnel/scripts.pory"
	giveitem ITEM_ELIXIR, 1
# 37 "data/maps/Unknown_Tunnel/scripts.pory"
	removeobject 6
# 38 "data/maps/Unknown_Tunnel/scripts.pory"
	releaseall
	return


UnknownTunnel_ItemBallAntidote::
# 42 "data/maps/Unknown_Tunnel/scripts.pory"
	lockall
# 43 "data/maps/Unknown_Tunnel/scripts.pory"
	giveitem ITEM_ANTIDOTE, 1
# 44 "data/maps/Unknown_Tunnel/scripts.pory"
	removeobject 7
# 45 "data/maps/Unknown_Tunnel/scripts.pory"
	releaseall
	return


UnknownTunnel_Sign1Read::
# 49 "data/maps/Unknown_Tunnel/scripts.pory"
	lockall
# 50 "data/maps/Unknown_Tunnel/scripts.pory"
	msgbox Unknown_Tunnel_Sign1Text, MSGBOX_DEFAULT
# 51 "data/maps/Unknown_Tunnel/scripts.pory"
	releaseall
	return


UnknownTunnel_Sign2Read::
# 55 "data/maps/Unknown_Tunnel/scripts.pory"
	lockall
# 56 "data/maps/Unknown_Tunnel/scripts.pory"
	msgbox Unknown_Tunnel_Sign2Text, MSGBOX_DEFAULT
# 57 "data/maps/Unknown_Tunnel/scripts.pory"
	releaseall
	return


Unknown_Tunnel_TruckDriverIntroText::
# 60 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "Argh... I hate my job!\p"
	.string "There I was, a happy drill mechanic in\n"
	.string "FIERY PATH. Now I have to drive this\l"
	.string "beat-up truck halfway across Hoenn!\p"
	.string "… … … … … …\p"
	.string "Hey, wait a minute! You're supposed to\n"
	.string "be in the truck!$"

Unknown_Tunnel_TruckDriverLoseText::
# 68 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "… You weren't supposed to get past me!$"

Unknown_Tunnel_TruckDriverAfterDefeat::
# 72 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "Blast it all...\n"
	.string "No one told me you'd have a POKeMON\l"
	.string "with you!\p"
	.string "They said it would be a quick job... I was\n"
	.string "supposed to drop you off in PETALBURG\l"
	.string "CITY, then come right back like nothing\l"
	.string "happened. The branch leader will be\l"
	.string "furious with me... I don't care anymore,\l"
	.string "I'm scramming!$"

Unknown_Tunnel_Goon1IntroText::
# 79 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "Hold it right there!\p"
	.string "You must be the special passenger we're\n"
	.string "transporting. Sorry, but we don't allow\l"
	.string "rest stops!$"

Unknown_Tunnel_Goon1LoseText::
# 84 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "What…?$"

Unknown_Tunnel_Goon1AfterDefeat::
# 88 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "You defeated the driver too?\n"
	.string "This is bad... I gotta tell the BOSS!$"

Unknown_Tunnel_Sign1Text::
# 93 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "Tunnel to Rustboro City.\p"
	.string "Unauthorized access prohibited!$"

Unknown_Tunnel_Sign2Text::
# 98 "data/maps/Unknown_Tunnel/scripts.pory"
	.string "NOTICE: Proper equipment must be\p"
	.string "worn at all times!$"
