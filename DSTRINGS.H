//
//	Printed strings for translation
//

//
// D_Main.C
//
#define D_DEVSTR	"Development mode ON.\n"
#define D_CDROM		"CD-ROM Version: default.cfg from c:\\doomdata\n"

//
//	M_Menu.C
//
#define PRESSKEY 	"press a key."
#define PRESSYN 	"press y or n."
#define QUITMSG		"are you sure you want to\nquit this great game?"
#define LOADNET 	"you can't do load while in a net game!\n\n"PRESSKEY
#define QLOADNET	"you can't quickload during a netgame!\n\n"PRESSKEY
#define QSAVESPOT	"you haven't picked a quicksave slot yet!\n\n"PRESSKEY
#define SAVEDEAD 	"you can't save if you aren't playing!\n\n"PRESSKEY
#define QSPROMPT 	"quicksave over your game named\n\n'%s'?\n\n"PRESSYN
#define QLPROMPT	"do you want to quickload the game named"\
					"\n\n'%s'?\n\n"PRESSYN
#define NEWGAME		"you can't start a new game\n"\
					"while in a network game.\n\n"PRESSKEY
#define NIGHTMARE	"are you sure? this skill level\n"\
					"isn't even remotely fair.\n\n"PRESSYN
#define SWSTRING	"this is the shareware version of doom.\n\n"\
					"you need to order the entire trilogy.\n\n"PRESSKEY
#define MSGOFF		"Messages OFF"
#define MSGON		"Messages ON"
#define NETEND		"you can't end a netgame!\n\n"PRESSKEY
#define ENDGAME		"are you sure you want to end the game?\n\n"PRESSYN
#ifdef __WATCOMC__
#define DOSY		"(press y to quit to dos.)"
#else
#define DOSY		"(press y to quit)"
#endif
#define DETAILHI	"High detail"
#define DETAILLO	"Low detail"
#define GAMMALVL0	"Gamma correction OFF"
#define GAMMALVL1	"Gamma correction level 1"
#define GAMMALVL2	"Gamma correction level 2"
#define GAMMALVL3	"Gamma correction level 3"
#define GAMMALVL4	"Gamma correction level 4"
#define EMPTYSTRING	"empty slot"

//
//	P_inter.C
//
#define GOTARMOR	"Picked up the armor."
#define GOTMEGA		"Picked up the MegaArmor!"
#define GOTHTHBONUS	"Picked up a health bonus."
#define GOTARMBONUS	"Picked up an armor bonus."
#define GOTSTIM		"Picked up a stimpack."
#define GOTMEDINEED	"Picked up a medikit that you REALLY need!"
#define GOTMEDIKIT	"Picked up a medikit."
#define GOTSUPER	"Supercharge!"

#define GOTBLUECARD	"Picked up a blue keycard."
#define GOTYELWCARD	"Picked up a yellow keycard."
#define GOTREDCARD	"Picked up a red keycard."
#define GOTBLUESKUL	"Picked up a blue skull key."
#define GOTYELWSKUL	"Picked up a yellow skull key."
#define GOTREDSKULL	"Picked up a red skull key."

#define GOTINVUL	"Invulnerability!"
#define GOTBERSERK	"Berserk!"
#define GOTINVIS	"Partial Invisibility"
#define GOTSUIT		"Radiation Shielding Suit"
#define GOTMAP		"Computer Area Map"
#define GOTVISOR	"Light Amplification Visor"
#define GOTMSPHERE	"MegaSphere!"

#define GOTCLIP		"Picked up a clip."
#define GOTCLIPBOX	"Picked up a box of bullets."
#define GOTROCKET	"Picked up a rocket."
#define GOTROCKBOX	"Picked up a box of rockets."
#define GOTCELL		"Picked up an energy cell."
#define GOTCELLBOX	"Picked up an energy cell pack."
#define GOTSHELLS	"Picked up 4 shotgun shells."
#define GOTSHELLBOX	"Picked up a box of shotgun shells."
#define GOTBACKPACK	"Picked up a backpack full of ammo!"

