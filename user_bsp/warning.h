#ifndef _ALLEN_H_
#define _ALLEN_H_
#include<reg52.h>

sbit buz=P3^6;//�������ܽ�

#define highest_temp 30//30  0C����
void Check(int temp);//����Ϊ�����¶�
void biz_init();
#endif