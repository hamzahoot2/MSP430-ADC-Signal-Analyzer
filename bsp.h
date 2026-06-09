#ifndef _BSP_H
#define _BSP_H_
#include <msp430g2553.h>

#define DataSegStart    0x200
#define CodeSegStart    0xC000
#define StackTosStart   0x0400

#define del200us        210        
#define del15ms         15728
#define del5ms          5242
#define bigtime         65535

#define ENctrl          0x20
#define RSctrl          0x40
#define RWctrl          0x80

// LCD Abstraction
#define ArrPort         &P1OUT
#define ArrPortDir      &P1DIR
#define ArrPortSel      &P1SEL

// PushButtons & Switches
#define SWsArrPort      &P2IN
#define SWsArrPortDir   &P2DIR
#define PBvolt          &P2OUT 
#define PBsArrPort      &P2IN 
#define PBsArrIntPend   &P2IFG 
#define PBsArrIntEn     &P2IE
#define PBsArrIntEdgeSel &P2IES
#define PBsArrPortSel   &P2SEL 
#define PBsArrPortDir   &P2DIR 

#define PB0             0x01
#define PB1             0x02
#define PB2             0x04

#endif