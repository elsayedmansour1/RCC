#ifndef	RCC_PRIVATE_H
#define	RCC_PRIVATE_H
/************************************************************/
typedef struct
{
	volatile u32 CR    	   ;
	volatile u32 CFGR      ;
	volatile u32 CIR       ;
	volatile u32 APB2RSTR  ;
	volatile u32 APB1RSTR  ;
	volatile u32 AHBENR    ;
	volatile u32 APB2ENR   ;
	volatile u32 APB1ENR   ;
	volatile u32 BDCR      ;
	volatile u32 CSR       ;
}MRCC;


/************************************************************/
#define RCC    		 ((volatile MRCC *)0x40021000)
/************************************************************/


	/*CLOCK SOURCE*/

#define HSI	0
#define HSE	1
#define PLL	2
/***********************************************************/
	/*PLL MODES*/

#define PLL_HSE		0
#define PLL_HSI_2	2
/************************************************************/
	/*HSE MODES*/
#define HSI_TOTAL	0
#define HSI_2	 	1
/************************************************************/
	/*PLL multiplication factor*/
#define	PLL_input_clock_2 		0
#define	PLL_input_clock_3 		1
#define	PLL_input_clock_4 		2
#define	PLL_input_clock_5 		3
#define	PLL_input_clock_6 		4
#define	PLL_input_clock_7 		5
#define	PLL_input_clock_8 		6
#define	PLL_input_clock_9 		7
#define	PLL_input_clock_10		8
#define	PLL_input_clock_11		9
#define	PLL_input_clock_12		10
#define	PLL_input_clock_13		11
#define	PLL_input_clock_14		12
#define	PLL_input_clock_15		13
#define	PLL_input_clock_16		14
/************************************************************/
	/*HSE TYPES*/
#define 	HSE_RC		0
#define		HSE_CRYSTAL	1
/************************************************************/
	/*AHP Peripherals*/
#define	AHP_DMA1                          0
#define	AHP_DMA2                          1
#define	AHP_SRAM        		          2
#define	AHP_FLITF                         4
#define	AHP_CRC                           6  
#define	AHP_FSMC			              8
#define	AHP_SDIO                          10
	/*APB1 Peripherals*/
#define	APB1_DAC			    		  29
#define	APB1_PWR                          28
#define	APB1_BKP                          27
#define	APB1_CAN                          25
#define	APB1_USB                          23
#define	APB1_I2C2                         22
#define	APB1_I2C1                         21
#define	APB1_UART5                        20
#define	APB1_UART4                        19
#define	APB1_USART3                       18
#define	APB1_USART2                       17
#define	APB1_SPI3                         15
#define	APB1_SPI2                         14
#define	APB1_WWDG	                      11
#define	APB1_TIM14                        8
#define	APB1_TIM13                        7
#define	APB1_TIM12                        6
#define	APB1_TIM7                         5
#define	APB1_TIM6                         4
#define	APB1_TIM5                         3
#define	APB1_TIM4                         2
#define	APB1_TIM3                         1
#define	APB1_TIM2                         0
	/*APB2 Peripherals*/
#define	APB2_TIM11		    			  21
#define	APB2_TIM10                        20
#define	APB2_TIM9                         19
#define	APB2_ADC3                         15
#define	APB2_USART                        14
#define	APB2_TIM8                         13
#define	APB2_SPI1                         12
#define	APB2_TIM1                         11
#define	APB2_ADC2                         10
#define	APB2_ADC1                         9
#define	APB2_GPIOG                        8
#define	APB2_GPIOF                        7
#define	APB2_GPIOE                        6
#define	APB2_GPIOD                        5
#define	APB2_GPIOC                        4
#define	APB2_GPIOB                        3
#define	APB2_GPIOA                        2
#define	APB2_AFIO                         0
/************************************************************/
#endif
