# 1 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"

# 2 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
Meteor_Falls_Secret_Tunnels_MapScripts::
# 3 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	.byte 0
# 4 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"

# 5 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"

# 6 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
MeteorFalls_Secret_Tunnels_RemoveGoldenRepel::
# 7 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	lockall
# 8 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	playse SE_PIN
# 9 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 10 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	waitse
# 11 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
    msgbox MeteorFalls_1F_1R_GoldenRepelFadeText, MSGBOX_DEFAULT
# 12 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	setvar VAR_GOLDEN_REPEL_STATE, 0
# 13 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	msgbox MeteorFalls_1F_1R_DevonOhNo, MSGBOX_NPC
# 14 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	special SavePlayerParty
# 15 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	special LoadDevonBeldum
# 16 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	special StartWallyTutorialBattle
# 17 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	waitstate
# 18 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	special LoadPlayerParty
# 19 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	msgbox MeteorFalls_1F_1R_DevonPostBattle1, MSGBOX_DEFAULT
# 20 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	waitmessage
# 21 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOW_ME, Movement_DevonBackAndForth
# 22 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	msgbox MeteorFalls_1F_1R_DevonPostBattle2, MSGBOX_DEFAULT
# 23 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	releaseall
# 24 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	end

# 66 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
Movement_DevonBackAndForth:
# 67 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	walk_in_place_left
# 68 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	walk_in_place_right
# 69 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	faceplayer
	step_end

MeteorFalls_SecretTunnels_DevonOhNo::
# 40 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	.string "DEVON: Oh no!$"

MeteorFalls_SecretTunnels_GoldenRepelFadeText::
# 44 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	.string "The effects of the Golden Repel faded.\p"
	.string "It was just a concentrated Max Repel!$"

MeteorFalls_1F_1R_DevonPostBattle1::
# 50 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	.string "DEVON: Oh no, BELDUM!\p"
	.string "$"

MeteorFalls_1F_1R_DevonPostBattle2::
# 54 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	.string "… … … … …\p"
	.string "I don't have any more healing supplies...\n"
	.string "If we run into another wild POKeMON,\l"
	.string "BELDUM will get even more hurt. I don't\l"
	.string "know how I can go on...$"

MeteorFalls_1F_1R_GiveDevonPotions::
# 62 "data/maps/Meteor_Falls_Secret_Tunnels/scripts.pory"
	.string "Give DEVON some Potions?$"
