#ifndef __LED_H
#define __LED_H	 
#include "sys.h"

#define LED0 PAout(8)	// PA8

void LED_Init(void);//��ʼ��
void led0_task(void *pvParameters);

		 				    
#endif
