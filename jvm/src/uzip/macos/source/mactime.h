#ifndef _MACTIME_H_
#define _MACTIME_H_
/* -----------------------------------------------------------------------------

The original functions (Metrowerks Codewarrior pro 3.0) gmtime, localtime,
mktime and time do not work correctly. The supplied link library mactime.c
contains replacement functions for them.

 *     Caveat: On a Mac, we only know the GMT and DST offsets for
 *     the current time, not for the time in question.
 *     Mac has no support for DST handling.
 *     DST changeover is all manually set by the user.


------------------------------------------------------------------------------*/

#include <time.h>
#include <mactypes.h>

/*****************************************************************************/
/*  Macros, typedefs                                                         */
/*****************************************************************************/


  /*
   * ARGH.  Mac times are based on 1904 Jan 1 00:00, not 1970 Jan 1 00:00.
   *  So we have to diddle time_t's appropriately:  add or subtract 66 years'
   *  worth of seconds == number of days times 86400 == (66*365 regular days +
   *  17 leap days ) * 86400 == (24090 + 17) * 86400 == 2082844800L seconds.
   *  We hope time_t is an unsigned long (ulg) on the Macintosh...
   */
/*
This Offset is only used by MacFileDate_to_UTime()
*/

#define MACOS_TO_UNIX(x)  (x) -= (unsigned long)MacOS_2_Unix
#define UNIX_TO_MACOS(x)  (x) += (unsigned long)MacOS_2_Unix

/*
The MacOS function GetDateTime returns  the
number of seconds elapsed since midnight, January 1, 1904.
*/
extern const unsigned long MacOS_2_Unix;


/* prototypes for public utility functions */
time_t MacFtime2UnixFtime(unsigned long macftime);
unsigned long UnixFtime2MacFtime(time_t unxftime);
time_t  AdjustForTZmoveMac(unsigned long macloctim, long s_gmtoffs);
Boolean GetGMToffsetMac(unsigned long macftime, long *UTCoffset);


#endif
