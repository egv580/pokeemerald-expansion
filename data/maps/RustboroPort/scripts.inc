# 1 "data/maps/RustboroPort/scripts.pory"

# 2 "data/maps/RustboroPort/scripts.pory"
RustboroPort_MapScripts::
# 3 "data/maps/RustboroPort/scripts.pory"
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroPort_OnWarp
# 4 "data/maps/RustboroPort/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroPort/scripts.pory"

# 6 "data/maps/RustboroPort/scripts.pory"
RustboroPort_OnWarp:
# 7 "data/maps/RustboroPort/scripts.pory"
    map_script_2 VAR_RUSTBORO_CITY_STATE, 2, RustboroPortShowPassengers
# 8 "data/maps/RustboroPort/scripts.pory"
    .2byte 0

RustboroPortShowPassengers::
# 13 "data/maps/RustboroPort/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_FERRY_PASSENGERS
# 14 "data/maps/RustboroPort/scripts.pory"
	addobject 1
# 15 "data/maps/RustboroPort/scripts.pory"
	addobject 2
# 16 "data/maps/RustboroPort/scripts.pory"
	addobject 7
# 17 "data/maps/RustboroPort/scripts.pory"
	addobject 5
# 18 "data/maps/RustboroPort/scripts.pory"
	addobject 12
# 19 "data/maps/RustboroPort/scripts.pory"
	addobject 13
	return


RustboroPort_Script_Sign::
# 23 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_Sign, MSGBOX_AUTOCLOSE
	return


RustboroPort_Script_LittleGirlAndGrandpa::
# 27 "data/maps/RustboroPort/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ISLANDS_TICKET, RustboroPort_Script_LittleGirlAndGrandpa_1
# 32 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_LittleGirlAndGrandpa, MSGBOX_DEFAULT
# 33 "data/maps/RustboroPort/scripts.pory"
	closemessage
	return

RustboroPort_Script_LittleGirlAndGrandpa_1:
# 28 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_LittleGirlAndGrandpa1, MSGBOX_DEFAULT
# 29 "data/maps/RustboroPort/scripts.pory"
	closemessage
	return


RustboroPort_Script_WomanStrolling::
# 38 "data/maps/RustboroPort/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ISLANDS_TICKET, RustboroPort_Script_WomanStrolling_1
# 42 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_WomanStrolling_2, MSGBOX_NPC
	return

RustboroPort_Script_WomanStrolling_1:
# 39 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_WomanStrolling_1, MSGBOX_NPC
	return


RustboroPort_Script_Chef::
# 47 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_Chef, MSGBOX_NPC
	return


RustboroPort_Script_Cooltrainer::
# 51 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_Cooltrainer, MSGBOX_NPC
	return


RustboroPort_Script_RichLady::
# 55 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_RichLady, MSGBOX_NPC
	return


RustboroPort_Script_RichBoy::
# 59 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_RichBoy, MSGBOX_NPC
	return


RustboroPort_Script_RichBoy_2::
# 63 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_RichBoy_2, MSGBOX_NPC
	return


RustboroPort_Script_RichMan_1::
# 67 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_RichMan_1, MSGBOX_NPC
	return


RustboroPort_Script_RichMan_2::
# 71 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_RichMan_2, MSGBOX_NPC
	return


RustboroPort_Script_Guards::
# 75 "data/maps/RustboroPort/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ISLANDS_TICKET, RustboroPort_Script_Guards_1
# 79 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_Guards_Cancelled, MSGBOX_NPC
# 80 "data/maps/RustboroPort/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
	return

RustboroPort_Script_Guards_1:
# 76 "data/maps/RustboroPort/scripts.pory"
	msgbox RustboroPort_Text_Guards_NotReady, MSGBOX_NPC
	return


RustboroPort_Text_Sign::
# 85 "data/maps/RustboroPort/scripts.pory"
	.string "RUSTBORO PORT$"

RustboroPort_Text_LittleGirlAndGrandpa1::
# 89 "data/maps/RustboroPort/scripts.pory"
	.string "LITTLE GIRL: I want to see EVER\n"
	.string "GRANDE, Grandpa!\n"
	.string "GENTLEMAN: That's why we came here\l"
	.string "early, darling!\p"
	.string "We'll be the first ones in line for the\n"
	.string "ferry!$"

