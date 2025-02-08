# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
.set LOCALID_STEVEN, 4
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"
.set LOCALID_DEVON, 1
# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Steven::
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_EventScript_Defeated::
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I'm amazed you knew where to find me.\p"
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Do you, uh…maybe think of me as\n"
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "just a rock maniac?\p"
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "No, that can't be right.\p"
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "We battled alongside each other at\n"
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You should have a very good idea\n"
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "about how good I am.\p"
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "a serious challenge, expect the worst!$"
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_StevenDefeat:
# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "You…\n"
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I had no idea you'd become so strong…$"
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "STEVEN: Come to think of it, ever since\n"
# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "our paths first crossed in GRANITE\l"
# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "CAVE in DEWFORD, I had this feeling.\p"
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I thought that you would eventually\n"
# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "become the CHAMPION.\p"
# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "My predictions usually come true.\p"
# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "And where will you go from here?\p"
# 58 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\n"
# 59 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\p"
# 60 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Fufufu, even I couldn't tell you that.$"

MeteorFalls_StevensCave_EventScript_Devon::
# 64 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call_if_eq VAR_UNUSED_0x408B, 0, MeteorFalls_StevensCave_EventScript_Devon_Is_Worried
# 65 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call_if_eq VAR_UNUSED_0x408B, 1, MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer
	return


MeteorFalls_StevensCave_EventScript_Devon_Is_Worried::
# 71 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lockall
# 72 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = OBJ_EVENT_ID_CAMERA, movements = CameraMovement_1
# 74 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 75 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Confused_Text1, type = MSGBOX_NPC
# 76 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = LOCALID_DEVON, movements = MeteorFallsMovement_Devon_Confused_1
# 77 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement LOCALID_DEVON
# 78 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Confused_Text2, type = MSGBOX_NPC
# 79 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = OBJ_EVENT_ID_CAMERA, movements = MeteorFallsMovement_Devon_Confused_2
# 80 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = LOCALID_DEVON, movements = MeteorFallsMovement_Devon_Confused_2
# 81 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement LOCALID_DEVON
# 82 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Confused_Text3, type = MSGBOX_NPC
# 83 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = LOCALID_DEVON, movements = MeteorFallsMovement_Devon_Confused_3
# 84 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement LOCALID_DEVON
# 85 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Confused_Text4, type = MSGBOX_NPC
# 86 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = LOCALID_DEVON, movements = MeteorFallsMovement_Devon_Confused_4
# 87 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Confused_Text5, type = MSGBOX_NPC
# 88 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = OBJ_EVENT_ID_CAMERA, movements = ReturnCameraToPlayer1
# 89 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 90 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_UNUSED_0x408B, 1
# 91 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	special RemoveCameraObject
# 92 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	releaseall
	return


MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer::
# 98 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lockall
# 99 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	faceplayer
# 100 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 101 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = LOCALID_DEVON, movements = Common_Movement_ExclamationMark
# 102 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 103 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Sees_Player_Text, type = MSGBOX_YESNO
# 104 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_2
# 108 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Question_Yes, type = MSGBOX_NPC
MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_1:
# 110 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 111 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement localId = LOCALID_DEVON, movements = Common_Movement_QuestionMark
# 112 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 113 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Ask_To_Tag_Along, type = MSGBOX_YESNO
MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_6:
# 114 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_7
# 117 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Nice_To_Meet_You, type = MSGBOX_NPC
# 118 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lockall
# 119 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_LetsGo, type = MSGBOX_NPC
# 120 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setfollower LOCALID_DEVON, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, Devon_Follower_Dialogue, PARTNER_DEVON
# 122 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_UNUSED_0x408B, 2
# 123 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_BELDUMS_CAVE_STATE, 0
# 124 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 2
# 125 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_MET_DEVON
# 126 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	releaseall
	return

MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_2:
# 105 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Question_No, type = MSGBOX_NPC
	goto MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_1

MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_7:
# 115 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_I_Would_Mind, type = MSGBOX_YESNO
	goto MeteorFalls_StevensCave_EventScript_Devon_NoticedPlayer_6


