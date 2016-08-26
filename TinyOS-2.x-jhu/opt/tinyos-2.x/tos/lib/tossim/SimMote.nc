/*
 * "Copyright (c) 2005 Stanford University. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 * 
 * IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF STANFORD UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 * 
 * STANFORD UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND STANFORD UNIVERSITY
 * HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 * ENHANCEMENTS, OR MODIFICATIONS."
 */

/**
 * TOSSIM-specific interface to access a mote's state. TinyOS programs
 * should never use this interface.
 *
 * @author Philip Levis
 * @date   Nov 22 2005
 */

// $Id$

interface SimMote {
  async command long long int getEuid();
  async command void setEuid(long long int euid);
  async command long long int getStartTime();
  async command bool isOn();
  async command int getVariableInfo(char* name, void** ptr, size_t* len);
  command void turnOn();
  async command void turnOff();
  
  
  command error_t setRadioChannel(uint8_t newRadioChannel);   // MIKE_LIANG, Bo
  async command uint8_t getRadioChannel();   // MIKE_LIANG, Bo
  
  //added by Bo
  async command int* getTcpMsg();
  async command void setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id);
  
  //added by Bo
  async command bool isIdle();
  command void disableIdle();
  async command void enableIdle();
}