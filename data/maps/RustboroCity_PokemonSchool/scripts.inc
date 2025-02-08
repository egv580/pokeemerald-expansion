RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_Sootopolitans, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_TheIslands, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_UltraWormholes, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	msgbox RustboroCity_PokemonSchool_Text_Draconids, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_PerplexedKid::
	msgbox RustboroCity_PokemonSchool_Text_ItsTooHard, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ChildGenius::
	lock
	faceplayer
	msgbox RustboroCity_PokemonSchool_Text_ChildGenius, MSGBOX_DEFAULT
	closemessage
	showmonpic SPECIES_RAYQUAZA, 10, 3
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_NORMAL
	waitmoncry
	hidemonpic
	delay 10
	showmonpic SPECIES_JIRACHI, 10, 3
	playmoncry SPECIES_JIRACHI, CRY_MODE_NORMAL
	waitmoncry
	hidemonpic
	delay 10
	msgbox RustboroCity_PokemonSchool_Text_ChildGeniusDrawings, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "The blackboard is covered in equations\n"
	.string "and diagrams of rockets.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison2:
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw2:
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Rocketry is a beautiful and\n"
	.string "exciting new field!\p"
	.string "These kids were missing out on a lot\n"
	.string "with their regular teacher.\l"
	.string "I'm showing them the wonders of science!\p"
	.string "Here, why don't you get a souvenir too?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "Earth is the place that both humans\n"
	.string "and POKéMON call home.\p"
	.string "But some legends say that POKéMON\n"
	.string "dwell in outer space as well.\p"
	.string "These stories used to be dismissed as\n"
	.string "fantasy, but recently, science has\l"
	.string "brought evidence that there might be\l"
	.string "something out there.\p"
	.string "Colorful flares have been observed\n"
	.string "that have a radiation profile similar\l"
	.string "to a black hole. They appear randomly,\l"
	.string "and mimic the energy of POKéMON attacks.$"


RustboroCity_PokemonSchool_Text_Sootopolitans:
	.string "Apart from the DRACONIDs, we know\n"
	.string "of another ancient people native to\l"
	.string "the HOENN region:\l"
	.string "the SOOTOPOLITAN people.\p"
	.string "These people dwelled in the crater that\n"
	.string "is now SOOTOPOLIS CITY.\p"
	.string "However, recent archaeological evidence\n"
	.string "shows that they were originally native to\l"
	.string "the independent island-cities: MOSSDEEP and\l"
	.string "EVER GRANDE.\p"


RustboroCity_PokemonSchool_Text_TheIslands:
	.string "MOSSDEEP and EVER GRANDE were less\n"
	.string "affected by the ancient meteor showers\l"
	.string "than the rest of HOENN.\p"
	.string "To this day, these cities enjoy a mild\n"
	.string "climate and good ecology.\p"
	.string "Interestingly, however, geologists\n"
	.string "have found white-colored rocks in\l"
	.string "MOSSDEEP and EVER GRANDE, made of the\l"
	.string "same material as the famous white rocks\l"
	.string "that form SOOTOPOLIS CITY.\p"
	.string "The properties of this rock differ\n"
	.string "from other mineral samples on Earth,\l"
	.string "leading some to speculate that it\l"
	.string "originated from space.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "A POKéMON holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by POKéMON.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "I'm trading POKéMON with my friend\n"
	.string "right now.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "I always wanted a SEEDOT, and\n"
	.string "I'm finally getting one!$"

RustboroCity_PokemonSchool_Text_ChildGenius:
	.string "I'm a child genius!\n"
	.string "That means I already know all of this.\p"
	.string "So I'm just doodling things in my notebook.\n"
	.string "Here, I'll let you look!$"

RustboroCity_PokemonSchool_Text_ChildGeniusDrawings:
	.string "The first one's RAYQUAZA, and the\n"
	.string "second one's JIRACHI.\p"
	.string "Legend has it that JIRACHI comes down\n"
	.string "from space sometimes to grant\l"
	.string "people's wishes.\p"
	.string "Maybe it could tell us about space!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "… I fell asleep when she started\n"
	.string "talking about Newton's Second Law.\p"
	.string "Then when I woke up, she was talking about\n"
	.string "equations that prove wormholes are possible.\p"
	.string "I'm really scared about the test…$"

RustboroCity_PokemonSchool_Text_Draconids:
	.string "Legend says that there were an ancient\n"
	.string "people in HOENN called the DRACONIDS.\p"
	.string "They worshipped a POKéMON from outer\n"
	.string "space called RAYQUAZA.\p"
	.string "But we can't really test if that's true,\n"
	.string "since we can't go into space ourselves.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "Our regular teacher's sick, so they\n"
	.string "hired a substitute.\p"
	.string "She's teaching us stuff that's\n"
	.string "ten times harder!$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "It's this student's notebook…\p"
	.string "“The study of outer space has rapidly\n"
	.string "advanced thanks to modern telescopes.\p"
	.string "However, travelling to space still\n"
	.string "remains an elusive dream.\p"
	.string "Recently, it was mathematically\n"
	.string "proven that building a rocket\l"
	.string "that could escape Earth's gravity\l"
	.string "is possible.\p"
	.string "Now we prove the classical rocket\n"
	.string "equation as a small exercise…”$"

RustboroCity_PokemonSchool_Text_UltraWormholes:
	.string "Apparently, scientists have been\n"
	.string "seing weird flares in the night sky.\p"
	.string "Our sub's saying that they're actually\n"
	.string "warps into parallel worlds.\p"
	.string "I wish I could warp myself some food…$"

RustboroCity_PokemonSchool_Text_ItsTooHard:
	.string "I don't get it! It's too hard!$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "SCOTT: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
	.string "SCOTT: Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

