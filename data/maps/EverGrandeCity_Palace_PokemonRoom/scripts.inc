# 1 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
.set LOCALID_FATHER, 1
# 3 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"

# 4 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_MapScripts::
# 5 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_Palace_PokemonRoom_OnFrame
# 6 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Palace_PokemonRoom_OnWarp
# 7 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_OnFrame:
# 10 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
    map_script_2 VAR_EVERGRANDE_INTRO_STATE, 4, EverGrandeCity_Palace_PokemonRoom_Intro_FatherGiveMon
# 11 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"

# 13 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_OnWarp:
# 14 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
    map_script_2 VAR_EVERGRANDE_INTRO_STATE, 7, EverGrandeCity_Palace_PokemonRoom_MoveFatherAndHideScientists
# 15 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
    map_script_2 VAR_EVERGRANDE_INTRO_STATE, 8, EverGrandeCity_Palace_PokemonRoom_MoveFatherAndHideScientists
# 16 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.2byte 0

EverGrandeCity_Palace_PokemonRoom_Intro_FatherGiveMon::
# 20 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	special SpawnCameraObject
# 21 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, Mvmt_GoIntoRoom_Father
# 22 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Mvmt_GoIntoRoom_Player
# 23 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mvmt_GoIntoRoom_Player
# 24 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 25 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_Give_Pokemon_Text_1, type = MSGBOX_DEFAULT
# 26 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	special RemoveCameraObject
# 27 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 5
	return


PokemonRoom_EventScript_Father::
# 31 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 32 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	switch VAR_EVERGRANDE_INTRO_STATE
# 33 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	case 5, PokemonRoom_EventScript_Father_3
# 35 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	case 6, PokemonRoom_EventScript_Father_4
# 37 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	case 7, PokemonRoom_EventScript_Father_5
PokemonRoom_EventScript_Father_1:
# 40 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return

PokemonRoom_EventScript_Father_3:
# 34 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 6
	goto PokemonRoom_EventScript_Father_1

PokemonRoom_EventScript_Father_4:
# 36 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Father_Text_0, type = MSGBOX_NPC
	goto PokemonRoom_EventScript_Father_1

PokemonRoom_EventScript_Father_5:
# 38 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_AfterGotPokemon_DefaultDialogue, type = MSGBOX_NPC
	goto PokemonRoom_EventScript_Father_1


PokemonRoom_EventScript_Father_2::
# 44 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 45 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox EverGrandeCity_Palace_PokemonRoom_Father_Contemplative_Text, type = MSGBOX_NPC
# 46 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


MovePlayerBackIntoRoom::
# 50 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 51 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox MovePlayerBackIntoRoom_Text_0, type = MSGBOX_AUTOCLOSE
# 52 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
# 53 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBackIntoRoom
# 54 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


PokemonRoom_EventScript_Ninetales::
# 59 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 60 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
# 61 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_EVERGRANDE_INTRO_STATE, 6
	goto_if_eq PokemonRoom_EventScript_Ninetales_2
# 100 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_NORMAL
# 101 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_3, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
PokemonRoom_EventScript_Ninetales_1:
# 104 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 105 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	end

PokemonRoom_EventScript_Ninetales_2:
# 62 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 63 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_NINETALES, CRY_MODE_NORMAL
# 64 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	showmonpic SPECIES_NINETALES, 10, 3
# 65 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_0, MSGBOX_YESNO
# 66 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
# 67 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_EventScript_Ninetales_6
# 94 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 95 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_NotChosen
PokemonRoom_EventScript_Ninetales_5:
# 97 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
	goto PokemonRoom_EventScript_Ninetales_1

PokemonRoom_EventScript_Ninetales_6:
# 68 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	givemon SPECIES_NINETALES, 5, ITEM_MASTER_BALL, ITEM_CHERISH_BALL, isShiny = TRUE, nature = NATURE_TIMID, speedEv = 252, spAtkEv = 252, spDefEv = 4, spAtkIv = 31, speedIv = 31, move1 = MOVE_FLAMETHROWER, move2 = MOVE_QUICK_ATTACK, move3 = MOVE_TAIL_WHIP, move4 = MOVE_CONFUSE_RAY
# 69 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PokemonRoom_EventScript_Ninetales_10
# 78 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PokemonRoom_EventScript_Ninetales_11
# 87 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 88 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_2
PokemonRoom_EventScript_Ninetales_9:
# 90 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Ninetales
# 91 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call EverGrandeCity_Palace_PokemonRoom_Father_Congratulations
	goto PokemonRoom_EventScript_Ninetales_5

