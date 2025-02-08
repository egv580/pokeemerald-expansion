# 1 "data/maps/RustboroCity_House3/scripts.pory"

# 2 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_MapScripts::
# 3 "data/maps/RustboroCity_House3/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_MayorsHouse_OnWarp
# 4 "data/maps/RustboroCity_House3/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_House3/scripts.pory"

# 6 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_MayorsHouse_OnWarp:
# 7 "data/maps/RustboroCity_House3/scripts.pory"
    map_script_2 VAR_RUSTBORO_CITY_STATE, 3, RustboroCity_MayorsHouse_HideGuards
# 8 "data/maps/RustboroCity_House3/scripts.pory"
    .2byte 0
# 9 "data/maps/RustboroCity_House3/scripts.pory"

# 10 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_OldMan::
# 11 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
# 12 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 13 "data/maps/RustboroCity_House3/scripts.pory"

# 14 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_OldWoman::
# 15 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
# 16 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 17 "data/maps/RustboroCity_House3/scripts.pory"

# 18 "data/maps/RustboroCity_House3/scripts.pory"
@ Misspelling on purpose, see nickname
# 19 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_EventScript_Pekachu::
# 20 "data/maps/RustboroCity_House3/scripts.pory"
	lock
# 21 "data/maps/RustboroCity_House3/scripts.pory"
	faceplayer
# 22 "data/maps/RustboroCity_House3/scripts.pory"
	waitse
# 23 "data/maps/RustboroCity_House3/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 24 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
# 25 "data/maps/RustboroCity_House3/scripts.pory"
	waitmoncry
# 26 "data/maps/RustboroCity_House3/scripts.pory"
	release
# 27 "data/maps/RustboroCity_House3/scripts.pory"
	end
# 28 "data/maps/RustboroCity_House3/scripts.pory"

# 29 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_IGivePerfectlySuitedNicknames:
# 30 "data/maps/RustboroCity_House3/scripts.pory"
	.string "For my own POKéMON, I give them\n"
# 31 "data/maps/RustboroCity_House3/scripts.pory"
	.string "perfectly suited nicknames!\p"
# 32 "data/maps/RustboroCity_House3/scripts.pory"
	.string "It's my expression of, uh…\n"
# 33 "data/maps/RustboroCity_House3/scripts.pory"
	.string "originality, yes, that's it!$"
# 34 "data/maps/RustboroCity_House3/scripts.pory"

# 35 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_NamingPikachuPekachu:
# 36 "data/maps/RustboroCity_House3/scripts.pory"
	.string "But giving the name PEKACHU to\n"
# 37 "data/maps/RustboroCity_House3/scripts.pory"
	.string "a PIKACHU? It seems pointless.\p"
# 38 "data/maps/RustboroCity_House3/scripts.pory"
	.string "I suppose it is good to use a name\n"
# 39 "data/maps/RustboroCity_House3/scripts.pory"
	.string "that's easy to understand, but…$"
# 40 "data/maps/RustboroCity_House3/scripts.pory"

# 41 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_House3_Text_Pekachu:
# 42 "data/maps/RustboroCity_House3/scripts.pory"
	.string "PEKACHU: Peka!$"
# 43 "data/maps/RustboroCity_House3/scripts.pory"

# 44 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_MayorsHouse_Text_NotSeeingAnyone:
# 45 "data/maps/RustboroCity_House3/scripts.pory"
	.string "GUARD: Sorry, but the MAYOR\n"
# 46 "data/maps/RustboroCity_House3/scripts.pory"
    .string "isn't taking appointments yet.$"
# 47 "data/maps/RustboroCity_House3/scripts.pory"

# 48 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_MayorsHouse_Text_Man1:
# 49 "data/maps/RustboroCity_House3/scripts.pory"
	.string "I'm starting a petition to get more\n"
# 50 "data/maps/RustboroCity_House3/scripts.pory"
    .string "money for the POKeMON GYM.\p"
# 51 "data/maps/RustboroCity_House3/scripts.pory"
    .string "I think the MAYOR invests too much\n"
