# 1 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"

# 2 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
.set LOCALID_FATHER, 5
# 3 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"

# 4 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
EverGrandeCity_Palace_Hallway_MapScripts::
# 5 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_Palace_Hallway_OnFrame
# 6 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"

# 8 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
EverGrandeCity_Palace_Hallway_OnFrame:
# 9 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
    map_script_2 VAR_EVERGRANDE_INTRO_STATE, 3, EverGrandeCity_PalaceHallway_Script_Father_Intro
# 10 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.2byte 0

PalaceHallway_Talk_Hall_Maid1::
# 14 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	msgbox Text_Hall_Maid1, MSGBOX_NPC
	return


PalaceHallway_Talk_Hall_Maid2::
# 18 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	msgbox Text_Hall_Maid2, MSGBOX_NPC
	return


PalaceHallway_Talk_Door_Maid1::
# 22 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	msgbox Text_Door_Maid1, MSGBOX_NPC
	return


PalaceHallway_Talk_Door_Maid2::
# 26 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	msgbox Text_Door_Maid2, MSGBOX_NPC
	return


PalaceHallway_Temp_Sign::
# 30 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	lockall
# 31 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	msgbox TempSignText
# 32 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	releaseall
	return


EverGrandeCity_PalaceHallway_Script_Father_Intro::
# 36 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	lockall
# 37 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	addobject LOCALID_FATHER
# 38 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	special SpawnCameraObject
# 39 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	applymovement localId = OBJ_EVENT_ID_CAMERA, movements = EverGrandeCity_PalaceHallway_Intro_Movement_Player_1
# 40 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PalaceHallway_Intro_Movement_Player_1
# 41 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 42 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	msgbox EverGrandeCity_PalaceHallway_Text_Father_1, MSGBOX_AUTOCLOSE
# 43 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	waitmessage
# 44 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_PalaceHallway_Intro_Movement_Father_2
# 45 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PalaceHallway_Intro_Movement_Player_2
# 46 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, EverGrandeCity_PalaceHallway_Intro_Movement_Player_2
# 47 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 48 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	special RemoveCameraObject
# 49 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 4
# 50 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_PALACE_POKEMON_ROOM, 6, 19
# 51 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	setflag FLAG_HIDE_HALLWAY_FATHER
# 52 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	removeobject LOCALID_FATHER
# 53 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	releaseall
	return


# 56 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
EverGrandeCity_PalaceHallway_Intro_Movement_Player_1:
# 57 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 57 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 57 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
	step_end

# 60 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
EverGrandeCity_PalaceHallway_Intro_Movement_Player_2:
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 61 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 62 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
# 62 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
# 62 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
	step_end

# 65 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
EverGrandeCity_PalaceHallway_Intro_Movement_Father_2:
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 66 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_right
# 67 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
# 67 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
# 67 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
# 67 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	walk_up
	step_end

Text_Hall_Maid1::
# 70 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "The palace is a safe haven for lost and\n"
	.string "abandoned POKéMON.$"

Text_Hall_Maid2::
# 74 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "The workers who built this palace were\n"
	.string "generously compensated and rewarded\l"
	.string "for their time. It makes me proud to\l"
	.string "work here.$"

Text_Door_Maid1::
# 78 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "Going outside, {PLAYER}? Enjoy your\n"
	.string "day!$"

Text_Door_Maid2::
# 82 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "Greetings, {PLAYER}! The weather\n"
	.string "outside is lovely today!$"

Banquet_Hall_Maid1::
# 86 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "We make sure that the leftovers from\n"
	.string "each meal go to stray POKeMON who have\l"
	.string "nothing else to eat.$"

TempSignText::
# 90 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "Return to LittleRoot here.$"

EverGrandeCity_PalaceHallway_Text_Father_1::
# 94 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "{PLAYER}! I see you're already to go.\n"
	.string "Come with me.$"

EverGrandeCity_PalaceHallway_Father_Intro::
# 98 "data/maps/EverGrandeCity_Palace_Hallway/scripts.pory"
	.string "{PLAYER}. I would go to any lengths to\n"
	.string "give you any gift you desired for your\l"
	.string "birthday. But for this most special\l"
	.string "occasion, I thought of a particularly\l"
	.string "special gift. You have grown up in this\l"
	.string "palace, where I have striven to provide\l"
	.string "you with everything you need. But one\l"
	.string "thing I cannot help but notice is that\l"
	.string "you never did have a close friend. For\l"
	.string "this reason, I've decided to give you a\l"
	.string "POKeMON. It will be your very first. You\l"
	.string "will be Queen of Ever Grande someday,\l"
	.string "and a queen must be well-travelled. And\l"
	.string "travelling is best done with someone by\l"
	.string "your side. May you and your POKeMON\l"
	.string "discover the world together!$"