PokemonRoom_EventScript_Ninetales_10:
# 70 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_1
# 72 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 4
# 73 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_NINETALES
# 74 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 75 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 7
# 76 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknamePartyMon
	goto PokemonRoom_EventScript_Ninetales_9

PokemonRoom_EventScript_Ninetales_11:
# 79 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_1
# 81 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 4
# 82 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_NINETALES
# 83 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 84 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknameBoxMon
	goto PokemonRoom_EventScript_Ninetales_9


PokemonRoom_EventScript_Swablu::
# 110 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 111 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
# 112 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_EVERGRANDE_INTRO_STATE, 6
	goto_if_eq PokemonRoom_EventScript_Swablu_2
# 152 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_SWABLU, CRY_MODE_NORMAL
# 153 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Swablu_Text_2, MSGBOX_DEFAULT
# 154 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
PokemonRoom_EventScript_Swablu_1:
# 156 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 157 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	end

PokemonRoom_EventScript_Swablu_2:
# 113 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 114 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_ALTARIA, CRY_MODE_NORMAL
# 115 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	showmonpic SPECIES_ALTARIA, 10, 3
# 116 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Swablu_Text_0, MSGBOX_YESNO
# 117 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
# 118 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_EventScript_Swablu_6
# 146 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 147 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_NotChosen
PokemonRoom_EventScript_Swablu_5:
# 149 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
	goto PokemonRoom_EventScript_Swablu_1

PokemonRoom_EventScript_Swablu_6:
# 119 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	givemon SPECIES_ALTARIA, 5, ITEM_MASTER_BALL, ITEM_CHERISH_BALL, isShiny = TRUE, nature = NATURE_ADAMANT, atkEv = 252, spDefEv = 4, speedEv = 252, atkIv = 31, speedIv = 31, move1 = MOVE_DRAGON_BREATH, move2 = MOVE_PECK, move3 = MOVE_MIST, move4 = MOVE_DISARMING_VOICE
# 120 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PokemonRoom_EventScript_Swablu_10
# 130 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PokemonRoom_EventScript_Swablu_11
# 139 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 140 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_2
PokemonRoom_EventScript_Swablu_9:
# 142 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Swablu
# 143 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call EverGrandeCity_Palace_PokemonRoom_Father_Congratulations
	goto PokemonRoom_EventScript_Swablu_5

PokemonRoom_EventScript_Swablu_10:
# 121 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Swablu_Text_1
# 123 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 9
# 124 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_SWABLU
# 125 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 126 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 7
# 127 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknamePartyMon
	goto PokemonRoom_EventScript_Swablu_9

PokemonRoom_EventScript_Swablu_11:
# 131 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 132 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Swablu_Text_1
# 133 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 9
# 134 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_SWABLU
# 135 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 136 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknameBoxMon
	goto PokemonRoom_EventScript_Swablu_9


PokemonRoom_EventScript_Milotic::
# 162 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 163 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
# 164 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_EVERGRANDE_INTRO_STATE, 6
	goto_if_eq PokemonRoom_EventScript_Milotic_2
# 203 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_MILOTIC, CRY_MODE_NORMAL
# 204 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Milotic_Text_2, MSGBOX_DEFAULT
# 205 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
PokemonRoom_EventScript_Milotic_1:
# 207 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 208 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	end

PokemonRoom_EventScript_Milotic_2:
# 165 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 166 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_MILOTIC, CRY_MODE_NORMAL
# 167 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	showmonpic SPECIES_MILOTIC, 10, 3
# 168 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Milotic_Text_0, MSGBOX_YESNO
# 169 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
# 170 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_EventScript_Milotic_6
# 197 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 198 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_NotChosen
PokemonRoom_EventScript_Milotic_5:
# 200 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
	goto PokemonRoom_EventScript_Milotic_1

PokemonRoom_EventScript_Milotic_6:
# 171 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	givemon SPECIES_MILOTIC, 5, ITEM_MASTER_BALL, ITEM_CHERISH_BALL, isShiny = TRUE, nature = NATURE_MODEST, atkEv = 252, spDefEv = 4, speedEv = 252, atkIv = 31, speedIv = 31, move1 = MOVE_WATER_PULSE, move2 = MOVE_MIRROR_COAT, move3 = MOVE_WRAP, move4 = MOVE_TACKLE
# 172 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PokemonRoom_EventScript_Milotic_10
# 181 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PokemonRoom_EventScript_Milotic_11
# 190 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 191 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_2
PokemonRoom_EventScript_Milotic_9:
# 193 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Milotic
# 194 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call EverGrandeCity_Palace_PokemonRoom_Father_Congratulations
	goto PokemonRoom_EventScript_Milotic_5

