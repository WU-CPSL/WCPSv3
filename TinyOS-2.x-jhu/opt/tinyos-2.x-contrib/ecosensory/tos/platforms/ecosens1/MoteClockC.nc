/* Copyright (c) 2007, Technische Universitaet Berlin All rights reserved.
 * BSD license full text at: 
 * http://tinyos.cvs.sourceforge.net/tinyos/tinyos-2.x-contrib/tub/license.txt
 *
 * $Id: MoteClockC.nc,v 1.1 2007/12/14 20:39:33 jgriessen Exp $
 * @author Vlado Handziski <handzisk@tkn.tu-berlind.de>
 */
 
configuration MoteClockC
{
  provides interface Init as MoteClockInit;
}
implementation

{
  components Msp430ClockC, MoteClockP;
  
  MoteClockInit = Msp430ClockC.Init;
  //MoteClockP.Msp430ClockInit -> Msp430ClockC;
}