#define GOTBFG9000	"You got the BFG9000!  Oh, yes."
#define GOTCHAINGUN	"You got the chaingun!"
#define GOTCHAINSAW	"A chainsaw!  Find some meat!"
#define GOTLAUNCHER	"You got the rocket launcher!"
#define GOTPLASMA	"You got the plasma gun!"
#define GOTSHOTGUN	"You got the shotgun!"
#define GOTSHOTGUN2	"You got the super shotgun!"

//
// P_Doors.C
//
#define PD_BLUEO	"You need a blue key to activate this object"
#define PD_REDO		"You need a red key to activate this object"
#define PD_YELLOWO	"You need a yellow key to activate this object"
#define PD_BLUEK	"You need a blue key to open this door"
#define PD_REDK		"You need a red key to open this door"
#define PD_YELLOWK	"You need a yellow key to open this door"

//
//	G_game.C
//
#define GGSAVED		"game saved."

//
//	HU_stuff.C
//
#define HUSTR_MSGU	"[Message unsent]"

#define HUSTR_E1M1	"E1M1: Hangar"
#define HUSTR_E1M2	"E1M2: Nuclear Plant"
#define HUSTR_E1M3	"E1M3: Toxin Refinery"
#define HUSTR_E1M4	"E1M4: Command Control"
#define HUSTR_E1M5	"E1M5: Phobos Lab"
#define HUSTR_E1M6	"E1M6: Central Processing"
#define HUSTR_E1M7	"E1M7: Computer Station"
#define HUSTR_E1M8	"E1M8: Phobos Anomaly"
#define HUSTR_E1M9	"E1M9: Military Base"

#define HUSTR_E2M1	"E2M1: Deimos Anomaly"
#define HUSTR_E2M2	"E2M2: Containment Area"
#define HUSTR_E2M3	"E2M3: Refinery"
#define HUSTR_E2M4	"E2M4: Deimos Lab"
#define HUSTR_E2M5	"E2M5: Command Center"
#define HUSTR_E2M6	"E2M6: Halls of the Damned"
#define HUSTR_E2M7	"E2M7: Spawning Vats"
#define HUSTR_E2M8	"E2M8: Tower of Babel"
#define HUSTR_E2M9	"E2M9: Fortress of Mystery"

#define HUSTR_E3M1	"E3M1: Hell Keep"
#define HUSTR_E3M2	"E3M2: Slough of Despair"
#define HUSTR_E3M3	"E3M3: Pandemonium"
#define HUSTR_E3M4	"E3M4: House of Pain"
#define HUSTR_E3M5	"E3M5: Unholy Cathedral"
#define HUSTR_E3M6	"E3M6: Mt. Erebus"
#define HUSTR_E3M7	"E3M7: Limbo"
#define HUSTR_E3M8	"E3M8: Dis"
#define HUSTR_E3M9	"E3M9: Warrens"

#define HUSTR_1		"level 1: entryway"
#define HUSTR_2		"level 2: underhalls"
#define HUSTR_3		"level 3: the gantlet"
#define HUSTR_4		"level 4: the focus"
#define HUSTR_5		"level 5: the waste tunnels"
#define HUSTR_6		"level 6: the crusher"
#define HUSTR_7		"level 7: dead simple"
#define HUSTR_8		"level 8: tricks and traps"
#define HUSTR_9		"level 9: the pit"
#define HUSTR_10	"level 10: refueling base"
#define HUSTR_11	"level 11: 'o' of destruction!"

#define HUSTR_12	"level 12: the factory"
#define HUSTR_13	"level 13: downtown"
#define HUSTR_14	"level 14: the inmost dens"
#define HUSTR_15	"level 15: industrial zone"
#define HUSTR_16	"level 16: suburbs"
#define HUSTR_17	"level 17: tenements"
#define HUSTR_18	"level 18: the courtyard"
#define HUSTR_19	"level 19: the citadel"
#define HUSTR_20	"level 20: gotcha!"