RustboroPort_Text_LittleGirlAndGrandpa::
# 95 "data/maps/RustboroPort/scripts.pory"
	.string "LITTLE GIRL: Waah! I wanted to see\n"
	.string "EVER GRANDE CITY!\p"
	.string "GENTLEMAN: Don't worry, darling, we'll\n"
	.string "wait for the next ferry!$"

RustboroPort_Text_Cooltrainer::
# 103 "data/maps/RustboroPort/scripts.pory"
	.string "I guess I'll just hop on my POKeMON and\n"
	.string "cross the sea.\p"
	.string "You're asking how to do that? There's a\n"
	.string "a move called SURF that some POKeMON\l"
	.string "can learn.\p"
	.string "I don't think you can buy it, sorry.$"

RustboroPort_Text_RichLady::
# 111 "data/maps/RustboroPort/scripts.pory"
	.string "Unbelievable!\p"
	.string "I go through all the trouble of coming\n"
	.string "here for first-class boarding, then the\l"
	.string "ferry gets cancelled!\p"
	.string "They ought to offer a replacement!\n"
	.string "Maybe if I pay someone…?$"

RustboroPort_Text_RichBoy::
# 119 "data/maps/RustboroPort/scripts.pory"
	.string "The ferry got cancelled, so we're all\n"
	.string "just standing around here.\p"
	.string "At least I can show off my new jacket.$"

RustboroPort_Text_RichMan_1::
# 124 "data/maps/RustboroPort/scripts.pory"
	.string "I'm going to miss my villa viewing\n"
	.string "appointment in MOSSDEEP CITY! Oh, what\l"
	.string "should I do?$"

RustboroPort_Text_RichMan_2::
# 129 "data/maps/RustboroPort/scripts.pory"
	.string "The first security guard said there was\n"
	.string "a problem with the ship. But the second\l"
	.string "one said it was a problem with the crew.\l"
	.string "Does that seem fishy, or is it just me?$"

RustboroPort_Text_RichBoy_2::
# 135 "data/maps/RustboroPort/scripts.pory"
	.string "If I had the guts, I'd ask the guards to\n"
	.string "speak to someone in charge.\p"
	.string "But unfortunately money can't cure my\n"
	.string "shyness...$"

RustboroPort_Text_WomanStrolling_1::
# 140 "data/maps/RustboroPort/scripts.pory"
	.string "The air by the sea is always so\n"
	.string "invigorating!$"

RustboroPort_Text_WomanStrolling_2::
# 144 "data/maps/RustboroPort/scripts.pory"
	.string "What's going on over by the pier?$"

RustboroPort_Text_Chef::
# 148 "data/maps/RustboroPort/scripts.pory"
	.string "My dream is to be a gourmet chef aboard\n"
	.string "a luxury cruise liner.$"

RustboroPort_Text_Guards_NotReady::
# 152 "data/maps/RustboroPort/scripts.pory"
	.string "The ferry to MOSSDEEP and EVER GRANDE\n"
	.string "will be ready to board shortly. Please\l"
	.string "make sure you have a valid TICKET.$"

RustboroPort_Text_Guards_Cancelled::
# 156 "data/maps/RustboroPort/scripts.pory"
	.string "We're sorry, but the ferry to the\n"
	.string "islands was cancelled.$"

RustboroPort_Text_Guards_OhWell::
# 160 "data/maps/RustboroPort/scripts.pory"
	.string "Yeah, that's life.$"

RustboroPort_Text_Guards_SpeakToManager_1::
# 164 "data/maps/RustboroPort/scripts.pory"
	.string "What do you mean, you want to talk to\n"
	.string "the manger?! I guess that would be the\l"
	.string "CAPTAIN, but... who are you?$"

RustboroPort_Text_Guards_SpeakToManager_2::
# 168 "data/maps/RustboroPort/scripts.pory"
	.string "Probably the heiress of something. Her\n"
	.string "POKeMON looks tough, too... Let's just\l"
	.string "let her through.$"