PokemonRoom_EventScript_Milotic_10:
# 173 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Milotic_Text_1
# 175 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 11
# 176 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_MILOTIC
# 177 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 178 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 7
# 179 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknamePartyMon
	goto PokemonRoom_EventScript_Milotic_9

PokemonRoom_EventScript_Milotic_11:
# 182 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 183 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Milotic_Text_1
# 184 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 11
# 185 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_MILOTIC
# 186 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 187 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknameBoxMon
	goto PokemonRoom_EventScript_Milotic_9


PokemonRoom_EventScript_Umbreon::
# 213 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 214 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
# 215 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_EVERGRANDE_INTRO_STATE, 6
	goto_if_eq PokemonRoom_EventScript_Umbreon_2
# 254 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_UMBREON, CRY_MODE_NORMAL
# 255 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Umbreon_Text_2, MSGBOX_DEFAULT
# 256 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
PokemonRoom_EventScript_Umbreon_1:
# 258 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 259 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	end

PokemonRoom_EventScript_Umbreon_2:
# 216 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 217 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_UMBREON, CRY_MODE_NORMAL
# 218 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	showmonpic SPECIES_UMBREON, 10, 3
# 219 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Umbreon_Text_0, MSGBOX_YESNO
# 220 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
# 221 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_EventScript_Umbreon_6
# 248 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 249 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_NotChosen
PokemonRoom_EventScript_Umbreon_5:
# 251 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
	goto PokemonRoom_EventScript_Umbreon_1

PokemonRoom_EventScript_Umbreon_6:
# 222 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	givemon SPECIES_UMBREON, 5, ITEM_MASTER_BALL, ITEM_CHERISH_BALL, isShiny = TRUE, nature = NATURE_MODEST, atkEv = 252, spDefEv = 4, speedEv = 252, atkIv = 31, speedIv = 31, move1 = MOVE_BITE, move2 = MOVE_SWIFT, move3 = MOVE_SAND_ATTACK, move4 = MOVE_SNARL
# 223 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PokemonRoom_EventScript_Umbreon_10
# 232 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PokemonRoom_EventScript_Umbreon_11
# 241 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 242 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_2
PokemonRoom_EventScript_Umbreon_9:
# 244 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Umbreon
# 245 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call EverGrandeCity_Palace_PokemonRoom_Father_Congratulations
	goto PokemonRoom_EventScript_Umbreon_5

PokemonRoom_EventScript_Umbreon_10:
# 224 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 225 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Umbreon_Text_1
# 226 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 12
# 227 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_UMBREON
# 228 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 229 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 7
# 230 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknamePartyMon
	goto PokemonRoom_EventScript_Umbreon_9

PokemonRoom_EventScript_Umbreon_11:
# 233 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 234 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Umbreon_Text_1
# 235 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 12
# 236 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_UMBREON
# 237 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 238 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknameBoxMon
	goto PokemonRoom_EventScript_Umbreon_9


PokemonRoom_EventScript_Alcremie::
# 265 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 266 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
# 267 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_EVERGRANDE_INTRO_STATE, 6
	goto_if_eq PokemonRoom_EventScript_Alcremie_2
# 306 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_ALCREMIE, CRY_MODE_NORMAL
# 307 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Alcremie_Text_2, MSGBOX_DEFAULT
# 308 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
PokemonRoom_EventScript_Alcremie_1:
# 310 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 311 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	end

PokemonRoom_EventScript_Alcremie_2:
# 268 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 269 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_ALCREMIE, CRY_MODE_NORMAL
# 270 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	showmonpic SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, 10, 3
# 271 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Alcremie_Text_0, MSGBOX_YESNO
# 272 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
# 273 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_EventScript_Alcremie_6
# 300 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 301 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_NotChosen
PokemonRoom_EventScript_Alcremie_5:
# 303 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
	goto PokemonRoom_EventScript_Alcremie_1