#define HUSTR_21	"level 21: nirvana"
#define HUSTR_22	"level 22: the catacombs"
#define HUSTR_23	"level 23: barrels o' fun"
#define HUSTR_24	"level 24: the chasm"
#define HUSTR_25	"level 25: bloodfalls"
#define HUSTR_26	"level 26: the abandoned mines"
#define HUSTR_27	"level 27: monster condo"
#define HUSTR_28	"level 28: the spirit world"
#define HUSTR_29	"level 29: the living end"
#define HUSTR_30	"level 30: icon of sin"

#define HUSTR_31	"level 31: wolfenstein"
#define HUSTR_32	"level 32: grosse"


#define HUSTR_CHATMACRO1	"I'm ready to kick butt!"
#define HUSTR_CHATMACRO2	"I'm OK."
#define HUSTR_CHATMACRO3	"I'm not looking too good!"
#define HUSTR_CHATMACRO4	"Help!"
#define HUSTR_CHATMACRO5	"You suck!"
#define HUSTR_CHATMACRO6	"Next time, scumbag..."
#define HUSTR_CHATMACRO7	"Come here!"
#define HUSTR_CHATMACRO8	"I'll take care of it."
#define HUSTR_CHATMACRO9	"Yes"
#define HUSTR_CHATMACRO0	"No"

#define HUSTR_TALKTOSELF1	"You mumble to yourself"
#define HUSTR_TALKTOSELF2	"Who's there?"
#define HUSTR_TALKTOSELF3	"You scare yourself"
#define HUSTR_TALKTOSELF4	"You start to rave"
#define HUSTR_TALKTOSELF5	"You've lost it..."

#define HUSTR_MESSAGESENT	"[Message Sent]"

// The following should NOT be changed unless it seems
// just AWFULLY necessary

  #define HUSTR_PLRGREEN	"Green: "
  #define HUSTR_PLRINDIGO	"Indigo: "
  #define HUSTR_PLRBROWN	"Brown: "
  #define HUSTR_PLRRED		"Red: "

  #define HUSTR_KEYGREEN	'g'
  #define HUSTR_KEYINDIGO	'i'
  #define HUSTR_KEYBROWN	'b'
  #define HUSTR_KEYRED		'r'

//
//	AM_map.C
//

#define AMSTR_FOLLOWON		"Follow Mode ON"
#define AMSTR_FOLLOWOFF		"Follow Mode OFF"

#define AMSTR_GRIDON		"Grid ON"
#define AMSTR_GRIDOFF		"Grid OFF"

#define AMSTR_MARKEDSPOT	"Marked Spot"
#define AMSTR_MARKSCLEARED	"All Marks Cleared"

//
//	ST_stuff.C
//

#define STSTR_MUS		"Music Change"
#define STSTR_NOMUS		"IMPOSSIBLE SELECTION"
#define STSTR_DQDON		"Degreelessness Mode On"
#define STSTR_DQDOFF		"Degreelessness Mode Off"

#define STSTR_KFAADDED		"Very Happy Ammo Added"
#define STSTR_FAADDED		"Ammo (no keys) Added"

#define STSTR_NCON		"No Clipping Mode ON"
#define STSTR_NCOFF		"No Clipping Mode OFF"

#define STSTR_BEHOLD		"inVuln, Str, Inviso, Rad, Allmap, or Lite-amp"
#define STSTR_BEHOLDX		"Power-up Toggled"

#define STSTR_CHOPPERS		"... doesn't suck - GM"
#define STSTR_CLEV		"Changing Level..."

