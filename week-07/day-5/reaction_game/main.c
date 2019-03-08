#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* necessary include files */
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_lcd.h"

static void Error_Handler(void);
static void SystemClock_Config(void);
TS_StateTypeDef Game;
RNG_HandleTypeDef Instance;

int main(void)
{
	__HAL_RCC_RNG_CLK_ENABLE();
    HAL_Init();
    SystemClock_Config();

    /* initializing LCD */
    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(1);
    BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
    BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
    BSP_LCD_Clear(LCD_COLOR_WHITE);

    /* initializing TS */
    BSP_TS_Init(480, 272);

    /* initializing RNG */
    Instance.Instance = RNG;
    HAL_RNG_Init(&Instance);


    /* 480 * 272 Resolution */
    BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
    BSP_LCD_DrawRect(0, 0, 70, 50);
    BSP_LCD_DrawRect(405, 240, 75, 50);
    BSP_LCD_DisplayStringAt(0, 12.5, (uint8_t *)"Play", LEFT_MODE);
    BSP_LCD_DisplayStringAt(0, 250, (uint8_t *)"Exit", RIGHT_MODE);
    BSP_LCD_DrawRect(80, 60, 300, 170);
    int tick_start;
    int press;
    int reaction_time;
    char buffer[50];
    int x_pos;
    int y_pos;

    while (1) {
    	BSP_TS_GetState(&Game);
    	if(Game.touchX[0] < 70 && Game.touchX[0] != 0 && Game.touchY[0] < 50 && Game.touchY[0] != 0){
    		BSP_LCD_Clear(LCD_COLOR_WHITE);
    		HAL_Delay(1000);
    		BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
    		uint32_t random_number = HAL_RNG_GetRandomNumber(&Instance) % 5 + 1;
    		x_pos = random_number * 60 + 70;
   	    	y_pos = random_number * 30 + 50;
    		BSP_LCD_FillCircle(x_pos, y_pos, 30);
    		tick_start = HAL_GetTick();
    		Game.touchX[0] = 0;
    		Game.touchY[0] = 0;

    	} else if(Game.touchX[0] > 405 && Game.touchX[0] != 0 && Game.touchY[0] > 240 && Game.touchY[0] != 0){
    		BSP_LCD_Clear(LCD_COLOR_BLACK);
    		break;
    	}
    	if(Game.touchX[0] > x_pos-30 && Game.touchX[0] < x_pos+30 && Game.touchY[0] > y_pos-30 && Game.touchY[0] < y_pos + 30){
    		Game.touchX[0] = 0;
    		Game.touchY[0] = 0;
    		press = HAL_GetTick();
    		reaction_time = press - tick_start;
    		sprintf(buffer, "%d", reaction_time);
    		BSP_LCD_Clear(LCD_COLOR_WHITE);
    		BSP_LCD_SetTextColor(LCD_COLOR_BLACK);
    		BSP_LCD_DisplayStringAt(0, 100, (uint8_t *) "Your time in milliseconds:", CENTER_MODE);
    		BSP_LCD_DisplayStringAt(0, 130, (uint8_t *) buffer, CENTER_MODE);
    		if(reaction_time > 2000){
    			BSP_LCD_Clear(LCD_COLOR_WHITE);
    			BSP_LCD_DisplayStringAt(0, 120, (uint8_t *) "Release the button FCKER!!", CENTER_MODE);
    			HAL_Delay(10000);
    			BSP_LCD_Clear(LCD_COLOR_RED);
    			BSP_LCD_SetTextColor(LCD_COLOR_RED);
    			BSP_LCD_DisplayStringAt(0, 130, (uint8_t *) "Satan awaits!!!", CENTER_MODE);
    		}
    		HAL_Delay(500);
    	}
    }
}

static void Error_Handler(void)
{}

static void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
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
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line){}
#endif