MeteorFalls_StevensCave_EventScript_Devon_FollowingPlayer::
# 133 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lockall
# 134 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_DEVON, Common_Movement_Delay48
# 135 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_LetsGo, type = MSGBOX_NPC
# 136 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setfollower LOCALID_DEVON, FOLLOWER_FLAG_CAN_LEAVE_ROUTE, Devon_Follower_Dialogue, TRUE
# 145 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	releaseall
	return


MeteorFalls_StevensCave_Devons_Trailmarks::
# 149 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lockall
# 150 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Mark_Spots_SignText, MSGBOX_DEFAULT
# 151 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	releaseall
	return


# 154 "data/maps/MeteorFalls_StevensCave/scripts.pory"
CameraMovement_1:
# 155 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_diag_northeast
# 155 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_diag_northeast
# 155 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_diag_northeast
	step_end

# 158 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFallsMovement_Devon_Confused_1:
# 159 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_in_place_left
# 160 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_in_place_right
	step_end

# 163 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFallsMovement_Devon_Confused_2:
# 164 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_down
# 164 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_down
# 164 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_down
# 164 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFallsMovement_Devon_Confused_3:
# 168 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_in_place_right
	step_end

# 171 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFallsMovement_Devon_Confused_4:
# 172 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_in_place_left
	step_end

# 175 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFallsMovement_Devon_Confused_5:
# 176 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	face_up
	step_end

# 179 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFallsMovement_Devon_NoticePlayer_1:
# 180 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	faceplayer
	step_end

# 183 "data/maps/MeteorFalls_StevensCave/scripts.pory"
Devon_Goto_Player_1:
# 184 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 184 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 184 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 184 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 185 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	face_down
	step_end

# 188 "data/maps/MeteorFalls_StevensCave/scripts.pory"
Devon_Goto_Player_2:
# 189 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 189 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 189 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 189 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 190 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_down
# 190 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_down
# 191 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	faceplayer
	step_end

# 194 "data/maps/MeteorFalls_StevensCave/scripts.pory"
ReturnCameraToPlayer1:
# 196 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 196 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 196 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 197 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_up
	step_end

# 200 "data/maps/MeteorFalls_StevensCave/scripts.pory"
ReturnCameraToPlayer2:
# 201 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 201 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 201 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_left
# 202 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	walk_up
	step_end

Devon_Follower_Dialogue::
# 313 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	facefollower
# 314 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_FLOATYBALLOON_IS_ACTIVE, Devon_Follower_Dialogue_1
# 324 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 1
	goto_if_eq Devon_Follower_Dialogue_7
# 324 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 2
	goto_if_eq Devon_Follower_Dialogue_7
# 334 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 3
	goto_if_eq Devon_Follower_Dialogue_17
# 338 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_METEOR_FALLS_STATE, 4
	goto_if_eq Devon_Follower_Dialogue_22
	return

Devon_Follower_Dialogue_1:
# 315 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	random 2
# 316 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Devon_Follower_Dialogue_5
Devon_Follower_Dialogue_4:
# 319 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Devon_Follower_Dialogue_12
	return

Devon_Follower_Dialogue_5:
# 317 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Surfing_1, type = MSGBOX_NPC
	goto Devon_Follower_Dialogue_4

Devon_Follower_Dialogue_7:
# 325 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	random 2
# 326 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Devon_Follower_Dialogue_15
Devon_Follower_Dialogue_14:
# 329 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Devon_Follower_Dialogue_20
	return

Devon_Follower_Dialogue_12:
# 320 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Surfing_2, type = MSGBOX_NPC
	return

Devon_Follower_Dialogue_15:
# 327 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Luxury, type = MSGBOX_NPC
	goto Devon_Follower_Dialogue_14

Devon_Follower_Dialogue_17:
# 335 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_LetsGoToExit, type = MSGBOX_NPC
	return

Devon_Follower_Dialogue_20:
# 330 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_Luxury_2, type = MSGBOX_NPC
	return

Devon_Follower_Dialogue_22:
# 339 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox Devon_NotGoingBackDown, type = MSGBOX_NPC
	return