//
//	F_Finale.C
//
#define E1TEXT	"Once you beat the big badasses and\n"\
				"clean out the moon base you're supposed\n"\
				"to win, aren't you? Aren't you? Where's\n"\
				"your fat reward and ticket home? What\n"\
				"the hell is this? It's not supposed to\n"\
				"end this way!\n"\
				"\n" \
				"It stinks like rotten meat, but looks\n"\
				"like the lost Deimos base.  Looks like\n"\
				"you're stuck on The Shores of Hell.\n"\
				"The only way out is through.\n"\
				"\n"\
				"To continue the DOOM experience, play\n"\
				"The Shores of Hell and its amazing\n"\
				"sequel, Inferno!\n"
				
#define E2TEXT	"You've done it! The hideous cyber-\n"\
				"demon lord that ruled the lost Deimos\n"\
				"moon base has been slain and you\n"\
				"are triumphant! But ... where are\n"\
				"you? You clamber to the edge of the\n"\
				"moon and look down to see the awful\n"\
				"truth.\n" \
				"\n"\
				"Deimos floats above Hell itself!\n"\
				"You've never heard of anyone escaping\n"\
				"from Hell, but you'll make the bastards\n"\
				"sorry they ever heard of you! Quickly,\n"\
				"you rappel down to  the surface of\n"\
				"Hell.\n"\
				"\n" \
				"Now, it's on to the final chapter of\n"\
				"DOOM! -- Inferno."

#define E3TEXT	"The loathsome spiderdemon that\n"\
				"masterminded the invasion of the moon\n"\
				"bases and caused so much death has had\n"\
				"its ass kicked for all time.\n"\
				"\n"\
				"A hidden doorway opens and you enter.\n"\
				"You've proven too tough for Hell to\n"\
				"contain, and now Hell at last plays\n"\
				"fair -- for you emerge from the door\n"\
				"to see the green fields of Earth!\n"\
				"Home at last.\n" \
				"\n"\
				"You wonder what's been happening on\n"\
				"Earth while you were battling evil\n"\
				"unleashed. It's good that no Hell-\n"\
				"spawn could have come through that\n"\
				"door with you ..."



// after level 6, put this:

#define C1TEXT	"YOU HAVE ENTERED DEEPLY INTO THE INFESTED\n" \
				"STARPORT. BUT SOMETHING IS WRONG. THE\n" \
				"MONSTERS HAVE BROUGHT THEIR OWN REALITY\n" \
				"WITH THEM, AND THE STARPORT'S TECHNOLOGY\n" \
				"IS BEING SUBVERTED BY THEIR PRESENCE.\n" \
				"\n"\
				"AHEAD, YOU SEE AN OUTPOST OF HELL, A\n" \
				"FORTIFIED ZONE. IF YOU CAN GET PAST IT,\n" \
				"YOU CAN PENETRATE INTO THE HAUNTED HEART\n" \
				"OF THE STARBASE AND FIND THE CONTROLLING\n" \
				"SWITCH WHICH HOLDS EARTH'S POPULATION\n" \
				"HOSTAGE."

// After level 11, put this:

#define C2TEXT	"YOU HAVE WON! YOUR VICTORY HAS ENABLED\n" \
				"HUMANKIND TO EVACUATE EARTH AND ESCAPE\n"\
				"THE NIGHTMARE.  NOW YOU ARE THE ONLY\n"\
				"HUMAN LEFT ON THE FACE OF THE PLANET.\n"\
				"CANNIBAL MUTATIONS, CARNIVOROUS ALIENS,\n"\
				"AND EVIL SPIRITS ARE YOUR ONLY NEIGHBORS.\n"\
				"YOU SIT BACK AND WAIT FOR DEATH, CONTENT\n"\
				"THAT YOU HAVE SAVED YOUR SPECIES.\n"\
				"\n"\
				"BUT THEN, EARTH CONTROL BEAMS DOWN A\n"\
				"MESSAGE FROM SPACE: \"SENSORS HAVE LOCATED\n"\
				"THE SOURCE OF THE ALIEN INVASION. IF YOU\n"\
				"GO THERE, YOU MAY BE ABLE TO BLOCK THEIR\n"\
				"ENTRY.  THE ALIEN BASE IS IN THE HEART OF\n"\
				"YOUR OWN HOME CITY, NOT FAR FROM THE\n"\
				"STARPORT.\" SLOWLY AND PAINFULLY YOU GET\n"\
				"UP AND RETURN TO THE FRAY."

