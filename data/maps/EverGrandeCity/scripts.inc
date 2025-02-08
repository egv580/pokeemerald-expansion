# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_CLYDE, 8
# 3 "data/maps/EverGrandeCity/scripts.pory"
.set LOCALID_DUKE, 30
# 4 "data/maps/EverGrandeCity/scripts.pory"

# 5 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 6 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 7 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity/scripts.pory"

# 9 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 10 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 11 "data/maps/EverGrandeCity/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity/scripts.pory"

# 13 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 23 "data/maps/EverGrandeCity/scripts.pory"
	end
# 24 "data/maps/EverGrandeCity/scripts.pory"

# 25 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 26 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 27 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 28 "data/maps/EverGrandeCity/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 32 "data/maps/EverGrandeCity/scripts.pory"

# 33 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 34 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 36 "data/maps/EverGrandeCity/scripts.pory"

# 37 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 38 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 39 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 40 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"
# 41 "data/maps/EverGrandeCity/scripts.pory"

# 42 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_BerryLadyText:
# 43 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm a ROYAL GARDENER.\p"
# 44 "data/maps/EverGrandeCity/scripts.pory"
	.string "These berries are becoming endangered\n" 
# 45 "data/maps/EverGrandeCity/scripts.pory"
    .string "on the mainland due to harsh industrial\n"
# 46 "data/maps/EverGrandeCity/scripts.pory"
    .string "practices.\p"
# 47 "data/maps/EverGrandeCity/scripts.pory"
	.string "But the climate here is just right\n"
# 48 "data/maps/EverGrandeCity/scripts.pory"
    .string "for them to thrive!$"

EverGrandeCity_Read_ParkSign::
# 53 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 54 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_ParkSign, type = MSGBOX_SIGN
# 55 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Read_HouseSign::
# 59 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 60 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_HouseSign, type = MSGBOX_SIGN
# 61 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Make_Devon_Wait::
# 65 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 66 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Make_Devon_Wait_Text, type = MSGBOX_YESNO
# 67 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_Make_Devon_Wait_2
# 72 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Make_Devon_Wait_Text_1, type = MSGBOX_NPC
EverGrandeCity_Make_Devon_Wait_1:
# 74 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return

EverGrandeCity_Make_Devon_Wait_2:
# 68 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Make_Devon_Wait_Text_0, type = MSGBOX_NPC
# 69 "data/maps/EverGrandeCity/scripts.pory"
	destroyfollower
	goto EverGrandeCity_Make_Devon_Wait_1


EverGrandeCity_TalkTo_ParkGirl::
# 91 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 92 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 93 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_ParkGirl_1, type = MSGBOX_YESNO
# 94 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_TalkTo_ParkGirl_2
# 98 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_ParkGirl_No, type = MSGBOX_NPC
EverGrandeCity_TalkTo_ParkGirl_1:
# 100 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return

EverGrandeCity_TalkTo_ParkGirl_2:
# 95 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_ParkGirl_Yes, type = MSGBOX_NPC
	goto EverGrandeCity_TalkTo_ParkGirl_1


EverGrandeCity_Script_Zigzagoon::
# 104 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 105 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 106 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 107 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Zigzagoon, type = MSGBOX_NPC
# 108 "data/maps/EverGrandeCity/scripts.pory"
	waitmoncry
# 109 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 110 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Script_Wingull::
# 114 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 115 "data/maps/EverGrandeCity/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 116 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Wingull, type = MSGBOX_NPC
# 117 "data/maps/EverGrandeCity/scripts.pory"
	waitmoncry
# 118 "data/maps/EverGrandeCity/scripts.pory"
	closemessage
# 119 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Script_CliffMan::
# 123 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 124 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_CliffMan1, type = MSGBOX_NPC
# 125 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_TechMan::
# 129 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 130 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_TechMan_Text, type = MSGBOX_NPC
# 131 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Script_CityCenterKid::
# 135 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 136 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CityCenterKid, type = MSGBOX_NPC
# 137 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Script_CityCenterGentleman::
# 141 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 142 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CityCenterGentleman, type = MSGBOX_NPC
# 143 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Script_PastCityCenterGirl::
# 147 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 148 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_PastCityCenterGirl, type = MSGBOX_NPC
# 149 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Script_BridgeLady::
# 153 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 154 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_BridgeLady, type = MSGBOX_NPC
# 155 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_BerryLadyScript::
# 159 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 160 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 161 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_BerryLadyText, MSGBOX_NPC
# 162 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	return


