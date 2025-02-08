# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts::
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_OnLoad
# 13 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 14 "data/maps/RustboroCity/scripts.pory"

# 15 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnLoad:
# 16 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_DEVON, RustboroCity_EventScript_LockDevonsDoor
# 17 "data/maps/RustboroCity/scripts.pory"
	call_if_set FLAG_MET_DEVON, RustboroCity_EventScript_OpenDevonsDoor
# 18 "data/maps/RustboroCity/scripts.pory"
	end
# 19 "data/maps/RustboroCity/scripts.pory"

# 20 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 21 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 22 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 24 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 25 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 26 "data/maps/RustboroCity/scripts.pory"
	end
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LockDevonsDoor::
# 29 "data/maps/RustboroCity/scripts.pory"
	setmetatile 19, 56, METATILE_Sootopolis_Door_Closed, TRUE
# 30 "data/maps/RustboroCity/scripts.pory"
	return
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_OpenDevonsDoor::
# 33 "data/maps/RustboroCity/scripts.pory"
	setmetatile 19, 56, METATILE_Rustboro_Door_Tan, FALSE
# 34 "data/maps/RustboroCity/scripts.pory"
	return
# 35 "data/maps/RustboroCity/scripts.pory"

# 36 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 37 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 38 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 39 "data/maps/RustboroCity/scripts.pory"
	end
# 40 "data/maps/RustboroCity/scripts.pory"

# 41 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 42 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 43 "data/maps/RustboroCity/scripts.pory"
	end
# 44 "data/maps/RustboroCity/scripts.pory"

# 45 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 46 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 47 "data/maps/RustboroCity/scripts.pory"
	return
# 48 "data/maps/RustboroCity/scripts.pory"

# 49 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 50 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 51 "data/maps/RustboroCity/scripts.pory"

# 52 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 53 "data/maps/RustboroCity/scripts.pory"
	lockall
# 54 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 55 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 56 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 59 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 60 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 61 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 63 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 64 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 65 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 66 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 68 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 70 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 71 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 72 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 73 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 74 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 76 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 77 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 78 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 79 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 80 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 81 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 82 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 83 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 84 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 85 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 87 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 89 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 90 "data/maps/RustboroCity/scripts.pory"

# 91 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 92 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 93 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 94 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 95 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 96 "data/maps/RustboroCity/scripts.pory"

# 97 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 98 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 99 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 100 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 101 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 103 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 104 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 105 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 106 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 107 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 108 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 109 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 110 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 111 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 112 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 113 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 115 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 116 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 117 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 118 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 119 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 120 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 121 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 122 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 123 "data/maps/RustboroCity/scripts.pory"
	end
# 124 "data/maps/RustboroCity/scripts.pory"

# 125 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 126 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 127 "data/maps/RustboroCity/scripts.pory"
	step_end
# 128 "data/maps/RustboroCity/scripts.pory"

# 129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 130 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 131 "data/maps/RustboroCity/scripts.pory"
	step_end
# 132 "data/maps/RustboroCity/scripts.pory"

# 133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 135 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 136 "data/maps/RustboroCity/scripts.pory"
	step_end
# 137 "data/maps/RustboroCity/scripts.pory"

# 138 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 140 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 141 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 142 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 143 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 144 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 145 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 146 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 147 "data/maps/RustboroCity/scripts.pory"
	step_end
# 148 "data/maps/RustboroCity/scripts.pory"

# 149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 150 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 151 "data/maps/RustboroCity/scripts.pory"
	step_end
# 152 "data/maps/RustboroCity/scripts.pory"

# 153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 154 "data/maps/RustboroCity/scripts.pory"
	lock
# 155 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 156 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 157 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity/scripts.pory"
	release
# 159 "data/maps/RustboroCity/scripts.pory"
	end
# 160 "data/maps/RustboroCity/scripts.pory"

# 161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 162 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity/scripts.pory"
	release
# 164 "data/maps/RustboroCity/scripts.pory"
	end
# 165 "data/maps/RustboroCity/scripts.pory"

# 166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 167 "data/maps/RustboroCity/scripts.pory"
	lock
# 168 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 169 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 170 "data/maps/RustboroCity/scripts.pory"
	release
# 171 "data/maps/RustboroCity/scripts.pory"
	end
# 172 "data/maps/RustboroCity/scripts.pory"

# 173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_WomanWithPaperBag::
# 178 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WomanWithPaperBag, MSGBOX_NPC
# 179 "data/maps/RustboroCity/scripts.pory"
	end
# 180 "data/maps/RustboroCity/scripts.pory"

# 181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ManWhoCantShopAtBoutiques::
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ManWhoCantShop, MSGBOX_NPC
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"

# 186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 187 "data/maps/RustboroCity/scripts.pory"
	lock
# 188 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 189 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 190 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 191 "data/maps/RustboroCity/scripts.pory"
	release
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 195 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 196 "data/maps/RustboroCity/scripts.pory"
	release
# 197 "data/maps/RustboroCity/scripts.pory"
	end
# 198 "data/maps/RustboroCity/scripts.pory"