Devon_Mark_Spots_SignText::
# 205 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "There's an indentation in the wall,\n"
	.string "as if someone is trying to mark their\l"
	.string "tracks...$"

Devon_Confused_Text1::
# 210 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "???: Down to my last Potion...\n"
	.string "And I don't have any berries left\l"
	.string "either... This isn't good...$"

Devon_Confused_Text2::
# 216 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I'm not even sure I remember the way\n"
	.string "out.$"

Devon_Confused_Text3::
# 220 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Wasn't it over there?$"

Devon_Confused_Text4::
# 224 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "No, that was a dead-end...$"

Devon_Confused_Text5::
# 228 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "All right... Don't panic. Stay calm... Don't\n"
	.string "panic...$"

Devon_Sees_Player_Text::
# 233 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "???: Hey!\p"
	.string "Phew, what a relief!\p"
	.string "I've been down here the whole day and I\n"
	.string "haven't seen a single person... I'm\l"
	.string "embarrassed to say it, but I think I'm\l"
	.string "lost. Do you know the way out?$"

Devon_Question_Yes::
# 241 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Oh, wonderful! That's a relief.\p"
	.string "There's still the problem of actually\n"
	.string "making it there, though... I've run out\l"
	.string "of pretty much all my travelling\l"
	.string "supplies.$"

Devon_Question_No::
# 247 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Hmm. So it seems we're both lost...\p"
	.string "Aside from that, I'm not even sure how\n"
	.string "I'll make it anywhere. I've run out of\l"
	.string "pretty much all my travelling supplies.$"

Devon_Ask_To_Tag_Along::
# 253 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "… … … … … …\p"
	.string "A Golden Repel?\n"
	.string "Huh, I've never heard of that...\l"
	.string "And you're saying it can repel any wild\l"
	.string "POKeMON? That's mind-boggling!\p"
	.string "Would it be all right if I tagged along\n"
	.string "with you?$"

Devon_I_Would_Mind::
# 261 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Oh, but please! I don't think I can make\n"
	.string "it out on my own like this... I promise I\l"
	.string "won't be a burden!\n"
	.string "Could I please come with you?$"

Devon_Nice_To_Meet_You::
# 266 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Thank you so much!\n"
	.string "By the way, my name's DEVON STONE.\p"
	.string "I'm an ore miner by profession. My\n"
	.string "POKeMON here is BELDUM, but we're more\l"
	.string "like travelling companions than battle\l"
	.string "partners.\p"
	.string "And you?\p"
	.string "… … … … … …\p"
	.string "Ah, so you're {PLAYER}. Nice to meet\n"
	.string "you!$"

Devon_LetsGo::
# 276 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: All right, I'm ready! I'll be right\n"
	.string "behind you.\p"
	.string "I guess that GOLDEN REPEL will protect\n"
	.string "us from all wild POKeMON. I don't think\l"
	.string "there are any trainers here, but if we\l"
	.string "run into any, I'll do my best to help.$"

Devon_Luxury::
# 282 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: I quit my job a few months ago,\n"
	.string "so I'm not sure if I can still call myself\l"
	.string "an ore miner...\p"
	.string "I just needed to take some time off to\n"
	.string "think.\p"
	.string "Heh... I guess in such a fast-moving\n"
	.string "world, that's becoming a bit of a luxury.$"

Devon_Luxury_2::
# 288 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: So, are you from RUSTBORO,\n"
	.string "{PLAYER}?\p"
	.string "… … … … … …\p"
	.string "That's all right, I understand you don't\n"
	.string "want to give too many details. We just\l"
	.string "met, after all.$"

Devon_Surfing_1::
# 294 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: We're surfing! We're actually\n"
	.string "surfing!$"

Devon_Surfing_2::
# 298 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: I probably shouldn't have\n"
	.string "climbed that waterfall...\p"
	.string "I'd have no idea how to get down by\n"
	.string "myself.$"

Devon_LetsGoToExit::
# 304 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: Let's go!$"

Devon_NotGoingBackDown::
# 308 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "DEVON: We're not going down there if\n"
	.string "there are people chasing you. Let's find\l"
	.string "another path.$"