PokemonRoom_EventScript_Alcremie_6:
# 274 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	givemon SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM, 5, ITEM_MASTER_BALL, ITEM_CHERISH_BALL, isShiny = TRUE, nature = NATURE_MODEST, atkEv = 252, spDefEv = 4, speedEv = 252, atkIv = 31, speedIv = 31
# 275 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PokemonRoom_EventScript_Alcremie_10
# 284 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PokemonRoom_EventScript_Alcremie_11
# 293 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 294 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_2
PokemonRoom_EventScript_Alcremie_9:
# 296 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Alcremie
# 297 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call EverGrandeCity_Palace_PokemonRoom_Father_Congratulations
	goto PokemonRoom_EventScript_Alcremie_5

PokemonRoom_EventScript_Alcremie_10:
# 276 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 277 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Alcremie_Text_1
# 278 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 13
# 279 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_ALCREMIE
# 280 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 281 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 7
# 282 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknamePartyMon
	goto PokemonRoom_EventScript_Alcremie_9

PokemonRoom_EventScript_Alcremie_11:
# 285 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 286 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Alcremie_Text_1
# 287 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 13
# 288 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_ALCREMIE
# 289 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 290 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknameBoxMon
	goto PokemonRoom_EventScript_Alcremie_9


PokemonRoom_EventScript_Lilligant::
# 317 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 318 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
# 319 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_EVERGRANDE_INTRO_STATE, 6
	goto_if_eq PokemonRoom_EventScript_Lilligant_2
# 359 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_LILLIGANT, CRY_MODE_NORMAL
# 360 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Lilligant_Text_2, MSGBOX_DEFAULT
# 361 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
PokemonRoom_EventScript_Lilligant_1:
# 363 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 364 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	end

PokemonRoom_EventScript_Lilligant_2:
# 320 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 321 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 322 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	showmonpic SPECIES_GARDEVOIR, 10, 3
# 323 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Lilligant_Text_0, MSGBOX_YESNO
# 324 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmoncry
# 325 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_EventScript_Lilligant_6
# 353 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 354 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_NotChosen
PokemonRoom_EventScript_Lilligant_5:
# 356 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitmessage
	goto PokemonRoom_EventScript_Lilligant_1

PokemonRoom_EventScript_Lilligant_6:
# 326 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	givemon SPECIES_GARDEVOIR, 5, ITEM_SUN_STONE, ITEM_CHERISH_BALL, isShiny = TRUE, nature = NATURE_MODEST, atkEv = 252, spDefEv = 4, speedEv = 252, atkIv = 31, speedIv = 31, move1 = MOVE_DAZZLING_GLEAM, move2 = MOVE_CALM_MIND, move3 = MOVE_WISH, move4 = MOVE_MAGICAL_LEAF
# 327 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PokemonRoom_EventScript_Lilligant_10
# 337 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PokemonRoom_EventScript_Lilligant_11
# 346 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 347 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Ninetales_Text_2
PokemonRoom_EventScript_Lilligant_9:
# 349 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Lilligant
# 350 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call EverGrandeCity_Palace_PokemonRoom_Father_Congratulations
	goto PokemonRoom_EventScript_Lilligant_5

PokemonRoom_EventScript_Lilligant_10:
# 328 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 329 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Lilligant_Text_1
# 330 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 10
# 331 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_LILLIGANT
# 332 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 333 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 7
# 334 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknamePartyMon
	goto PokemonRoom_EventScript_Lilligant_9

PokemonRoom_EventScript_Lilligant_11:
# 338 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 339 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_EventScript_Lilligant_Text_1
# 340 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 10
# 341 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_LILLIGANT
# 342 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 343 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call PokemonRoom_NicknameBoxMon
	goto PokemonRoom_EventScript_Lilligant_9


PokemonRoom_NicknamePartyMon::
# 370 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 371 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 372 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_NicknamePartyMon_1
	return

PokemonRoom_NicknamePartyMon_1:
# 373 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 374 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


PokemonRoom_NicknameBoxMon::
# 379 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_NicknamePartyMon_Text_0, MSGBOX_YESNO
# 380 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	hidemonpic
# 381 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokemonRoom_NicknameBoxMon_2
PokemonRoom_NicknameBoxMon_1:
# 384 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

PokemonRoom_NicknameBoxMon_2:
# 382 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto PokemonRoom_NicknameBoxMon_1