# 199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 200 "data/maps/RustboroCity/scripts.pory"
	lock
# 201 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 202 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 204 "data/maps/RustboroCity/scripts.pory"
	release
# 205 "data/maps/RustboroCity/scripts.pory"
	end
# 206 "data/maps/RustboroCity/scripts.pory"

# 207 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 208 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 209 "data/maps/RustboroCity/scripts.pory"
	release
# 210 "data/maps/RustboroCity/scripts.pory"
	end
# 211 "data/maps/RustboroCity/scripts.pory"

# 212 "data/maps/RustboroCity/scripts.pory"

# 213 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RustboroWorker1::
# 214 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RustboroWorker1, MSGBOX_NPC
# 215 "data/maps/RustboroCity/scripts.pory"
	release
# 216 "data/maps/RustboroCity/scripts.pory"
	end
# 217 "data/maps/RustboroCity/scripts.pory"

# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 221 "data/maps/RustboroCity/scripts.pory"
	end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 224 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 228 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 229 "data/maps/RustboroCity/scripts.pory"
	end
# 230 "data/maps/RustboroCity/scripts.pory"

# 231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 232 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 233 "data/maps/RustboroCity/scripts.pory"
	end
# 234 "data/maps/RustboroCity/scripts.pory"

# 235 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 237 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 238 "data/maps/RustboroCity/scripts.pory"
	end
# 239 "data/maps/RustboroCity/scripts.pory"

# 240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 241 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 242 "data/maps/RustboroCity/scripts.pory"
	end
# 243 "data/maps/RustboroCity/scripts.pory"

# 244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 245 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 246 "data/maps/RustboroCity/scripts.pory"
	end
# 247 "data/maps/RustboroCity/scripts.pory"

# 248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 249 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 250 "data/maps/RustboroCity/scripts.pory"
	end
# 251 "data/maps/RustboroCity/scripts.pory"

# 252 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 253 "data/maps/RustboroCity/scripts.pory"
	lock
# 254 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 255 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 256 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 257 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/RustboroCity/scripts.pory"
	release
# 259 "data/maps/RustboroCity/scripts.pory"
	end
# 260 "data/maps/RustboroCity/scripts.pory"

# 261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 262 "data/maps/RustboroCity/scripts.pory"
	lock
# 263 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 264 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayorsHouseIsBigger, MSGBOX_DEFAULT
# 265 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 266 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 267 "data/maps/RustboroCity/scripts.pory"
	release
# 268 "data/maps/RustboroCity/scripts.pory"
	end
# 269 "data/maps/RustboroCity/scripts.pory"

# 270 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 271 "data/maps/RustboroCity/scripts.pory"
	lock
# 272 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 273 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_EatWorkSleep, MSGBOX_DEFAULT
# 274 "data/maps/RustboroCity/scripts.pory"
	release
# 275 "data/maps/RustboroCity/scripts.pory"
	end
# 276 "data/maps/RustboroCity/scripts.pory"

# 277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 278 "data/maps/RustboroCity/scripts.pory"
	lockall
# 279 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 280 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 281 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 282 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 283 "data/maps/RustboroCity/scripts.pory"
	end
# 284 "data/maps/RustboroCity/scripts.pory"

# 285 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 286 "data/maps/RustboroCity/scripts.pory"
	lockall
# 287 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 288 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 289 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 290 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 291 "data/maps/RustboroCity/scripts.pory"
	end
# 292 "data/maps/RustboroCity/scripts.pory"

# 293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 294 "data/maps/RustboroCity/scripts.pory"
	lockall
# 295 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 296 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 297 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 298 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 299 "data/maps/RustboroCity/scripts.pory"
	end
# 300 "data/maps/RustboroCity/scripts.pory"

# 301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 302 "data/maps/RustboroCity/scripts.pory"
	lockall
# 303 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 304 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 305 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 306 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 307 "data/maps/RustboroCity/scripts.pory"
	end
# 308 "data/maps/RustboroCity/scripts.pory"

# 309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 310 "data/maps/RustboroCity/scripts.pory"
	lockall
# 311 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 312 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 313 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 314 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 315 "data/maps/RustboroCity/scripts.pory"
	end
# 316 "data/maps/RustboroCity/scripts.pory"

# 317 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 318 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 319 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 320 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 321 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 322 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 323 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 324 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 325 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 326 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 327 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 329 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 330 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 331 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 333 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 334 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 335 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 336 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 337 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 338 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 339 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 340 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 341 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 342 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 343 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 344 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 345 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 346 "data/maps/RustboroCity/scripts.pory"
	end
# 347 "data/maps/RustboroCity/scripts.pory"

# 348 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 350 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 351 "data/maps/RustboroCity/scripts.pory"
	return
# 352 "data/maps/RustboroCity/scripts.pory"

# 353 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 355 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 356 "data/maps/RustboroCity/scripts.pory"
	return
# 357 "data/maps/RustboroCity/scripts.pory"

# 358 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 359 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 360 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 361 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/RustboroCity/scripts.pory"
	return
