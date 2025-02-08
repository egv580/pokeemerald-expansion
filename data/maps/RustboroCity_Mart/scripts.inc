# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts::
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_Mart_EventScript_PokemartExpanded
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Mart/scripts.pory"

# 14 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartBasic::
# 15 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Mart/scripts.pory"

# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic:
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 24 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 25 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 33 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 34 "data/maps/RustboroCity_Mart/scripts.pory"

# 35 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded::
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Expanded
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 39 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Mart/scripts.pory"

# 41 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded:
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 57 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 58 "data/maps/RustboroCity_Mart/scripts.pory"

# 59 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF::
# 60 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_StockIsLimited, MSGBOX_NPC
# 61 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Mart/scripts.pory"

# 63 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy::
# 64 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 65 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 66 "data/maps/RustboroCity_Mart/scripts.pory"

# 67 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher::
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 69 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Mart/scripts.pory"

# 71 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_StockIsLimited:
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "POKéMARTs are very affordable\n"
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "and convenient.\p"
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
    .string "But the stock is limited, so\n"
# 75 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "you have to plan your purchases.\p"
# 76 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "If they run out of an item, it\n"
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "takes a day or so to restock.$"
# 78 "data/maps/RustboroCity_Mart/scripts.pory"

# 79 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish:
# 80 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some PARLYZ HEALS and\n"
# 81 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "ANTIDOTES.\p"
# 82 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into SHROOMISH\n"
# 83 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in PETALBURG WOODS.$"
# 84 "data/maps/RustboroCity_Mart/scripts.pory"

# 85 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead:
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My POKéMON evolved.\n"
# 87 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 88 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy SUPER POTIONS for it\n"
# 89 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary POTIONS.$"
# 90 "data/maps/RustboroCity_Mart/scripts.pory"

# 91 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase:
# 92 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an ESCAPE ROPE just in\n"
# 93 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 94 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 95 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"

RustboroMart_Script_RichBoy::
# 101 "data/maps/RustboroCity_Mart/scripts.pory"
	lockall
# 102 "data/maps/RustboroCity_Mart/scripts.pory"
	goto_if_unset FLAG_RECEIVED_ISLANDS_TICKET, RustboroMart_Script_RichBoy_2
# 111 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_RichBoyEmptiedStock3, MSGBOX_NPC
RustboroMart_Script_RichBoy_1:
# 113 "data/maps/RustboroCity_Mart/scripts.pory"
	releaseall
	return

RustboroMart_Script_RichBoy_2:
# 103 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_RichBoyEmptiedStock2, MSGBOX_NPC
# 104 "data/maps/RustboroCity_Mart/scripts.pory"
	giveitem ITEM_ISLANDS_TICKET, 1
# 105 "data/maps/RustboroCity_Mart/scripts.pory"
	setflag FLAG_RECEIVED_ISLANDS_TICKET
# 106 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_RichBoyEmptiedStock3, MSGBOX_DEFAULT
# 107 "data/maps/RustboroCity_Mart/scripts.pory"
	closemessage
# 108 "data/maps/RustboroCity_Mart/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
	goto RustboroMart_Script_RichBoy_1


RustboroMart_Text_RichBoyIntro::
# 116 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "When I shop, I always buy in bulk. Even\n"
	.string "if it means {COLOR BLUE}{SHADOW LIGHT_BLUE}emptying the stock{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}, it's\l"
	.string "better than having to go to the store\l"
	.string "every other day. You should try it.$"

RustboroMart_Text_RichBoyEmptiedStock1::
# 120 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Oh, your pokemon looks very good! No\n"
	.string "wonder you bought all those potions,\l"
	.string "you take very good care of it.$"

RustboroCity_Mart_Text_RichBoyEmptiedStock2::
# 124 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "What do you mean, you're lost...?\p"
	.string "Oh, that's awful. I would go to RUSTBORO\n"
	.string "PORT if I were you. They have a weekly\l"
	.string "ferry service to MOSSDEEP and EVER\l"
	.string "GRANDE. Here, you can have my ticket.$"

RustboroCity_Mart_Text_RichBoyEmptiedStock3::
# 129 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I was going to go for a sightseeing\n"
	.string "trip, but I guess I'd rather spend my\l"
	.string "afternoon golfing. You better hurry,\l"
	.string "the ferry should be leaving soon.$"