EverGrandeCity_Palace_PokemonRoom_Father_Congratulations::
# 388 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_Received_Pokemon_Text, MSGBOX_NPC
# 389 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	playse SE_APPLAUSE
# 390 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	waitse
# 391 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_Received_Pokemon_Text_2, MSGBOX_NPC
# 392 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	applymovement LOCALID_FATHER, EverGrandeCity_Palace_PokemonRoom_Movement_Father_TurnsAround
# 393 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Father_Received_Pokemon_Text_3, MSGBOX_NPC
	return


PokemonRoom_Scientist1::
# 397 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 398 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Scientist1_Dialogue, type = MSGBOX_NPC
# 399 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


PokemonRoom_Scientist2::
# 403 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 404 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Scientist2_Dialogue, type = MSGBOX_NPC
# 405 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


PokemonRoom_Scientist3::
# 409 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 410 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Scientist3_Dialogue, type = MSGBOX_NPC
# 411 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


PokemonRoom_Scientist4::
# 415 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 416 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Scientist4_Dialogue, type = MSGBOX_NPC
# 417 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


PokemonRoom_Scientist5::
# 421 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 422 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Scientist5_Dialogue, type = MSGBOX_NPC
# 423 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_PokemonRoom_MoveFatherAndHideScientists::
# 428 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_PKMNROOM_MAIN_FATHER
# 429 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject LOCALID_FATHER
# 430 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	clearflag FLAG_HIDE_PKMNROOM_PORTRAIT_FATHER
# 431 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	addobject 14
# 433 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 2
# 434 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 3
# 435 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 4
# 436 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 5
# 437 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 6
# 438 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 7
# 439 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 8
# 440 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 9
# 441 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 10
# 442 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 11
# 443 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 12
# 444 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	removeobject 13
# 445 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_NINETALES
# 446 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_MILOTIC
# 447 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_SWABLU
# 448 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_ALCREMIE
# 449 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_LILLIGANT
# 450 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	setflag FLAG_HIDE_UMBREON
	return


PokemonRoom_Scientist6::
# 454 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	lockall
# 455 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	msgbox PokemonRoom_Scientist6_Dialogue, type = MSGBOX_NPC
# 456 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	releaseall
	return


# 459 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
Mvmt_GoIntoRoom_Player:
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 460 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 461 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_right
# 462 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 463 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	face_left
	step_end

# 466 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
Mvmt_GoIntoRoom_Father:
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 467 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
# 468 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	face_right
	step_end

# 471 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
GoBackIntoRoom:
# 472 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_up
	step_end

# 475 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Ninetales:
# 476 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 476 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 477 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	face_left
	step_end

# 480 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Milotic:
# 481 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 481 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 482 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_right
	step_end

# 485 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Swablu:
# 486 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 486 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 486 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 486 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 487 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	face_left
	step_end

# 490 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Umbreon:
# 491 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 491 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 491 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 491 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 492 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_right
	step_end

# 495 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Lilligant:
# 496 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 496 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 496 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 496 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 496 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 496 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 497 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	face_left
	step_end

# 500 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_FatherTo_Alcremie:
# 501 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 501 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 501 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 501 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 501 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 501 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_down
# 502 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_right
	step_end

# 505 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
EverGrandeCity_Palace_PokemonRoom_Movement_Father_TurnsAround:
# 506 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	walk_in_place_up
# 507 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	faceplayer
	step_end

PokemonRoom_EventScript_Father_Text_0:
# 36 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "FATHER: Choose, my child!$"

MovePlayerBackIntoRoom_Text_0:
# 51 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "(I should choose something, at least to\n"
	.string "make Father happy...)$"

PokemonRoom_EventScript_Ninetales_Text_0:
# 65 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Do you want to choose Ninetales?$"

PokemonRoom_EventScript_Ninetales_Text_1:
# 71 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "{PLAYER} chose Ninetales!$"

PokemonRoom_EventScript_Ninetales_Text_2:
# 88 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "No More Room$"

PokemonRoom_EventScript_Ninetales_Text_3:
# 101 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "NINETALES: Nine nine!$"

PokemonRoom_EventScript_Swablu_Text_0:
# 116 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Do you want to choose Altaria?$"

PokemonRoom_EventScript_Swablu_Text_1:
# 122 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "{PLAYER} chose Altaria!$"

PokemonRoom_EventScript_Swablu_Text_2:
# 153 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "SWABLU: Wablu!$"

PokemonRoom_EventScript_Milotic_Text_0:
# 168 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Do you want to choose Milotic?$"

