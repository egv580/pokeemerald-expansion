# 1 "data/maps/RustboroCity_LuxuryMart/scripts.pory"

# 2 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
RustboroCity_LuxuryMart_MapScripts::
# 3 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_LuxuryMart/scripts.pory"

# 5 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
RustboroCity_LuxuryMart_EventScript_Clerk::
# 6 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	message gText_Luxury_HowMayIServeYou
# 9 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	goto RustboroCity_LuxuryMart_EventScript_PokemartBasic
# 11 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	end
# 12 "data/maps/RustboroCity_LuxuryMart/scripts.pory"

# 13 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
RustboroCity_LuxuryMart_EventScript_PokemartBasic::
# 14 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	pokemart RustboroCity_LuxuryMart_Basic
# 15 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 16 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	release
# 17 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	end
# 18 "data/maps/RustboroCity_LuxuryMart/scripts.pory"

# 19 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.align 2
# 20 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
RustboroCity_LuxuryMart_Basic:
# 21 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 22 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 23 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
    .2byte ITEM_MAX_ETHER
# 24 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.2byte ITEM_NONE
# 25 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	release
# 26 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	end

RustboroCity_LuxuryMart_EventScript_Gentleman::
# 31 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	msgbox RustboroCity_LuxuryMart_Text_Gentleman, MSGBOX_NPC
	return


RustboroCity_LuxuryMart_EventScript_Man::
# 35 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	msgbox RustboroCity_LuxuryMart_Text_Man, MSGBOX_NPC
	return


RustboroCity_LuxuryMart_Text_Gentleman::
# 38 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.string "If you ask me, the stuff here is way\n"
	.string "overpriced.$"

RustboroCity_LuxuryMart_Text_Man::
# 42 "data/maps/RustboroCity_LuxuryMart/scripts.pory"
	.string "This is the only store in HOENN where\n"
	.string "you can buy Ethers!$"
