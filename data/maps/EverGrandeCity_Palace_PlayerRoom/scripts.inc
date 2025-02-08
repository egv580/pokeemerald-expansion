# 1 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
.set LOCALID_FATHER, 5
# 3 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"

# 4 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_MapScripts::
# 5 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PlayerRoom_OnFrame
# 6 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_PlayerRoom_OnFrame:
# 9 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
    map_script_2 VAR_EVERGRANDE_INTRO_STATE, 0, EverGrandeCity_Palace_PlayerRoom_Script_Maid1_Tea
# 10 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.2byte 0

EverGrandeCity_Palace_PlayerRoom_Script_Maid1_Tea::
# 15 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 16 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 17 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 30
# 18 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_Intro_Player_FaceTable
# 19 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement 0
# 20 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 21 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement 3, EverGrandeCity_Intro_Maid_Tea_Movement
# 22 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement 3
# 23 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Maid1_Intro_1, type = MSGBOX_DEFAULT
# 24 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 1
# 25 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid1::
# 29 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	switch VAR_EVERGRANDE_INTRO_STATE
# 30 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	case 1, EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid1_2
# 31 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	case 2, EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid1_2
# 35 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Maid1_Text, type = MSGBOX_NPC
	return

EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid1_2:
# 32 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid1_Text_0, type = MSGBOX_NPC
	return


EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid2::
# 40 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Maid2_Text, type = MSGBOX_NPC
	return


EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid3::
# 44 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 45 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid3_Text_0, type = MSGBOX_NPC
# 46 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_CheckDesk::
# 50 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 51 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	switch VAR_EVERGRANDE_INTRO_STATE
# 52 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	case 2, EverGrandeCity_Palace_PlayerRoom_CheckDesk_3
# 63 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_CheckDeskDefault, MSGBOX_AUTOCLOSE
EverGrandeCity_Palace_PlayerRoom_CheckDesk_1:
# 65 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return

EverGrandeCity_Palace_PlayerRoom_CheckDesk_3:
# 53 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_CheckDesk1, MSGBOX_AUTOCLOSE
# 54 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 55 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 56 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 57 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 58 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	register_matchcall TRAINER_WALLACE
# 59 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	special SetUnlockedPokedexFlags
# 60 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 3
	goto EverGrandeCity_Palace_PlayerRoom_CheckDesk_1


EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald::
# 69 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 70 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	faceplayer
# 71 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_0, type = MSGBOX_NPC
# 72 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 73 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	giveitem ITEM_EMERALD, 1
# 74 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 75 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_1, type = MSGBOX_NPC
# 76 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	giveitem ITEM_GOLDEN_REPEL, 1
# 77 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_2, type = MSGBOX_NPC
# 78 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	giveitem ITEM_FAKE_EMERALD, 1
# 79 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_3, type = MSGBOX_NPC
# 80 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	giveitem ITEM_FLOATY_BALLOON, 1
# 81 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 82 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_FatherEnters_1::
# 86 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 87 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 88 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	addobject LOCALID_FATHER
# 89 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	clearflag FLAG_HIDE_PLAYERROOM_FATHER
# 90 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitse
# 91 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 92 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_1
# 93 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 2
# 94 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 95 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Father_GoodMorning, type = MSGBOX_NPC
# 96 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 97 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_1_Reverse
# 98 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 99 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 100 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 101 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	removeobject LOCALID_FATHER
# 102 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_HIDE_PLAYERROOM_FATHER
# 103 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_FatherEnters_2::
# 107 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 108 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 109 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	addobject LOCALID_FATHER
# 110 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	clearflag FLAG_HIDE_PLAYERROOM_FATHER
# 111 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitse
# 112 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 113 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_2
# 114 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 2
# 115 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 116 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Father_GoodMorning, type = MSGBOX_NPC
# 117 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 118 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_2_Reverse
# 119 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 120 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 121 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 122 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	removeobject LOCALID_FATHER
# 123 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_HIDE_PLAYERROOM_FATHER
# 124 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_FatherEnters_3::
# 128 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 129 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 130 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	addobject LOCALID_FATHER
# 131 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	clearflag FLAG_HIDE_PLAYERROOM_FATHER
# 132 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitse
# 133 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 134 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_3
# 135 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 2
# 136 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 137 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Father_GoodMorning, type = MSGBOX_NPC
# 138 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 139 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_3_Reverse
# 140 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 141 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 142 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 143 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	removeobject LOCALID_FATHER
# 144 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_HIDE_PLAYERROOM_FATHER
# 145 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_FatherEnters_4::
# 149 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 150 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 151 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	addobject LOCALID_FATHER
# 152 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	clearflag FLAG_HIDE_PLAYERROOM_FATHER
# 153 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitse
# 154 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 155 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_4
# 156 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 2
# 157 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 158 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_Father_GoodMorning, type = MSGBOX_NPC
# 159 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmessage
# 160 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_4_Reverse
# 161 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement LOCALID_FATHER
# 162 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	delay 10
# 163 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	playse SE_EXIT
# 164 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	removeobject LOCALID_FATHER
# 165 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	setflag FLAG_HIDE_PLAYERROOM_FATHER
# 166 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PlayerRoom_MovePlayerBackInside::
# 170 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	lockall
# 171 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_Palace_PlayerRoom_Movement_GoBackInside
# 172 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	waitmovement 0
# 173 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PlayerRoom_MovePlayerBackInside_Text_0, type = MSGBOX_AUTOCLOSE
# 174 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	releaseall
	return


