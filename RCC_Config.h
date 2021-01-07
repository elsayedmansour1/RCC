#ifndef	RCC_CONFIG_H
#define	RCC_CONFIG_H

/***************Clock_Source****************/
/**               HSI                     **/
/**               HSE                     **/
/**               PLL                     **/
/*******************************************/
/*******************************************/
#define 	Clock_Source 	HSE
/*******************************************/

/***************PLL MODES*****************/
/**               HSE                   **/
/**               HSI/2                 **/
/*****************************************/
/*****************************************/
#if Clock_Source == PLL
#define 	PLL_MODES 	HSE
/***************HSI MODES*****************/
/**               HSI_TOTAL             **/
/**               HSI_2                 **/
/*****************************************/
#define 	HSI_MODES 	HSE_2
#endif
/*******************************************/

/******PLL multiplication factor*************/
/**	PLL_input_clock_2 	--> *2	   **/
/**	PLL_input_clock_3   --> *3       **/
/**	PLL_input_clock_4   --> *4       **/
/**	PLL_input_clock_5   --> *5       **/
/**	PLL_input_clock_6   --> *6       **/
/**	PLL_input_clock_7   --> *7       **/
/**	PLL_input_clock_8   --> *8       **/
/**	PLL_input_clock_9   --> *9       **/
/**	PLL_input_clock_10  --> *10      **/
/**	PLL_input_clock_11  --> *11      **/
/**	PLL_input_clock_12  --> *12      **/
/**	PLL_input_clock_13  --> *13      **/
/**	PLL_input_clock_14  --> *14      **/
/**	PLL_input_clock_15  --> *15      **/
/**	PLL_input_clock_16  --> *16      **/
/********************************************/
/*********************************************************/
#define 	PLL_multiplication_factor 	PLL_input_clock_2
/*********************************************************/

/***************HSE TYPES*****************/
/**               HSE_RC	          **/
/**               HSE_CRYSTAL           **/
/*****************************************/
/*******************************************/
#define 	HSE_TYPES 	HSE_CRYSTAL
/*******************************************/
#endif