# 363 "data/maps/RustboroCity/scripts.pory"

# 364 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 365 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 366 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 367 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 368 "data/maps/RustboroCity/scripts.pory"
	return
# 369 "data/maps/RustboroCity/scripts.pory"

# 370 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 371 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 372 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 373 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/RustboroCity/scripts.pory"
	return
# 375 "data/maps/RustboroCity/scripts.pory"

# 376 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 377 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 378 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 379 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/RustboroCity/scripts.pory"
	return
# 381 "data/maps/RustboroCity/scripts.pory"

# 382 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 383 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 384 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 385 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 386 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 387 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 388 "data/maps/RustboroCity/scripts.pory"
	return
# 389 "data/maps/RustboroCity/scripts.pory"

# 390 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 391 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 409 "data/maps/RustboroCity/scripts.pory"
	step_end
# 410 "data/maps/RustboroCity/scripts.pory"

# 411 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 438 "data/maps/RustboroCity/scripts.pory"
	step_end
# 439 "data/maps/RustboroCity/scripts.pory"

# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 448 "data/maps/RustboroCity/scripts.pory"
	step_end
# 449 "data/maps/RustboroCity/scripts.pory"

# 450 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 451 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 452 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 453 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 455 "data/maps/RustboroCity/scripts.pory"
	step_end
# 456 "data/maps/RustboroCity/scripts.pory"

# 457 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 458 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 459 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 460 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 461 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 462 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 463 "data/maps/RustboroCity/scripts.pory"
	step_end
# 464 "data/maps/RustboroCity/scripts.pory"

# 465 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 466 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 470 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 471 "data/maps/RustboroCity/scripts.pory"
	step_end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 474 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 475 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 476 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 477 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 478 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 479 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 480 "data/maps/RustboroCity/scripts.pory"
	step_end
# 481 "data/maps/RustboroCity/scripts.pory"

# 482 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 483 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 484 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 485 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 486 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 487 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 488 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 489 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 490 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 491 "data/maps/RustboroCity/scripts.pory"
	step_end
# 492 "data/maps/RustboroCity/scripts.pory"

# 493 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 494 "data/maps/RustboroCity/scripts.pory"
	lock
# 495 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 496 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 497 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 498 "data/maps/RustboroCity/scripts.pory"
	release
# 499 "data/maps/RustboroCity/scripts.pory"
	end
# 500 "data/maps/RustboroCity/scripts.pory"

# 501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 502 "data/maps/RustboroCity/scripts.pory"
	waitse
# 503 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 504 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 505 "data/maps/RustboroCity/scripts.pory"
	end
# 506 "data/maps/RustboroCity/scripts.pory"

# 507 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 508 "data/maps/RustboroCity/scripts.pory"
	lockall
# 509 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 510 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 511 "data/maps/RustboroCity/scripts.pory"
	end
# 512 "data/maps/RustboroCity/scripts.pory"

# 513 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 514 "data/maps/RustboroCity/scripts.pory"
	lockall
# 515 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 516 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 517 "data/maps/RustboroCity/scripts.pory"
	end
# 518 "data/maps/RustboroCity/scripts.pory"

# 519 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 520 "data/maps/RustboroCity/scripts.pory"
	lockall
# 521 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 522 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 523 "data/maps/RustboroCity/scripts.pory"
	end
# 524 "data/maps/RustboroCity/scripts.pory"

# 525 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 526 "data/maps/RustboroCity/scripts.pory"
	lockall
# 527 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 528 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 529 "data/maps/RustboroCity/scripts.pory"
	end
# 530 "data/maps/RustboroCity/scripts.pory"

# 531 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 532 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 533 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 534 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 535 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 536 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 537 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 538 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 539 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 540 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 541 "data/maps/RustboroCity/scripts.pory"
	end
# 542 "data/maps/RustboroCity/scripts.pory"

# 543 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 544 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 548 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 549 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 551 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	return
# 555 "data/maps/RustboroCity/scripts.pory"

# 556 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 557 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 560 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 561 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 563 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	return
# 567 "data/maps/RustboroCity/scripts.pory"

# 568 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 569 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 570 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 572 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 573 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 575 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 576 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 577 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/RustboroCity/scripts.pory"
	return
# 579 "data/maps/RustboroCity/scripts.pory"

# 580 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 581 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 582 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 584 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 585 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 587 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 589 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 591 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/RustboroCity/scripts.pory"
	return
# 593 "data/maps/RustboroCity/scripts.pory"

# 594 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 595 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 596 "data/maps/RustboroCity/scripts.pory"
	step_end
# 597 "data/maps/RustboroCity/scripts.pory"

# 598 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 599 "data/maps/RustboroCity/scripts.pory"
	lockall
# 600 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 601 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 602 "data/maps/RustboroCity/scripts.pory"
	end
# 603 "data/maps/RustboroCity/scripts.pory"

# 604 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 605 "data/maps/RustboroCity/scripts.pory"
	lockall
# 606 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 607 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 608 "data/maps/RustboroCity/scripts.pory"
	end
