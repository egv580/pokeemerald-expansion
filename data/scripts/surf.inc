EventScript_UseSurf::
	checkpartymove MOVE_SURF
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end


EventScript_UseFloatyBalloon::
	lockall
	msgbox gText_WantToUseFloatyBalloon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseFloatyBalloon
	msgbox gText_PlayerUsedFloatyBalloon, MSGBOX_DEFAULT
	setflag(FLAG_FLOATYBALLOON_IS_ACTIVE)
	dofieldeffect FLDEFF_SURF_WITH_BALLOON
EventScript_ReleaseUseFloatyBalloon::
	releaseall
EventScript_EndUseFloatyBalloon::
	end