EverGrandeCity_Clyde_Garden::
# 166 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 167 "data/maps/EverGrandeCity/scripts.pory"
	faceplayer
# 168 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Clyde_Garden, type = MSGBOX_NPC
# 169 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Clyde_Garden_Text_0, type = MSGBOX_YESNO
# 170 "data/maps/EverGrandeCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandeCity_Clyde_Garden_2
# 177 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_Clyde_DontChallenge, MSGBOX_DEFAULT
# 178 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_CLYDE, EverGrandeCity_Clyde_DontChallenge_Movement
EverGrandeCity_Clyde_Garden_1:
# 180 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end

EverGrandeCity_Clyde_Garden_2:
# 171 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_single trainer = TRAINER_WINSTON_1, intro_text = EverGrandeCity_Text_Clyde_AcceptChallenge, lose_text = ClydeLoseText1
# 172 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_CLYDE, ClydeLoseStepBack
# 173 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Clyde_Postbattle_Outro_Text, type = MSGBOX_AUTOCLOSE
	goto EverGrandeCity_Clyde_Garden_1


EverGrandeCity_Clyde_DontChallenge_Movement::
# 185 "data/maps/EverGrandeCity/scripts.pory"
	face_up
	return


EverGrandeCity_Battle_Clyde::
# 189 "data/maps/EverGrandeCity/scripts.pory"
	trainerbattle_single trainer = TRAINER_WINSTON_1, intro_text = EverGrandeCity_Text_Clyde_AcceptChallenge, lose_text = ClydeLoseText1
	return


Clyde_Postbattle_Outro::
# 193 "data/maps/EverGrandeCity/scripts.pory"
	applymovement LOCALID_CLYDE, ClydeLoseStepBack
# 194 "data/maps/EverGrandeCity/scripts.pory"
	msgbox Clyde_Postbattle_Outro_Text, type = MSGBOX_NPC
	return


# 197 "data/maps/EverGrandeCity/scripts.pory"
ClydeLoseStepBack:
# 198 "data/maps/EverGrandeCity/scripts.pory"
	walk_left
	step_end

EverGrandeCity_Make_Devon_Wait_Text_0:
# 68 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ok, I'll wait for you.$"

EverGrandeCity_Make_Devon_Wait_Text_1:
# 72 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ok, let's keep going.$"

EverGrandeCity_Clyde_Garden_Text_0:
# 169 "data/maps/EverGrandeCity/scripts.pory"
	.string "Challenge this guy?$"

EverGrandeCity_Make_Devon_Wait_Text::
# 77 "data/maps/EverGrandeCity/scripts.pory"
	.string "Should I wait for you here?$"

EverGrandeCity_ParkSign::
# 81 "data/maps/EverGrandeCity/scripts.pory"
	.string "PALACE GARDENS$"

EverGrandeCity_HouseSign::
# 85 "data/maps/EverGrandeCity/scripts.pory"
	.string "To Devon's Cave$"

EverGrandeCity_CliffMan1::
# 201 "data/maps/EverGrandeCity/scripts.pory"
	.string "Urgh... I just looked down and realized\n"
	.string "how high up we are. Now I'm getting\l"
	.string "dizzy...$"

EverGrandeCity_CliffMan2::
# 205 "data/maps/EverGrandeCity/scripts.pory"
	.string "By the way, is that a cave down there,\n"
	.string "or is it just me?$"

EverGrandeCity_Text_Clyde_Garden::
# 209 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: Just so you know, I'm only coming\n"
	.string "to your birthday banquet to be polite.\p"
	.string "Oh, you thought that was impolite of\n"
	.string "me? Too bad.$"

