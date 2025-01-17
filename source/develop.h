/*
Copyright (C) 1994-1995 Apogee Software, Ltd.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
#ifndef _develop_public
#define _develop_public

#define WEAPONCHEAT 1
#define BATTLECHECK 0 // This should be turned off for release, on for beta
#define BATTLEINFO 0  // This should be turned off for release

#define DELUXE 0
#define LOWCOST 0

#define BNACRASHPREVENT 1 // bna added
// Flavor selection (shareware, registered, cd version, site license) has moved
// to the Makefile
#ifndef SHAREWARE
#define SHAREWARE 0
#endif

/* disable comm-bat because it's very broken */
#ifndef ENABLE_COMMBAT
#define ENABLE_COMMBAT 0
#endif

// cute little dopefish thing, only works with special patch?
#define DOPEFISH 0

// okay?

#define TEDLAUNCH 0
#define SOFTERROR 0
#define WHEREAMI 0

#if (WHEREAMI == 1)

#define wami(val) \
	{ \
		programlocation = val; \
	}

#define waminot()
/*
   {                  \
   programlocation=-1;\
   }
*/

#else

#define wami(val)
#define waminot()

#endif

#endif