// After level 20, put this:

#define C3TEXT	"YOU ARE AT THE CORRUPT HEART OF THE CITY,\n"\
				"SURROUNDED BY THE CORPSES OF YOUR ENEMIES.\n"\
				"YOU SEE NO WAY TO DESTROY THE CREATURES'\n"\
				"ENTRYWAY ON THIS SIDE, SO YOU CLENCH YOUR\n"\
				"TEETH AND PLUNGE THROUGH IT.\n"\
				"\n"\
				"THERE MUST BE A WAY TO CLOSE IT ON THE\n"\
				"OTHER SIDE. WHAT DO YOU CARE IF YOU'VE\n"\
				"GOT TO GO THROUGH HELL TO GET TO IT?"

// After level 29, put this:

#define C4TEXT	"THE HORRENDOUS VISAGE OF THE BIGGEST\n"\
				"DEMON YOU'VE EVER SEEN CRUMBLES BEFORE\n"\
				"YOU, AFTER YOU PUMP YOUR ROCKETS INTO\n"\
				"HIS EXPOSED BRAIN. THE MONSTER SHRIVELS\n"\
				"UP AND DIES, ITS THRASHING LIMBS\n"\
				"DEVASTATING UNTOLD MILES OF HELL'S\n"\
				"SURFACE.\n"\
				"\n"\
				"YOU'VE DONE IT. THE INVASION IS OVER.\n"\
				"EARTH IS SAVED. HELL IS A WRECK. YOU\n"\
				"WONDER WHERE BAD FOLKS WILL GO WHEN THEY\n"\
				"DIE, NOW. WIPING THE SWEAT FROM YOUR\n"\
				"FOREHEAD YOU BEGIN THE LONG TREK BACK\n"\
				"HOME. REBUILDING EARTH OUGHT TO BE A\n"\
				"LOT MORE FUN THAN RUINING IT WAS.\n"

// Before level 31, put this:

#define C5TEXT	"CONGRATULATIONS, YOU'VE FOUND THE SECRET\n"\
				"LEVEL! LOOKS LIKE IT'S BEEN BUILT BY\n"\
				"HUMANS, RATHER THAN DEMONS. YOU WONDER\n"\
				"WHO THE INMATES OF THIS CORNER OF HELL\n"\
				"WILL BE."

// Before level 32, put this:

#define C6TEXT	"CONGRATULATIONS, YOU'VE FOUND THE\n"\
				"SUPER SECRET LEVEL!  YOU'D BETTER\n"\
				"BLAZE THROUGH THIS ONE!\n"

//
// Character cast strings F_FINALE.C
//
#define CC_ZOMBIE	"ZOMBIEMAN"
#define CC_SHOTGUN	"SHOTGUN GUY"
#define CC_HEAVY	"HEAVY WEAPON DUDE"
#define CC_IMP		"IMP"
#define CC_DEMON	"DEMON"
#define CC_LOST		"LOST SOUL"
#define CC_CACO		"CACODEMON"
#define CC_HELL		"HELL KNIGHT"
#define CC_BARON	"BARON OF HELL"
#define CC_ARACH	"ARACHNOTRON"
#define CC_PAIN		"PAIN ELEMENTAL"
#define CC_REVEN	"REVENANT"
#define CC_MANCU	"MANCUBUS"
#define CC_ARCH		"ARCH-VILE"
#define CC_SPIDER	"THE SPIDER MASTERMIND"
#define CC_CYBER	"THE CYBERDEMON"
#define CC_HERO		"OUR HERO"