# 609 "data/maps/RustboroCity/scripts.pory"

# 610 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 611 "data/maps/RustboroCity/scripts.pory"
	lockall
# 612 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 613 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 614 "data/maps/RustboroCity/scripts.pory"
	end
# 615 "data/maps/RustboroCity/scripts.pory"

# 616 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 617 "data/maps/RustboroCity/scripts.pory"
	lockall
# 618 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 619 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 620 "data/maps/RustboroCity/scripts.pory"
	end
# 621 "data/maps/RustboroCity/scripts.pory"

# 622 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 623 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 624 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 625 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 626 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 627 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 628 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 629 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 630 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 631 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 632 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 633 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 634 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 635 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 636 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 637 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 638 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 639 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 640 "data/maps/RustboroCity/scripts.pory"
	end
# 641 "data/maps/RustboroCity/scripts.pory"

# 642 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 643 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 644 "data/maps/RustboroCity/scripts.pory"
	return
# 645 "data/maps/RustboroCity/scripts.pory"

# 646 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 647 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 648 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 655 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 656 "data/maps/RustboroCity/scripts.pory"
	return
# 657 "data/maps/RustboroCity/scripts.pory"

# 658 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 659 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 660 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 665 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 667 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/RustboroCity/scripts.pory"
	return
# 669 "data/maps/RustboroCity/scripts.pory"

# 670 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 671 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 672 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 677 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 679 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 680 "data/maps/RustboroCity/scripts.pory"
	return
# 681 "data/maps/RustboroCity/scripts.pory"

# 682 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 689 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 690 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 691 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 692 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 693 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 694 "data/maps/RustboroCity/scripts.pory"
	return
# 695 "data/maps/RustboroCity/scripts.pory"

# 696 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 698 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 700 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 701 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 702 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 703 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 704 "data/maps/RustboroCity/scripts.pory"
	return
# 705 "data/maps/RustboroCity/scripts.pory"

# 706 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 707 "data/maps/RustboroCity/scripts.pory"
	lockall
# 708 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 709 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 712 "data/maps/RustboroCity/scripts.pory"

# 713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 714 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 715 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 716 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 717 "data/maps/RustboroCity/scripts.pory"
	return
# 718 "data/maps/RustboroCity/scripts.pory"

# 719 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 720 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 721 "data/maps/RustboroCity/scripts.pory"
	return
# 722 "data/maps/RustboroCity/scripts.pory"

# 723 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 724 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 725 "data/maps/RustboroCity/scripts.pory"
	return
# 726 "data/maps/RustboroCity/scripts.pory"

# 727 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 728 "data/maps/RustboroCity/scripts.pory"
	lockall
# 729 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 733 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 734 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 736 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 738 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 740 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 742 "data/maps/RustboroCity/scripts.pory"

# 743 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 744 "data/maps/RustboroCity/scripts.pory"
	lockall
# 745 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 749 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 750 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 752 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 756 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 758 "data/maps/RustboroCity/scripts.pory"

# 759 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 760 "data/maps/RustboroCity/scripts.pory"
	lockall
# 761 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 768 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 769 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 770 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 772 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 774 "data/maps/RustboroCity/scripts.pory"

# 775 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 776 "data/maps/RustboroCity/scripts.pory"
	lockall
# 777 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 781 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 782 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 784 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 785 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 786 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 788 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 790 "data/maps/RustboroCity/scripts.pory"

# 791 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 792 "data/maps/RustboroCity/scripts.pory"
	lockall
# 793 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 797 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 798 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 799 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 800 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 801 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 802 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 804 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 806 "data/maps/RustboroCity/scripts.pory"

# 807 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 808 "data/maps/RustboroCity/scripts.pory"
	lockall
# 809 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 813 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 814 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 815 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 816 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 817 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 818 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 820 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 822 "data/maps/RustboroCity/scripts.pory"

# 823 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 824 "data/maps/RustboroCity/scripts.pory"
	lockall
# 825 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 829 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 830 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 831 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 832 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 833 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 834 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 835 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 836 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 837 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 838 "data/maps/RustboroCity/scripts.pory"

# 839 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 840 "data/maps/RustboroCity/scripts.pory"
	lockall
# 841 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 842 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 843 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 844 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 845 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 846 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 847 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 848 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 849 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 850 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 851 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 852 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 853 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 854 "data/maps/RustboroCity/scripts.pory"

# 855 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 856 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 857 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 858 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 859 "data/maps/RustboroCity/scripts.pory"
	end
# 860 "data/maps/RustboroCity/scripts.pory"

# 861 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 862 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 863 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 864 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 865 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 866 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 867 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 868 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 869 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 870 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 871 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 872 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 873 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 874 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 875 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 876 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 877 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 878 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 879 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 880 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 881 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 882 "data/maps/RustboroCity/scripts.pory"
	end
# 883 "data/maps/RustboroCity/scripts.pory"

# 884 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 885 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 886 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 887 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 888 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 889 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 890 "data/maps/RustboroCity/scripts.pory"
	end
# 891 "data/maps/RustboroCity/scripts.pory"

