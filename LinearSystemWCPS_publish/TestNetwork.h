#ifndef TEST_NETWORK_H
#define TEST_NETWORK_H

#include <AM.h>
#include "TestNetworkC.h"

typedef nx_struct TestNetworkMsg {
  nx_am_addr_t source;
  nx_uint16_t seqno;
  nx_am_addr_t parent;
  nx_uint16_t metric;
  
  //nx_uint16_t data1;
  //nx_float data1;
  nx_uint8_t data1;
  nx_uint8_t data2;
  nx_uint8_t data3;
  nx_uint8_t data4;
  nx_uint8_t data5;
  
  nx_uint8_t data6;
  nx_uint8_t data7;
  nx_uint8_t data8;
  nx_uint8_t data9;
  nx_uint8_t data10;
  
  nx_uint8_t data11;
  nx_uint8_t data12;
  nx_uint8_t data13;
  nx_uint8_t data14;
  nx_uint8_t data15;
  
  nx_uint8_t data16;
  nx_uint8_t data17;
  nx_uint8_t data18;
  nx_uint8_t data19;
  nx_uint8_t data20;
  
  nx_uint8_t data21;
  nx_uint8_t data22;
  nx_uint8_t data23;
  nx_uint8_t data24;
  nx_uint8_t data25;
  
  nx_uint8_t data26;
  nx_uint8_t data27;
  nx_uint8_t data28;
  nx_uint8_t data29;
  nx_uint8_t data30;
  
  nx_uint8_t data31;
  nx_uint8_t data32;
  nx_uint8_t data33;
  nx_uint8_t data34;
  nx_uint8_t data35;
  
  nx_uint8_t data36;
  nx_uint8_t data37;
  nx_uint8_t data38;
  nx_uint8_t data39;
  nx_uint8_t data40;
  
  nx_uint8_t data41;
  nx_uint8_t data42;
  nx_uint8_t data43;
  nx_uint8_t data44;
  nx_uint8_t data45;
  
  nx_uint8_t data46;
  nx_uint8_t data47;
  nx_uint8_t data48;
  nx_uint8_t data49;
  nx_uint8_t data50;
  
  nx_uint8_t data51;
  nx_uint8_t data52;
  nx_uint8_t data53;
  nx_uint8_t data54;
  nx_uint8_t data55;
  
  nx_uint8_t data56;
  nx_uint8_t data57;
  nx_uint8_t data58;
  nx_uint8_t data59;
  nx_uint8_t data60;
  
  nx_uint8_t data61;
  nx_uint8_t data62;
  nx_uint8_t data63;
  nx_uint8_t data64;
  nx_uint8_t data65;
 
  nx_uint8_t data66;
  nx_uint8_t data67;
  nx_uint8_t data68;
  nx_uint8_t data69;
  nx_uint8_t data70;
  
  nx_uint8_t data71;
  nx_uint8_t data72;
  nx_uint8_t data73;
  nx_uint8_t data74;
  nx_uint8_t data75;
  
  nx_uint8_t data76;
  nx_uint8_t data77;
  nx_uint8_t data78;
  nx_uint8_t data79;
  nx_uint8_t data80;
  
  nx_uint8_t data81;
  nx_uint8_t data82;
  nx_uint8_t data83;
  nx_uint8_t data84;
  nx_uint8_t data85;
  
  nx_uint8_t data86;
  nx_uint8_t data87;
  nx_uint8_t data88;
  nx_uint8_t data89;
  nx_uint8_t data90;
  
  nx_uint8_t data91;
  nx_uint8_t data92;
  nx_uint8_t data93;
  nx_uint8_t data94;
  nx_uint8_t data95;
  
  nx_uint8_t data96;
  nx_uint8_t data97;
  nx_uint8_t data98;
  nx_uint8_t data99;
  nx_uint8_t data100;
  
  nx_uint8_t data101;
  nx_uint8_t data102;
  nx_uint8_t data103;
  nx_uint8_t data104;
  nx_uint8_t data105;
  nx_uint8_t data106;
  nx_uint8_t data107;
  nx_uint8_t data108;
  nx_uint8_t data109;
  nx_uint8_t data110;
  
  nx_uint8_t data111;
  nx_uint8_t data112;
  
  nx_uint8_t hopcount;
  nx_uint16_t sendCount;
  nx_uint16_t sendSuccessCount;
} TestNetworkMsg;

#endif
