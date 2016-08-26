/* Copyright (c) 2007, Ecosensory Austin Texas All rights reserved. 
 * BSD license full text at: 
 * http://tinyos.cvs.sourceforge.net/tinyos/tinyos-2.x-contrib/ecosensory/license.txt
 * @author Joe Polastre and Cory Sharp
 * derived telosb  John Griessen 
 * @version $Revision: 1.3 $ $Date: 2007/12/22 00:10:22 $
 */
#include "hardware.h"

configuration PlatformC
{
  provides interface Init;
}
implementation
{
  components PlatformP, MotePlatformC, MoteClockC;

  Init = PlatformP;
  PlatformP.MoteClockInit -> MoteClockC;
  PlatformP.MoteInit -> MotePlatformC;
}