# 892 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 893 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 894 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 895 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 896 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 897 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 898 "data/maps/RustboroCity/scripts.pory"
	end
# 899 "data/maps/RustboroCity/scripts.pory"

# 900 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 901 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 902 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 903 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 904 "data/maps/RustboroCity/scripts.pory"
	end
# 905 "data/maps/RustboroCity/scripts.pory"

# 906 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 907 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 908 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 909 "data/maps/RustboroCity/scripts.pory"
	return
# 910 "data/maps/RustboroCity/scripts.pory"

# 911 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 912 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 913 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 914 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 915 "data/maps/RustboroCity/scripts.pory"
	end
# 916 "data/maps/RustboroCity/scripts.pory"

# 917 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 918 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 919 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 920 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 921 "data/maps/RustboroCity/scripts.pory"
	end
# 922 "data/maps/RustboroCity/scripts.pory"

# 923 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 924 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 925 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 926 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 927 "data/maps/RustboroCity/scripts.pory"
	end
# 928 "data/maps/RustboroCity/scripts.pory"

# 929 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 930 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 931 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 932 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 934 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 935 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 936 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 937 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 938 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 939 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 940 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 941 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 942 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 943 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 944 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 945 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 946 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 947 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 948 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 949 "data/maps/RustboroCity/scripts.pory"
	end
# 950 "data/maps/RustboroCity/scripts.pory"

# 951 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 952 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 953 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 954 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 955 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 956 "data/maps/RustboroCity/scripts.pory"
	end
# 957 "data/maps/RustboroCity/scripts.pory"

# 958 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 959 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 960 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 961 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 962 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 963 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 964 "data/maps/RustboroCity/scripts.pory"
	end
# 965 "data/maps/RustboroCity/scripts.pory"

# 966 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 967 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 968 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 969 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 970 "data/maps/RustboroCity/scripts.pory"
	end
# 971 "data/maps/RustboroCity/scripts.pory"

# 972 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 973 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 974 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 975 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 976 "data/maps/RustboroCity/scripts.pory"
	end
# 977 "data/maps/RustboroCity/scripts.pory"

# 978 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 979 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 980 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 981 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 982 "data/maps/RustboroCity/scripts.pory"
	end
# 983 "data/maps/RustboroCity/scripts.pory"

# 984 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 985 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 986 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 987 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 988 "data/maps/RustboroCity/scripts.pory"
	end
# 989 "data/maps/RustboroCity/scripts.pory"

# 990 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 996 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 997 "data/maps/RustboroCity/scripts.pory"
	step_end
# 998 "data/maps/RustboroCity/scripts.pory"

# 999 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1001 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1002 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1003 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1004 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1005 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1006 "data/maps/RustboroCity/scripts.pory"

# 1007 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1008 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1009 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1011 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1012 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1015 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1017 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1018 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1019 "data/maps/RustboroCity/scripts.pory"

# 1020 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1021 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1022 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1023 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1024 "data/maps/RustboroCity/scripts.pory"

# 1025 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1026 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1027 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1028 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1029 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1030 "data/maps/RustboroCity/scripts.pory"

# 1031 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1032 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1033 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1034 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1035 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1036 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1037 "data/maps/RustboroCity/scripts.pory"

# 1038 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1039 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1041 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1042 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1043 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1044 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1047 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PersonalShopper, MSGBOX_NPC
# 1048 "data/maps/RustboroCity/scripts.pory"
	end
# 1049 "data/maps/RustboroCity/scripts.pory"

# 1050 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WomanWithPaperBag:
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "Everyone keeps looking at me strange\n"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "because my purse is this crumpled\l"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "paper bag.\p"
# 1054 "data/maps/RustboroCity/scripts.pory"
	.string "But I'll have you know it cost ¥800,000.$"
# 1055 "data/maps/RustboroCity/scripts.pory"

# 1056 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ManWhoCantShop:
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "I live right by the luxury stores,\n"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "but I can't afford anything there.\p"
# 1059 "data/maps/RustboroCity/scripts.pory"
	.string "I guess you could call that irony.$"
# 1060 "data/maps/RustboroCity/scripts.pory"

# 1061 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RustboroWorker1:
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "The houses in this part of town mostly\n"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "belong to MAUVILLE MINING exployees.\p"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "They recently opened up a\n"
# 1065 "data/maps/RustboroCity/scripts.pory"
    .string "Rustoro division.$"
# 1066 "data/maps/RustboroCity/scripts.pory"

# 1067 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1071 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1072 "data/maps/RustboroCity/scripts.pory"

# 1073 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1084 "data/maps/RustboroCity/scripts.pory"

# 1085 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1089 "data/maps/RustboroCity/scripts.pory"

# 1090 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1091 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1095 "data/maps/RustboroCity/scripts.pory"

# 1096 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1102 "data/maps/RustboroCity/scripts.pory"

# 1103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "that PEEKO.$"
# 1116 "data/maps/RustboroCity/scripts.pory"

