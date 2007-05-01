/* Coded by M. Tavella
 * email michele@liralab.it
 * web   http://mt.homelinux.org 
 */

#ifndef MINCLUDE_H
#define MINCLUDE_H

#include <string>
#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <deque>

using namespace std;

#define LMTOOLS_FNSIZE	1024

#define	SAT_POS_int16	+32767
#define	SAT_NEG_int16	-32768

#define	SAT_POS			SAT_POS_int16
#define	SAT_NEG			SAT_NEG_int16



#define LMTOOLS_P			"lmtools2"
#define LMTOOLS_V			"0.0.1"

#define AUTHOR				"M. Tavella"
#define MAIL 				"michele@liralab.it"
#define DISCLAIMER 			"Copyright (C) 2006 Michele Tavella\n \
This SW comes with NO WARRANTY, to the extent permitted by law.\n \
For information about the terms of redistribution,\n \
see the file named README in the mProcessDV distribution.\n \
Homepage: http://mt.homelinux.org/mt\n \
e-mail:   michele@liralab.it\n"

void welcome (void) {
	printf ("%s v%s by %s (%s)\n\n", LMTOOLS_P, LMTOOLS_V, AUTHOR, MAIL);
}


/* I should perform some cleaning over here... */
#define PROJECT				"lmtools - CONTACT Linguometer Tools"

#define PROJECT_MPDV 		"mProcessDV"
#define VERSION_MPDV 		"0.0.7"

#define PROJECT_MWS 		"mWords"
#define VERSION_MWS 		"0.0.1"

#define DV_PROFILE_MICHELE
#ifdef DV_PROFILE_MICHELE
#	define DV_PCM_CHANNELS	2
#	define DV_PCM_FREQUENCY	48000
#	define DV_PCM_BITS		16
#	define DV_PCM_BYTES		2
#	define DV_WIDHT			720
#	define DV_HEIGHT		576
#	define DV_BPP			3
#	define DV_FPS			25
#endif

#define EMPTY				""
#define	FN_SIZE				1024		// File Name size
#endif