PokemonRoom_EventScript_Milotic_Text_1:
# 174 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "{PLAYER} chose Milotic!$"

PokemonRoom_EventScript_Milotic_Text_2:
# 204 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "MILOTIC: Lo lo!$"

PokemonRoom_EventScript_Umbreon_Text_0:
# 219 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Do you want to choose Umbreon?$"

PokemonRoom_EventScript_Umbreon_Text_1:
# 225 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "{PLAYER} chose Umbreon!$"

PokemonRoom_EventScript_Umbreon_Text_2:
# 255 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "UMBREON: Reo!$"

PokemonRoom_EventScript_Alcremie_Text_0:
# 271 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Do you want to choose Alcremie?$"

PokemonRoom_EventScript_Alcremie_Text_1:
# 277 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "{PLAYER} chose Alcremie!$"

PokemonRoom_EventScript_Alcremie_Text_2:
# 307 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "ALCREMIE: Allii!$"

PokemonRoom_EventScript_Lilligant_Text_0:
# 323 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Do you want to choose Gardevoir?$"

PokemonRoom_EventScript_Lilligant_Text_1:
# 329 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "{PLAYER} chose Lilligant!$"

PokemonRoom_EventScript_Lilligant_Text_2:
# 360 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "GARDEVOIR: Raa ra!$"

PokemonRoom_NicknamePartyMon_Text_0:
# 370 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Bestow a nickname?$"

PokemonRoom_Father_NotChosen::
# 510 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "You did not choose the Pokemon.$"

PokemonRoom_Father_Give_Pokemon_Text_1::
# 514 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "FATHER: I've had these POKeMON bred\n"
	.string "just for you, {PLAYER}.\p"
	.string "All of them have optimal aesthetics and\n"
	.string "characteristics for their species, as\l"
	.string "our world-class BREEDERS have ensured.\l"
	.string "Choose one, my child!$"

PokemonRoom_Father_Received_Pokemon_Text::
# 522 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "FATHER: Wonderful! Congratulations, my\n"
	.string "dear {PLAYER}! I think you've made a\l"
	.string "good choice. Your auras, they seem\l"
	.string "connected somehow. May you and your\l"
	.string "POKeMON discover the world together.\l"
	.string "May you feel its ground beneath your\l"
	.string "own feet, and behold its sights with\l"
	.string "your own eyes!$"

PokemonRoom_Father_Received_Pokemon_Text_2::
# 531 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "FATHER: Make sure to visit the Shrine\n"
	.string "of Jirachi and cast your own wish as\l"
	.string "well.$"

PokemonRoom_Father_Received_Pokemon_Text_3::
# 537 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "In the meantime, we will continue\n"
	.string "preparing for the dinner banquet.\l"
	.string "Friends and colleagues from all over\l"
	.string "HOENN are making their way here.\l"
	.string "{PLAYER}, perhaps you might take a\l"
	.string "walk around the city and meet some of\l"
	.string "them!$"

PokemonRoom_Father_AfterGotPokemon_DefaultDialogue::
# 545 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "FATHER: Friends and colleagues from all\n"
	.string "over HOENN are making their way here\l"
	.string "for the evening banquet. {PLAYER},\l"
	.string "perhaps you might take a walk around\l"
	.string "the city and meet some of them!$"

PokemonRoom_Scientist1_Dialogue::
# 552 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "I know hubris is a vice, but...\p"
	.string "We're the best breeders in the world!$"

PokemonRoom_Scientist2_Dialogue::
# 557 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "This work was only possible because we\n"
	.string "have access to the most modern,\l"
	.string "high-tech care facilities for the\l"
	.string "POkeMON.$"

PokemonRoom_Scientist3_Dialogue::
# 561 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "My previous workplace wasn't\n"
	.string "well-funded, so I was limited in what I\l"
	.string "could do.\p"
	.string "But here, I'm flourishing!$"

PokemonRoom_Scientist4_Dialogue::
# 566 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "This was a remarkable feat indeed!$"

PokemonRoom_Scientist5_Dialogue::
# 570 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "The KING spared no expense!$"

PokemonRoom_Scientist6_Dialogue::
# 574 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "Why does it look so much like ice\n"
	.string "cream...?$"

EverGrandeCity_Palace_PokemonRoom_Father_Contemplative_Text::
# 578 "data/maps/EverGrandeCity_Palace_PokemonRoom/scripts.pory"
	.string "FATHER: You remind me so much of your\n"
	.string "mother, you know...$"