# 1117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "He's lying!\p"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "There's no such thing as a POKéMON\n"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "without a nose, mouth, or eyes!$"
# 1121 "data/maps/RustboroCity/scripts.pory"

# 1122 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1126 "data/maps/RustboroCity/scripts.pory"

# 1127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "Legend has it that in a parallel\n"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "dimension, there are POKéMON that\l"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "look a lot different than the ones\l"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "around here.$"
# 1132 "data/maps/RustboroCity/scripts.pory"

# 1133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayorsHouseIsBigger:
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "The MAYOR lives in that house\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
    .string "over there.\p"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "It's a lot fancier than everyone else's.$"
# 1137 "data/maps/RustboroCity/scripts.pory"

# 1138 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1143 "data/maps/RustboroCity/scripts.pory"

# 1144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_EatWorkSleep:
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "Yawn…\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "Eat, work, sleep…\p"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "At least the harbor's pretty.$"
# 1148 "data/maps/RustboroCity/scripts.pory"

# 1149 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1152 "data/maps/RustboroCity/scripts.pory"

# 1153 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1156 "data/maps/RustboroCity/scripts.pory"

# 1157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1161 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1165 "data/maps/RustboroCity/scripts.pory"

# 1166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1169 "data/maps/RustboroCity/scripts.pory"

# 1170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1178 "data/maps/RustboroCity/scripts.pory"

# 1179 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1182 "data/maps/RustboroCity/scripts.pory"

# 1183 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1186 "data/maps/RustboroCity/scripts.pory"

# 1187 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1189 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1194 "data/maps/RustboroCity/scripts.pory"

# 1195 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1198 "data/maps/RustboroCity/scripts.pory"

# 1199 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1201 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1202 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1208 "data/maps/RustboroCity/scripts.pory"

# 1209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1214 "data/maps/RustboroCity/scripts.pory"

# 1215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1218 "data/maps/RustboroCity/scripts.pory"

# 1219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1222 "data/maps/RustboroCity/scripts.pory"

# 1223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1231 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1233 "data/maps/RustboroCity/scripts.pory"

# 1234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1241 "data/maps/RustboroCity/scripts.pory"

# 1242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1256 "data/maps/RustboroCity/scripts.pory"

# 1257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1260 "data/maps/RustboroCity/scripts.pory"

# 1261 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1264 "data/maps/RustboroCity/scripts.pory"

# 1265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1268 "data/maps/RustboroCity/scripts.pory"

# 1269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1272 "data/maps/RustboroCity/scripts.pory"

# 1273 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1279 "data/maps/RustboroCity/scripts.pory"

# 1280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RustboroCaves:
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1286 "data/maps/RustboroCity/scripts.pory"

# 1287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1291 "data/maps/RustboroCity/scripts.pory"

# 1292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "“Battle to your heart's content!”$"
# 1295 "data/maps/RustboroCity/scripts.pory"

# 1296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1300 "data/maps/RustboroCity/scripts.pory"

# 1301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1305 "data/maps/RustboroCity/scripts.pory"

# 1306 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "POKéMON!”$"
# 1310 "data/maps/RustboroCity/scripts.pory"

# 1311 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1313 "data/maps/RustboroCity/scripts.pory"

# 1314 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1320 "data/maps/RustboroCity/scripts.pory"

# 1321 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1323 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1324 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1325 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1328 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1329 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1330 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1331 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1332 "data/maps/RustboroCity/scripts.pory"

# 1333 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1334 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1335 "data/maps/RustboroCity/scripts.pory"

# 1336 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1337 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1338 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1339 "data/maps/RustboroCity/scripts.pory"

# 1340 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PersonalShopper:
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "Shopping for clothes is\n"
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "always exhausting.\p"
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "So I have my personal shopper\n"
# 1344 "data/maps/RustboroCity/scripts.pory"
	.string "buy all my outfits.$"
# 1345 "data/maps/RustboroCity/scripts.pory"

# 1346 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1347 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1348 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1349 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1350 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1351 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
# 1352 "data/maps/RustboroCity/scripts.pory"

# 1353 "data/maps/RustboroCity/scripts.pory"

# 1354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GoldenRepelSeller:
# 1355 "data/maps/RustboroCity/scripts.pory"
    .string "You look like you have money!\p"
# 1356 "data/maps/RustboroCity/scripts.pory"
    .string "In that case, I have a rare item for you…\n"
# 1357 "data/maps/RustboroCity/scripts.pory"
    .string "This GOLDEN REPEL!\p"
# 1358 "data/maps/RustboroCity/scripts.pory"
    .string "It repels all wild POKeMON, regardless\n"
# 1359 "data/maps/RustboroCity/scripts.pory"
	.string "of how strong you own POKeMON is.\p"
# 1360 "data/maps/RustboroCity/scripts.pory"
    .string "And the best part: it works permanently!\n"
# 1361 "data/maps/RustboroCity/scripts.pory"
    .string "All you have to do is spray it once you\l"
# 1362 "data/maps/RustboroCity/scripts.pory"
	.string "enter a cave or forest, and it'll keep\l"
