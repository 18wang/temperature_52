
#include "LCD1602.h"
#include "ad-read.h"
#include "warning.h"

BYTE code dis1 []={"Temperature"};

main()
{
	BYTE i;
	int ad;
	double temp_f,V;
	biz_init();
	lcd_init();	
	delay (10);	
	while(1)
	{
		lcd_wcmd (0x01);   //����
		lcd_pos (0);	   //��һ�����temperature
 	 i=0;
  	while (dis1 [i]!='\0')
   {
     lcd_wdat (dis1 [i]);
	 delay(1);
     i++;	
   } 
		ad=read1543(0x00);
		V=ad*4.96/1024.0;
		temp_f=640.5*V-80.62+65;//640.5*V-80.62Ϊ��������������ֵ��65Ϊʵ������ֵ�൱��ʵ���¶ȼ�6.5
		Out(temp_f);//����ڶ��в����¶�ֵ
		Check(temp_f/10);//���±�������	
		delay(200);//200ms��ʱ
	}
}
