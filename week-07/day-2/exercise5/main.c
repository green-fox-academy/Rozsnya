/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
			

int main(void)
{
	HAL_Init();
	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);
	BSP_LED_Init(LED1);
	int x = 2;
	while(1){
		for(int i = 0; i < 12; ){
			if(i < 3){
			BSP_LED_On(LED1);
			HAL_Delay(2000);
			BSP_LED_Off(LED1);
			HAL_Delay(2000);
			} else if(2 < i && i < 6){
			BSP_LED_On(LED1);
			HAL_Delay(1000);
			BSP_LED_Off(LED1);
			HAL_Delay(1000);
			} else if(5 < i && i < 9){
			BSP_LED_On(LED1);
			HAL_Delay(500);
			BSP_LED_Off(LED1);
			HAL_Delay(500);
			} else if(8 < i && i < 12){
			BSP_LED_On(LED1);
			HAL_Delay(250);
			BSP_LED_Off(LED1);
			HAL_Delay(250);
			}
			if(x % 2 == 0){
				i++;
			} else {
				i--;
			}
			if(i == 12){
				x++;
				i-=4;
			}
			if(i == 0){
				x++;
				i+=3;
			}
		}
	}
}