# 1363 "data/maps/RustboroCity/scripts.pory"
	.string "you covered until you leave!\p"
# 1364 "data/maps/RustboroCity/scripts.pory"
	.string "It only costs ¥1,000,000!\n"
# 1365 "data/maps/RustboroCity/scripts.pory"
	.string "Want to buy it?$"
# 1366 "data/maps/RustboroCity/scripts.pory"

# 1367 "data/maps/RustboroCity/scripts.pory"

# 1368 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GoldenRepelSellerRefused:
# 1369 "data/maps/RustboroCity/scripts.pory"
    .string "Oh, boo-hoo!\p"
# 1370 "data/maps/RustboroCity/scripts.pory"
	.string "I just wanted to spread the word about\n"
# 1371 "data/maps/RustboroCity/scripts.pory"
	.string "my new product!\p"
# 1372 "data/maps/RustboroCity/scripts.pory"
    .string "Snivel…\n"
# 1373 "data/maps/RustboroCity/scripts.pory"
	.string "…\p"
# 1374 "data/maps/RustboroCity/scripts.pory"
    .string "I'm just a hardworking inventor who\n"
# 1375 "data/maps/RustboroCity/scripts.pory"
	.string "wants to make people's lives better…\p"
# 1376 "data/maps/RustboroCity/scripts.pory"
    .string "Won't you please reconsider?$"
# 1377 "data/maps/RustboroCity/scripts.pory"

# 1378 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GreetingsTraveller:
# 1379 "data/maps/RustboroCity/scripts.pory"
    .string "Greetings, traveller!\n"
# 1380 "data/maps/RustboroCity/scripts.pory"
	.string "Welcome to Rustboro City!\p"
# 1381 "data/maps/RustboroCity/scripts.pory"
	.string "… Why do I say traveller? Well, you\n"
# 1382 "data/maps/RustboroCity/scripts.pory"
	.string "look like you've just trekked through\l" 
# 1383 "data/maps/RustboroCity/scripts.pory"
	.string "a mountain!$"
# 1384 "data/maps/RustboroCity/scripts.pory"

# 1385 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RichLady:
# 1386 "data/maps/RustboroCity/scripts.pory"
    .string "Hello there!\n"
# 1387 "data/maps/RustboroCity/scripts.pory"
	.string "I know that look about you…\p"
# 1388 "data/maps/RustboroCity/scripts.pory"
	.string "You're clearly someone with class!\n"
# 1389 "data/maps/RustboroCity/scripts.pory"
	.string "Wherever we go, we can always recognize\l"
# 1390 "data/maps/RustboroCity/scripts.pory"
	.string "each other. Usually by our HATS and\l"
# 1391 "data/maps/RustboroCity/scripts.pory"
	.string "FANCY DRESS. It's like having a\l"
# 1392 "data/maps/RustboroCity/scripts.pory"
	.string "built-in community!\p"
# 1393 "data/maps/RustboroCity/scripts.pory"
	.string "So if you ever need help, just seek\n" 
# 1394 "data/maps/RustboroCity/scripts.pory"
	.string "us out! We have the best information.\n"
# 1395 "data/maps/RustboroCity/scripts.pory"
	.string "For example, you can buy top-notch\l"
# 1396 "data/maps/RustboroCity/scripts.pory"
	.string "healing items at the LUXURY MART.$"
# 1397 "data/maps/RustboroCity/scripts.pory"

# 1398 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_LadyOnBridge:
# 1399 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's port isn't as big as\n"
# 1400 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport's. It's mostly used for\l"
# 1401 "data/maps/RustboroCity/scripts.pory"
	.string "passenger travel.$"

RustboroCity_Script_WelcomeMan::
# 1407 "data/maps/RustboroCity/scripts.pory"
	lock
# 1408 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GreetingsTraveller, MSGBOX_NPC
# 1409 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_Script_RichLady::
# 1413 "data/maps/RustboroCity/scripts.pory"
	lock
# 1414 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RichLady, MSGBOX_NPC
# 1415 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_Script_LadyOnBridge::
# 1419 "data/maps/RustboroCity/scripts.pory"
	lock
# 1420 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_LadyOnBridge, MSGBOX_NPC
# 1421 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_Script_GoldenRepelSeller::
# 1425 "data/maps/RustboroCity/scripts.pory"
	lockall
# 1426 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 1427 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_BOUGHT_GOLDEN_REPEL, RustboroCity_Script_GoldenRepelSeller_2
# 1448 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GoldenRepelSellerSold2, MSGBOX_DEFAULT
RustboroCity_Script_GoldenRepelSeller_1:
# 1450 "data/maps/RustboroCity/scripts.pory"
	releaseall
	return

RustboroCity_Script_GoldenRepelSeller_2:
# 1428 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GoldenRepelSeller, MSGBOX_YESNO
RustboroCity_Script_GoldenRepelSeller_6:
# 1429 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_Script_GoldenRepelSeller_7
# 1432 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GoldenRepelSellerSold, MSGBOX_DEFAULT
# 1433 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GOLDEN_REPEL, 1
# 1434 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_PlayerWroteCheck, MSGBOX_DEFAULT
# 1435 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GoldenRepelSellerSold2, MSGBOX_DEFAULT
# 1436 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_BOUGHT_GOLDEN_REPEL
# 1437 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_GET_FLOATYBALLOON, RustboroCity_Script_GoldenRepelSeller_9
# 1444 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
	goto RustboroCity_Script_GoldenRepelSeller_1

