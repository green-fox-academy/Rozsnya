#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

TIM_HandleTypeDef red_pwm;
TIM_HandleTypeDef blue_pwm;
TIM_HandleTypeDef green_pwm;
GPIO_InitTypeDef red_led;
GPIO_InitTypeDef blue_led;
GPIO_InitTypeDef green_led;
GPIO_InitTypeDef button1;
GPIO_InitTypeDef button2;
GPIO_InitTypeDef button3;

uint32_t last_debounce_time = 0;    // the last time the output pin was toggled
const uint32_t debounce_delay = 150;    // the debounce time in ms (increase if the output flickers)

void init_pwm();
void init_leds();
void init_buttons();

static void Error_Handler(void);
static void SystemClock_Config(void);

int main(void) {

	HAL_Init();
	SystemClock_Config();
	init_pwm();
	init_leds();
	init_buttons();

	__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 100);
	__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 100);
	__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 100);

	HAL_NVIC_SetPriority(EXTI9_5_IRQn, 4, 0);
	HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 4, 0);
	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

	while (1) {

	}
}
void init_pwm() {
	__HAL_RCC_TIM12_CLK_ENABLE()
	;
	__HAL_RCC_TIM1_CLK_ENABLE()
	;
	__HAL_RCC_TIM2_CLK_ENABLE()
	;

	red_pwm.Instance = TIM2;
	red_pwm.Init.Prescaler = 108 - 1;
	red_pwm.Init.Period = 100 - 1;
	red_pwm.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	red_pwm.Init.CounterMode = TIM_COUNTERMODE_UP;
	HAL_TIM_PWM_Init(&red_pwm);

	blue_pwm.Instance = TIM12;
	blue_pwm.Init.Prescaler = 108 - 1;
	blue_pwm.Init.Period = 100 - 1;
	blue_pwm.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	blue_pwm.Init.CounterMode = TIM_COUNTERMODE_UP;
	HAL_TIM_PWM_Init(&blue_pwm);

	green_pwm.Instance = TIM1;
	green_pwm.Init.Prescaler = 108 - 1;
	green_pwm.Init.Period = 100 - 1;
	green_pwm.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	green_pwm.Init.CounterMode = TIM_COUNTERMODE_UP;
	HAL_TIM_PWM_Init(&green_pwm);
	TIM_OC_InitTypeDef config;
	config.Pulse = 0;
	config.OCMode = TIM_OCMODE_PWM1;
	config.OCPolarity = TIM_OCPOLARITY_HIGH;
	config.OCFastMode = TIM_OCFAST_ENABLE;
	HAL_TIM_PWM_ConfigChannel(&red_pwm, &config, TIM_CHANNEL_1);
	HAL_TIM_PWM_ConfigChannel(&green_pwm, &config, TIM_CHANNEL_1);
	HAL_TIM_PWM_ConfigChannel(&blue_pwm, &config, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&red_pwm, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&green_pwm, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&blue_pwm, TIM_CHANNEL_2);

}
void init_leds() {
	__HAL_RCC_GPIOA_CLK_ENABLE()
	;
	red_led.Pin = GPIO_PIN_15;
	red_led.Mode = GPIO_MODE_AF_OD;
	red_led.Pull = GPIO_NOPULL;
	red_led.Alternate = GPIO_AF1_TIM2;
	HAL_GPIO_Init(GPIOA, &red_led);
	green_led.Pin = GPIO_PIN_8;
	green_led.Mode = GPIO_MODE_AF_OD;
	green_led.Pull = GPIO_NOPULL;
	green_led.Alternate = GPIO_AF1_TIM1;
	HAL_GPIO_Init(GPIOA, &green_led);
	__HAL_RCC_GPIOB_CLK_ENABLE()
	;
	blue_led.Pin = GPIO_PIN_15;
	blue_led.Mode = GPIO_MODE_AF_OD;
	blue_led.Pull = GPIO_NOPULL;
	blue_led.Alternate = GPIO_AF9_TIM12;
	HAL_GPIO_Init(GPIOB, &blue_led);
}
void init_buttons() {
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	button1.Pin = GPIO_PIN_10;
	button1.Mode = GPIO_MODE_IT_RISING;
	button1.Pull = GPIO_NOPULL;
	button1.Speed = GPIO_SPEED_HIGH;
	HAL_GPIO_Init(GPIOF, &button1);

	button2.Pin = GPIO_PIN_9;
	button2.Mode = GPIO_MODE_IT_RISING;
	button2.Pull = GPIO_NOPULL;
	button2.Speed = GPIO_SPEED_HIGH;
	HAL_GPIO_Init(GPIOF, &button2);

	button3.Pin = GPIO_PIN_8;
	button3.Mode = GPIO_MODE_IT_RISING;
	button3.Pull = GPIO_NOPULL;
	button3.Speed = GPIO_SPEED_HIGH;
	HAL_GPIO_Init(GPIOF, &button3);

}

void EXTI9_5_IRQHandler(void) {
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
}

void EXTI15_10_IRQHandler(void) {
	HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_10);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    uint32_t current_time = HAL_GetTick();
    if (current_time < last_debounce_time + debounce_delay) {
        return;
    }

    last_debounce_time = current_time;
	if (GPIO_Pin == GPIO_PIN_10) {
		if (__HAL_TIM_GET_COMPARE(&blue_pwm, TIM_CHANNEL_2) == 0) {
			__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 100);
		} else {
			__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 0);
		}
	} else if (GPIO_Pin == GPIO_PIN_9) {
		if (__HAL_TIM_GET_COMPARE(&green_pwm, TIM_CHANNEL_1) == 0) {
			__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 100);
		} else {
			__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 0);
			__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 100);
		}
	} else if (GPIO_Pin == GPIO_PIN_8) {
		if (__HAL_TIM_GET_COMPARE(&red_pwm, TIM_CHANNEL_1) == 0) {
			__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 100);
		} else {
			__HAL_TIM_SET_COMPARE(&red_pwm, TIM_CHANNEL_1, 0);
			__HAL_TIM_SET_COMPARE(&green_pwm, TIM_CHANNEL_1, 100);
			__HAL_TIM_SET_COMPARE(&blue_pwm, TIM_CHANNEL_2, 100);
		}
	}
}

static void Error_Handler(void) {
}

static void SystemClock_Config(void) {
	RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
	RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };

	/**Configure the main internal regulator output voltage */
	__HAL_RCC_PWR_CLK_ENABLE()
	;
	__HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSIState = RCC_HSI_ON;
	RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PLLM = 8;
	RCC_OscInitStruct.PLL.PLLN = 216;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 2;

	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/**Activate the Over-Drive mode */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/**Initializes the CPU, AHB and APB busses clocks */
	RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}
