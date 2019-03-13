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

GPIO_InitTypeDef led_A;
GPIO_InitTypeDef button_B;

uint32_t last_debounce_time = 0;    // the last time the output pin was toggled
const uint32_t debounce_delay = 150;    // the debounce time in ms (increase if the output flickers)
volatile int counter = 0;

void init_extra_button()
{
	__HAL_RCC_GPIOB_CLK_ENABLE();

	button_B.Pin = GPIO_PIN_4;
	button_B.Mode = GPIO_MODE_IT_RISING;
	button_B.Pull = GPIO_NOPULL;
	button_B.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOB, &button_B);

	HAL_NVIC_SetPriority(EXTI4_IRQn, 4, 0);
	HAL_NVIC_EnableIRQ(EXTI4_IRQn);

}

void init_led()
{
	__HAL_RCC_GPIOA_CLK_ENABLE();

	led_A.Pin = GPIO_PIN_15;
	led_A.Mode = GPIO_MODE_OUTPUT_PP;
	led_A.Pull = GPIO_NOPULL;
	led_A.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOA, &led_A);
}

int main(void)
{
	HAL_Init();

	init_extra_button();
	init_led();

	BSP_LED_Init(LED_GREEN);

	while(1){
	}

}

void EXTI4_IRQHandler()
{
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    uint32_t current_time = HAL_GetTick();
    if (current_time < last_debounce_time + debounce_delay) {
        // Do nothing (this is not a real button press)
        return;
    }

    last_debounce_time = current_time;

	BSP_LED_Toggle(LED_GREEN);

	counter++;

	if(GPIO_Pin == button_B.Pin && counter == 5){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_SET);
	} else if (GPIO_Pin == button_B.Pin && counter == 10){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15, GPIO_PIN_RESET);
		counter = 0;
	}
}





