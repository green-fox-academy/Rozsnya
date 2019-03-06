#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create a config structure */
GPIO_InitTypeDef LEDSF;
GPIO_InitTypeDef LEDSA;

int main(void) {
	int x = 0;
	HAL_Init();

	/* we need to enable the GPIOA port's clock first */
	__HAL_RCC_GPIOA_CLK_ENABLE()
	;
	__HAL_RCC_GPIOF_CLK_ENABLE()
	;

	LEDSF.Pin = GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_8; /* setting up 2 pins at once with | operator */
	LEDSF.Mode = GPIO_MODE_OUTPUT_PP; /* configure as output, in push-pull mode */
	LEDSF.Pull = GPIO_NOPULL; /* we don't need internal pull-up or -down resistor */
	LEDSF.Speed = GPIO_SPEED_HIGH; /* we need a high-speed output */

	LEDSA.Pin = GPIO_PIN_0;
	LEDSA.Mode = GPIO_MODE_OUTPUT_PP;
	LEDSA.Pull = GPIO_NOPULL;
	LEDSA.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOF, &LEDSF); /* initialize the pin on GPIOF port */
	HAL_GPIO_Init(GPIOA, &LEDSA);

	while (1) {
		for (int i = 1; i < 5;) {

			if (i == 1) {
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
			} else {
				HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
			}
			if (i == 2) {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
			}
			if (i == 3) {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
			}
			if (i == 4) {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
			} else {
				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
			}
			if (x % 2 == 0) {
				i++;
			} else {
				i--;
			}
			if (i == 4 || i == 1) {
				x++;
			}
			HAL_Delay(250);
		}
	}
}
