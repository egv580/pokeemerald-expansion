# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts::
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter::
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	giveitem ITEM_HM_CUT
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut::
# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass::
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That determined expression…\n"
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That limber way you move…\l"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "And your well-trained POKéMON…\p"
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You're obviously a skilled TRAINER!\p"
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No, wait, don't say a word.\n"
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I can tell just by looking at you.\p"
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I'm sure that you can put this\n"
# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "HIDDEN MACHINE to good use.\p"
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No need to be modest or shy.\n"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Go on, take it!$"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut:
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That HIDDEN MACHINE, or HM for\n"
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "short, is CUT.\p"
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "An HM move is one that can be used\n"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "by POKéMON outside of battle.\p"
# 42 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Any POKéMON that's learned CUT can\n"
# 43 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "chop down thin trees if the TRAINER\l"
# 44 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "has earned the STONE BADGE.\p"
# 45 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "And, unlike a TM, an HM can be used\n"
# 46 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "more than once.$"
# 47 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 48 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
# 49 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
# 50 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "RUSTBORO, my dad helped out.\p"
# 51 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "He made his POKéMON use CUT to clear\n"
# 52 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "the land of trees.$"

RustbotoCity_DevonsHouse_EventScript_Devon::
# 57 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 58 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 59 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_FirstArrival, MSGBOX_NPC
# 60 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Fridge::
# 65 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 66 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Fridge, MSGBOX_SIGN
# 67 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Sink::
# 71 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 72 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Sink, MSGBOX_SIGN
# 73 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Bed::
# 77 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 78 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Bed, MSGBOX_SIGN
# 79 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Commode::
# 83 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 84 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Commode, MSGBOX_SIGN
# 85 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Table::
# 89 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 90 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Table, MSGBOX_SIGN
# 91 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Plant::
# 95 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 96 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Plant, MSGBOX_SIGN
# 97 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_RockDisplay1::
# 101 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 102 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Stone1, MSGBOX_SIGN
# 103 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_RockDisplay2::
# 107 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 108 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_Stone2, MSGBOX_SIGN
# 109 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


DevonsHouse_Emerald::
# 113 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lockall
# 114 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_StoneEmerald, MSGBOX_SIGN
# 115 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	applymovement 1, Movement_DevonsHouse_Emerald
# 116 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_DevonsEmerald1, MSGBOX_SIGN
# 117 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 118 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_DevonsHouse_Text_DevonsEmerald2, MSGBOX_SIGN
# 119 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	releaseall
	return


# 123 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
Movement_DevonsHouse_Emerald:
# 124 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	walk_left
# 124 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	walk_left
# 125 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	walk_up
# 126 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	face_left
	step_end

RustboroCity_DevonsHouse_Text_Fridge::
# 129 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "It's a small fridge...\n"
	.string "Is this really enough for one person?$"

RustboroCity_DevonsHouse_Text_Sink::
# 134 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A sink for washing dishes.\n"
	.string "Does DEVON do this himself every day?$"

RustboroCity_DevonsHouse_Text_Bed::
# 139 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "The bed seems almost too small.\n"
	.string "$"

RustboroCity_DevonsHouse_Text_Commode::
# 143 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "An old commode, where items are\n"
	.string "arranged neatly.$"

RustboroCity_DevonsHouse_Text_Table::
# 147 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A very small table. It's probably only\n"
	.string "enough for a quick snack.$"

RustboroCity_DevonsHouse_Text_Plant::
# 151 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "A simple houseplant.\n"
	.string "It's well-watered, but could use some\l"
	.string "high-quality mulch.$"

RustboroCity_DevonsHouse_Text_FirstArrival::
# 156 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: Well, here we are!\n"
	.string "This is my place.\p"
	.string "I know it's not much, but it's home.$"

RustboroCity_DevonsHouse_Text_FirstArrival2::
# 163 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: We're in the company housing\n"
	.string "district. It's where all the employees\l"
	.string "of MAUVILLE MINING live. Or, former\l"
	.string "employees, in my case...\p"
	.string "I bought the house from the company\n"
	.string "with my salary money, so they can't take\l"
	.string "it away from me now. It's actually all I\l"
	.string "have now. But I think it was worth it.$"

RustboroCity_DevonsHouse_Text_FirstArrival3::
# 173 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: What about you? What brings you\n"
	.string "here? And why were those people after\l"
	.string "you?$"

RustboroCity_DevonsHouse_Text_FirstArrival4::
# 179 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: I just realized I only have one\n"
	.string "chair... That's a bit embarrassing. Why\l"
	.string "don't you sit down? I'll stand. It's not\l"
	.string "often I have company.$"

RustboroCity_DevonsHouse_Text_FirstArrival5::
# 185 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "... ... ...\p"
	.string "DEVON: So you're the PRINCESS of EVER\n"
	.string "GRANDE? And you were kidnapped?!\p"
	.string "By who? ... ... ...\p"
	.string "You're saying they looked like mining\n"
	.string "company employees?!$"

RustboroCity_DevonsHouse_Text_FirstArrival6::
# 194 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: That's strange... And very bad. I\n"
	.string "can't imagine how frightening that is. I\l"
	.string "hope you know I'd never sell you out. Is\l"
	.string "there anything I can do to help? Maybe\l"
	.string "there's a way I can help you get back\l"
	.string "home...$"

RustboroCity_DevonsHouse_Text_FirstArrival7::
# 201 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: I got it! We can go to SLATEPORT\n"
	.string "CITY! They have a ferry service. Maybe\l"
	.string "there's one that'll be departing for\l"
	.string "EVER GRANDE. I'll get you aboard. And...\l"
	.string "maybe I can also find a place to go. I\l"
	.string "really don't want to stay here.$"

RustboroCity_DevonsHouse_Text_Stone1::
# 209 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "It's a piece of PYRITE.$"

RustboroCity_DevonsHouse_Text_Stone2::
# 213 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "It's a regular ROCK from Rustboro\n"
	.string "Caves.$"

RustboroCity_DevonsHouse_Text_StoneEmerald::
# 217 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "It's a fake emerald.$"

RustboroCity_DevonsHouse_Text_DevonsEmerald1::
# 221 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: That's my most prized\n"
	.string "possession, a real emerald.$"

RustboroCity_DevonsHouse_Text_DevonsEmerald2::
# 225 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: You mean it's fake? It's\n"
	.string "actually green fluorite...? That's\l"
	.string "interesting! You have a sharp eye! I\l"
	.string "don't even know what fluorite is... heh.\l"
	.string "But it all sounds so interesting. I wish\l"
	.string "I had more time to read up on the\l"
	.string "natural world, instead of just taking\l"
	.string "advantage of it.$"

RustboroCity_DevonsHouse_Text_ShowDevonRealEmerald::
# 233 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You showed DEVON the REAL EMERALD.$"

RustboroCity_DevonsHouse_Text_DevonsEmerald3::
# 237 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "DEVON: So that's a real emerald... I see,\n"
	.string "the color is a bit more bluish-green.\l"
	.string "Thank you for showing me. I guess even\l"
	.string "though mine's fake, it's still special to\l"
	.string "me. My father found it by accident when\l"
	.string "we were walking somewhere. He thought\l"
	.string "it was real, and so did I. Now it's the\l"
	.string "only memory I have of him... Where did\l"
	.string "you get yours? So it was a gift from\l"
	.string "your father as well. I can tell it must\l"
	.string "be special to you. I promise I'll help\l"
	.string "you get back to your family.$"