EverGrandeCity_Text_Clyde_DontChallenge::
# 215 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: Yeah, that's what I thought.$"

EverGrandeCity_Text_Clyde_AcceptChallenge::
# 219 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: You're right, I do have a POKeMON\n"
	.string "of my own.\p"
	.string "My family considers battling to be a\n"
	.string "low-class sport, but they're not here\l"
	.string "right now.\p"
	.string "So bring it!$"

ClydeLoseText1::
# 225 "data/maps/EverGrandeCity/scripts.pory"
	.string "Wait, you're actually good at this...?$"

EverGrandeCity_Zigzagoon::
# 229 "data/maps/EverGrandeCity/scripts.pory"
	.string "ZIGZAGOON: Baw paw!$"

EverGrandeCity_Wingull::
# 233 "data/maps/EverGrandeCity/scripts.pory"
	.string "WINGULL: Gull gull!$"

EverGrandeCity_ParkGirl_1::
# 237 "data/maps/EverGrandeCity/scripts.pory"
	.string "Hey, want to hear a secret? I'll tell you\n"
	.string "if you don't tell anyone else!$"

EverGrandeCity_ParkGirl_No::
# 241 "data/maps/EverGrandeCity/scripts.pory"
	.string "Right... You're the PRINCESS, you're\n"
	.string "high-profile!$"

EverGrandeCity_ParkGirl_Yes::
# 245 "data/maps/EverGrandeCity/scripts.pory"
	.string "I used to be really afraid of wild\n"
	.string "POKeMON. And people too, kind of... But\l"
	.string "after I started battling here with my\l"
	.string "ZIGZAGOON, I realized how strong I\l"
	.string "could be. Sometimes it seems like you're\l"
	.string "up against someone who's a lot scarier\l"
	.string "and stronger than you, but if you\l"
	.string "choose to fight back, you might just\l"
	.string "win!$"

EverGrandeCity_TechMan_Text::
# 249 "data/maps/EverGrandeCity/scripts.pory"
	.string "I must say, the advancements in\n"
	.string "technology made during this decade are\l"
	.string "extraordinary!\p"
	.string "Just thirty years ago we all relied on\n"
	.string "WINGULL post, but now thanks to the\l"
	.string "the electrical telegraph, we can send\l"
	.string "messages across the continent within\l"
	.string "minutes!$"

EverGrandeCity_BerryLadyText2::
# 254 "data/maps/EverGrandeCity/scripts.pory"
	.string "I'm a ROYAL GARDENER.\p"
	.string "These berries are becoming endangered\n"
	.string "on the mainland due to harsh industrial\l"
	.string "practices. But the climate here is just\l"
	.string "right for them to thrive!$"

EverGrandeCity_Text_CityCenterKid::
# 260 "data/maps/EverGrandeCity/scripts.pory"
	.string "Today I'll go paragliding with my\n"
	.string "brand-new motorboat! After that I'll go\l"
	.string "swimming in my brand-new pool.$"

EverGrandeCity_Text_CityCenterGentleman::
# 264 "data/maps/EverGrandeCity/scripts.pory"
	.string "Greetings, PRINCESS! I eagerly await\n"
	.string "the banquet in your honor this evening!$"

EverGrandeCity_Text_PastCityCenterGirl::
# 268 "data/maps/EverGrandeCity/scripts.pory"
	.string "I can't wait for the banquet tonight!\n"
	.string "So much good food...$"

EverGrandeCity_Text_BridgeLady::
# 272 "data/maps/EverGrandeCity/scripts.pory"
	.string "A stroll over the sea like this makes\n"
	.string "one cognizant of how small we are in\l"
	.string "this vast world.$"

Clyde_Postbattle_Outro_Text::
# 276 "data/maps/EverGrandeCity/scripts.pory"
	.string "???: No... that can't be!\p"
	.string "It's just because they got you a good\n"
	.string "POKeMON.\n"
	.string "Obviously, you got an expensive\l"
	.string "POKeMON for your birthday and it did all\l"
	.string "the work for you!\p"
	.string "You're just spoiled and airheaded!$"