# 52 "data/maps/RustboroCity_House3/scripts.pory"
    .string "in mining and land development.$"
# 53 "data/maps/RustboroCity_House3/scripts.pory"

# 54 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_MayorsHouse_Text_Man2:
# 55 "data/maps/RustboroCity_House3/scripts.pory"
	.string "The MAYOR keeps saying that he wants\n"
# 56 "data/maps/RustboroCity_House3/scripts.pory"
    .string "to beautify the city.\p"
# 57 "data/maps/RustboroCity_House3/scripts.pory"
    .string "But he only does it in certain places.$"
# 58 "data/maps/RustboroCity_House3/scripts.pory"

# 59 "data/maps/RustboroCity_House3/scripts.pory"
RustboroCity_MayorsHouse_Text_Mayor1:
# 60 "data/maps/RustboroCity_House3/scripts.pory"
	.string "MAYOR: Munch, munch...\p"
# 61 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Mmm, this tea is delicious! And the cake!\n"
# 62 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Delightful!\p"
# 63 "data/maps/RustboroCity_House3/scripts.pory"
	.string "… … …\n"
# 64 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Hmm? Who are you?\p"
# 65 "data/maps/RustboroCity_House3/scripts.pory"
	.string "Oh, hello! Sorry, but I'm all done for thel\n"
# 66 "data/maps/RustboroCity_House3/scripts.pory"
    .string "day. I'll resume appointments tomorrow.\p"
# 67 "data/maps/RustboroCity_House3/scripts.pory"
	.string "… What?!\n"
# 68 "data/maps/RustboroCity_House3/scripts.pory"
	.string "You're requesting a ferry to EVER GRANDE?\p"
# 69 "data/maps/RustboroCity_House3/scripts.pory"
	.string "I'm sorry, but I can't force the ferry\n"
# 70 "data/maps/RustboroCity_House3/scripts.pory"
	.string "service to change their policies.\p"
# 71 "data/maps/RustboroCity_House3/scripts.pory"
	.string "I understand this might seem like an\n"
# 72 "data/maps/RustboroCity_House3/scripts.pory"
	.string "emergency to you, but we are all but small\p"
# 73 "data/maps/RustboroCity_House3/scripts.pory"
	.string "drops in one big sea.\p"
# 74 "data/maps/RustboroCity_House3/scripts.pory"
	.string "What's that? The PRINCESS OF EVER GRANDE?!\n"
# 75 "data/maps/RustboroCity_House3/scripts.pory"
	.string "But how am I to believe you?\p"
# 76 "data/maps/RustboroCity_House3/scripts.pory"
	.string "How on Earth did you end up here, then?!\n"
# 77 "data/maps/RustboroCity_House3/scripts.pory"
	.string "A kidnapping?!\p" 
# 78 "data/maps/RustboroCity_House3/scripts.pory"
	.string "I'm sorry, but this seems far too\n"
# 79 "data/maps/RustboroCity_House3/scripts.pory"
	.string "preposterous to me. I cannot help you.$"

RustboroCity_MayorsHouse_HideGuards::
# 83 "data/maps/RustboroCity_House3/scripts.pory"
	setflag FLAG_HIDE_MAYORS_GUARDS
# 84 "data/maps/RustboroCity_House3/scripts.pory"
	removeobject 7
# 85 "data/maps/RustboroCity_House3/scripts.pory"
	removeobject 8
	return


RustboroCity_MayorsHouse_Script_Guards::
# 89 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_MayorsHouse_Text_NotSeeingAnyone, MSGBOX_NPC
	return


RustboroCity_MayorsHouse_Script_Man1::
# 93 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_MayorsHouse_Text_Man1, MSGBOX_NPC
	return


RustboroCity_MayorsHouse_Script_Man2::
# 97 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_MayorsHouse_Text_Man2, MSGBOX_NPC
	return


RustboroCity_MayorsHouse_Script_Mayor1::
# 101 "data/maps/RustboroCity_House3/scripts.pory"
	msgbox RustboroCity_MayorsHouse_Text_Mayor1, MSGBOX_NPC
# 102 "data/maps/RustboroCity_House3/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
	return

