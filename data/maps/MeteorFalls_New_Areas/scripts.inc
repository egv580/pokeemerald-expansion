# 1 "data/maps/MeteorFalls_New_Areas/scripts.pory"

# 2 "data/maps/MeteorFalls_New_Areas/scripts.pory"
.set LOCALID_DEVON, 11

MeteorFalls_New_Areas_MapScripts::
# 6 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MeteorFalls_BeldumsCave_OnTransition
	.byte 0


MeteorFalls_BeldumsCave_OnTransition::
# 13 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	call_if_eq VAR_BELDUMS_CAVE_STATE, 0, MeteorFalls_Beldums_Cave_EventScript_FirstVisit_WithDevon
	return


MeteorFalls_Beldums_Cave_EventScript_Beldum::
# 17 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	lockall
# 18 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	faceplayer
# 19 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	playmoncry SPECIES_BELDUM, CRY_MODE_NORMAL
# 20 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	msgbox MeteorFalls_Beldums_Cave_EventScript_Beldum_Text_0, type = MSGBOX_NPC
# 21 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	waitmoncry
# 22 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	closemessage
# 23 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	releaseall
	return


MeteorFalls_Beldums_Cave_EventScript_FirstVisit_WithDevon::
# 29 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	setvar VAR_BELDUMS_CAVE_STATE, 1
	return


MeteorFalls_Beldums_Cave_EventScript_Devon::
# 47 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	call_if_eq VAR_BELDUMS_CAVE_STATE, 3, MeteorFalls_Beldums_Cave_EventScript_Devon_Story
	return


MeteorFalls_Beldums_Cave_EventScript_Devon_Story::
# 51 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	lockall
# 52 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	playse SE_PIN
# 53 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	applymovement localId = OBJ_EVENT_ID_FOLLOW_ME, movements = Common_Movement_ExclamationMark
# 54 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	waitse
# 55 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	applymovement localId = OBJ_EVENT_ID_FOLLOW_ME, movements = MeteorFallsNewAreas_DevonLooksAround
# 56 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	msgbox MeteorFalls_Beldums_Cave_Devon_Story_Text_1, type = MSGBOX_NPC
# 57 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	facefollower
# 58 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	msgbox MeteorFalls_Beldums_Cave_Devon_Story_Text_2, type = MSGBOX_NPC
# 59 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	setvar VAR_BELDUMS_CAVE_STATE, 4
	return


# 62 "data/maps/MeteorFalls_New_Areas/scripts.pory"
MeteorFallsNewAreas_DevonLooksAround:
# 63 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	walk_in_place_down
# 64 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	walk_in_place_left
# 65 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	walk_in_place_right
	step_end

MeteorFalls_Beldums_Cave_EventScript_Beldum_Text_0:
# 20 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	.string "BELDUM: Bel bel!$"

MeteorFalls_Beldums_Cave_Devon_Story_Text_1::
# 68 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	.string "DEVON: !!!\p"
	.string "This place...\p"
	.string "$"

MeteorFalls_Beldums_Cave_Devon_Story_Text_2::
# 73 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	.string "This must be one of BELDUM's habitats.\n"
	.string "I've never seen them out in the open\l"
	.string "like this... They're usually very shy.\l"
	.string "From what I've seen, the only fighting\l"
	.string "move BELDUM knows is Take Down, where\l"
	.string "it takes recoil damage. So, in a way,\l"
	.string "BELDUM can't fight without hurting\l"
	.string "itself.$"

MeteorFalls_Beldums_Cave_Devon_Unusual::
# 80 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	.string "… … … … … …\p"
	.string "I probably sound strange talking about\n"
	.string "POKeMON so much, don't I?$"

MeteorFalls_Beldums_Cave_Devon_Unusual2::
# 85 "data/maps/MeteorFalls_New_Areas/scripts.pory"
	.string "… … … … … …\p"
	.string "I probably sound strange talking about\n"
	.string "POKeMON so much, don't I?\p"
	.string "I guess BELDUM is the one that made me\n"
	.string "like this... It would take the rocks I\l"
	.string "shoveled every day and treat each one\l"
	.string "like it was something special and\l"
	.string "valuable. And over time I started\l"
	.string "seeing the beauty in them, too. How did\l"
	.string "you meet your SWABLU? … … … … … …\p"
	.string "I see... it was a gift from your father.\n"
	.string "It must be very special to you, then.\l"
	.string "But you seem to have a strong bond,\l"
	.string "despite not being together for very\l"
	.string "long.$"
