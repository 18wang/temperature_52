#ifndef _AD_READ_H_
#define _AD_READ_H_

#include <reg52.h>

#define uchar unsigned char

#define uint unsigned int

#define ulong unsigned long
sbit SD0 = P1^0;	//�������

sbit CS = P1^2;	//Ƭѡ

sbit CLK = P1^3;	//ʱ��

sbit DIN = P1^1; //��������

sbit EOC=P1^4;	//ת������


//chunnle0-10��Ϊ16 bits��MSB first��unipolar

uint read1543(uchar addr);
#endif