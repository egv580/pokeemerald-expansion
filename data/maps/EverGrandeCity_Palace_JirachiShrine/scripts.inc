# 1 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"

# 2 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
EverGrandeCity_Palace_JirachiShrine_MapScripts::
# 3 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	.byte 0

EverGrandeCity_Palace_JirachiShrine_Script_WoodenSign::
# 7 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	lockall
# 8 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	msgbox Text_EverGrandeCity_Palace_JirachiShrine_WoodenSign
# 9 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	releaseall
	return


EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi::
# 13 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	lockall
# 14 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	switch VAR_EVERGRANDE_INTRO_STATE
# 15 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	case 7, EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_3
# 26 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 27 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	msgbox Text_EverGrandeCity_Palace_JirachiShrine_Jirachi, MSGBOX_NPC
# 28 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	waitmoncry
EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_1:
# 30 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	releaseall
	return

EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_3:
# 16 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
# 17 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	msgbox EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_Text_0, MSGBOX_YESNO
# 18 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	waitmoncry
# 19 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_5
	goto EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_1

EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_5:
# 20 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	playse SE_M_COSMIC_POWER
# 21 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	msgbox Text_EverGrandeCity_Palace_JirachiShrine_Jirachi_MakeAWish, MSGBOX_DEFAULT
# 22 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	waitse
# 23 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	setvar VAR_EVERGRANDE_INTRO_STATE, 8
	goto EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_1


EverGrandeCity_Palace_JirachiShrine_Script_TalkToJirachi_Text_0:
# 17 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	.string "JIRACHI has come to visit.\pCast a wish?$"

Text_EverGrandeCity_Palace_JirachiShrine_WoodenSign::
# 33 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	.string "The slab is inscribed with calligraphy...\p"
	.string "My ancestor befriended JIRACHI many\n"
	.string "centuries ago. He built a safe place for\l"
	.string "the POKéMON to visit when it wished. In\l"
	.string "return, JIRACHI granted his wishes for\l"
	.string "his people's wellbeing.$"

Text_EverGrandeCity_Palace_JirachiShrine_Jirachi::
# 41 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	.string "JIRACHI: Chiii!\p"
	.string "<We become blind to the things we see\n"
	.string "every day, and forget to be grateful.>$"

Text_EverGrandeCity_Palace_JirachiShrine_Jirachi_MakeAWish::
# 47 "data/maps/EverGrandeCity_Palace_JirachiShrine/scripts.pory"
	.string "{PLAYER} cast a wish.\p"
	.string "JIRACHI: Chii!$"