# 178 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_GoBackInside:
# 179 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
	step_end

# 182 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_1:
# 183 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 183 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 183 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_left
# 185 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_in_place_up
	step_end

# 188 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_1_Reverse:
# 189 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_right
# 190 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 190 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 190 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
	step_end

# 193 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_2:
# 194 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 194 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 194 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_2_Reverse:
# 198 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 198 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 198 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
	step_end

# 201 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_3:
# 202 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 202 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 202 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 203 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_right
# 204 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_in_place_up
	step_end

# 207 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_3_Reverse:
# 208 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_left
# 209 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 209 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 209 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
	step_end

# 212 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_4:
# 213 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_up
# 214 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_right
# 214 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_right
# 215 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_in_place_up
	step_end

# 218 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Palace_PlayerRoom_Movement_Intro_FatherEnters_4_Reverse:
# 219 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_left
# 219 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_left
# 220 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 220 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
# 220 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_down
	step_end

# 223 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Intro_Maid_Tea_Movement:
# 224 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_slow_down
# 225 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_slow_left
# 225 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	walk_slow_left
# 226 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	face_down
	step_end

# 229 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
EverGrandeCity_Intro_Player_FaceTable:
# 230 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	face_right
	step_end

EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid1_Text_0:
# 32 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "Have a wonderful day, PRINCESS!$"

EverGrandeCity_Palace_PlayerRoom_TalkTo_Maid3_Text_0:
# 45 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "Beautifully-decorated surroundings bring out the beauty of the soul.$"

EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_0:
# 71 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "FATHER: Here is the EMERALD, my dear!$"

EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_1:
# 75 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "FATHER: And here is the GOLDEN REPEL!$"

EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_2:
# 77 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "FATHER: And here is the FAKE EMERALD!$"

EverGrandeCity_Palace_PlayerRoom_FatherGiveEmerald_Text_3:
# 79 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "FATHER: And here is the FLOATY BALLOON!$"

EverGrandeCity_Palace_PlayerRoom_MovePlayerBackInside_Text_0:
# 173 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "(I haven't checked my desk yet.)$"

EverGrandeCity_Palace_PlayerRoom_Maid1_Intro_1::
# 233 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "MAID: Is everything to your liking,\n"
	.string "{PLAYER}? This tea was imported from\l"
	.string "Kalos, it's an exquisite blend.\p"
	.string "The cake is sublime as well. A brand-new\n"
	.string "recipe from the chefs.\p"
	.string "… … …\p"
	.string "Is something troubling you today,\n"
	.string "{PLAYER}? You seem lost in thought. …\l"
	.string "… …\p"
	.string "Ah, I understand. Today is your\n"
	.string "coming-of-age day, after all. It's a big\l"
	.string "day for anyone. But especially a\l"
	.string "PRINCESS. Not to worry, Miss {PLAYER},\l"
	.string "everything will go smoothly: The\l"
	.string "banquet, the gala. And I believe your\l"
	.string "father has a surprise for you after\l"
	.string "breakfast.$"

EverGrandeCity_Palace_PlayerRoom_Maid1_Intro_2::
# 244 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "… … …\p"
	.string "Ah, I believe I understand. Today is\n"
	.string "your coming-of-age day, after all. It's\l"
	.string "a big day for anyone. But especially a\l"
	.string "PRINCESS. Not to worry, Miss {PLAYER},\l"
	.string "everything will go smoothly: The\l"
	.string "banquet, the gala. And I believe your\l"
	.string "father has a surprise for you after\l"
	.string "breakfast.$"

EverGrandeCity_Palace_PlayerRoom_Father_GoodMorning::
# 251 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "{PLAYER}! My dear daughter. Did you\n"
	.string "rest well? Are you all set for today?\p"
	.string "Ah, I see you are still having tea. Not\n"
	.string "to worry, I'll be waiting for you\l"
	.string "outside. Come when you're ready!$"

EverGrandeCity_Palace_PlayerRoom_Maid1_Text::
# 257 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "Home is a safe haven from the cruelty\n"
	.string "and tumult of the world.\p"
	.string "You can return here to rest anytime.$"

EverGrandeCity_Palace_PlayerRoom_Maid2_Text::
# 262 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "A child should not want for anything,\n"
	.string "not physically or emotionally. Though\l"
	.string "you have come of age, you will always be\l"
	.string "your father's child.$"

EverGrandeCity_Palace_PlayerRoom_CheckDesk1::
# 267 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "Checked the desk.\p"
	.string "Took the COMMONPLACE JOURNAL, as well\n"
	.string "as the TELEGRAPH BOOK.$"

EverGrandeCity_Palace_PlayerRoom_CheckDeskDefault::
# 272 "data/maps/EverGrandeCity_Palace_PlayerRoom/scripts.pory"
	.string "A beautiful, spacious writing desk.\p"
	.string "$"