RustboroCity_Script_GoldenRepelSeller_7:
# 1430 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GoldenRepelSellerRefused, MSGBOX_YESNO
	goto RustboroCity_Script_GoldenRepelSeller_6

RustboroCity_Script_GoldenRepelSeller_9:
# 1438 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 1439 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE115_GOONS
# 1440 "data/maps/RustboroCity/scripts.pory"
	removeobject 24, MAP_ROUTE115
# 1441 "data/maps/RustboroCity/scripts.pory"
	removeobject 25, MAP_ROUTE115
	goto RustboroCity_Script_GoldenRepelSeller_1


RustboroCity_DevonsHouse_Sign_DoorLocked::
# 1454 "data/maps/RustboroCity/scripts.pory"
	goto_if_unset FLAG_MET_DEVON, RustboroCity_DevonsHouse_Sign_DoorLocked_1
# 1461 "data/maps/RustboroCity/scripts.pory"
	lock
# 1462 "data/maps/RustboroCity/scripts.pory"
	release
	return

RustboroCity_DevonsHouse_Sign_DoorLocked_1:
# 1455 "data/maps/RustboroCity/scripts.pory"
	lock
# 1456 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_DevonsHouse_DoorLocked, MSGBOX_DEFAULT
# 1457 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1458 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_DevonsHouse_OuterSign::
# 1467 "data/maps/RustboroCity/scripts.pory"
	lock
# 1468 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Sign, MSGBOX_DEFAULT
# 1469 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1470 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_MauvilleMiningHouses_Script_Sign1::
# 1474 "data/maps/RustboroCity/scripts.pory"
	lock
# 1475 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_MauvilleMiningHouses_Sign1, MSGBOX_DEFAULT
# 1476 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1477 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_MauvilleMiningHouses_Script_Sign2::
# 1481 "data/maps/RustboroCity/scripts.pory"
	lock
# 1482 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_MauvilleMiningHouses_Sign2, MSGBOX_DEFAULT
# 1483 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1484 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_MauvilleMiningHouses_Script_Sign3::
# 1488 "data/maps/RustboroCity/scripts.pory"
	lock
# 1489 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_MauvilleMiningHouses_Sign3, MSGBOX_DEFAULT
# 1490 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 1491 "data/maps/RustboroCity/scripts.pory"
	release
	return


RustboroCity_Text_GoldenRepelSellerRefused2::
# 1496 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, boo-hoo!\p"
	.string "I just wanted to spread the word about\n"
	.string "my new product! Snivel… I'm just a\l"
	.string "hardworking inventor who wants to make\l"
	.string "people's lives better… Won't you please\l"
	.string "reconsider?$"

RustboroCity_Text_GoldenRepelSellerSold::
# 1505 "data/maps/RustboroCity/scripts.pory"
	.string "Hehehe, fantastic! Here you go!$"

RustboroCity_PlayerWroteCheck::
# 1509 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER} wrote a check for ¥1,000,000\n"
	.string "and handed it to the man.$"

RustboroCity_Text_GoldenRepelSellerSold2::
# 1513 "data/maps/RustboroCity/scripts.pory"
	.string "The world is at your fingertips!\p"
	.string "Now you can go into any forest or\n"
	.string "grassy route without fear!\p"
	.string "There's also METEOR FALLS to the north,\n"
	.string "but I guess that's only if you like\l"
	.string "rocks.\p"
	.string "Hmm… maybe there are some rare ones\n"
	.string "in there?$"

RustboroCity_Text_Mayor::
# 1523 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? You were looking for a ferry back to\n"
	.string "EVER GRANDE? In normal circumstances,\l"
	.string "I suppose I would be able to order one\l"
	.string "here, but I can't provide you with one.$"

RustboroCity_DevonsHouse_DoorLocked::
# 1527 "data/maps/RustboroCity/scripts.pory"
	.string "The door is locked…$"

RustboroCity_DevonsHouse_Sign::
# 1532 "data/maps/RustboroCity/scripts.pory"
	.string "The sign's old label has been torn off…\p"
	.string "Now it reads: D. STONE$"

RustboroCity_MauvilleMiningHouses_Sign1::
# 1538 "data/maps/RustboroCity/scripts.pory"
	.string "MAUVILLE MINING APT. BLOCK 1$"

RustboroCity_MauvilleMiningHouses_Sign2::
# 1542 "data/maps/RustboroCity/scripts.pory"
	.string "MAUVILLE MINING APT. BLOCK 2$"

RustboroCity_MauvilleMiningHouses_Sign3::
# 1546 "data/maps/RustboroCity/scripts.pory"
	.string "MAUVILLE MINING APT. BLOCK 3$"
