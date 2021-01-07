/******************************************************************/
/*                                                                */
/*                                                                */
/*                                                                */
/******************************************************************/
#ifndef	RCC_INTERFACE_H
#define	RCC_INTERFACE_H

#define RCC_AHB	0
#define RCC_APB1	1
#define RCC_APB2	2

/****************************************/
#define MAX_Number 		8000000
/****************************************/
void MRCC_VidInit(void);
void MRCC_VidEnableClock(u8 Copy_u8BusID ,u8 Copy_u8PeripheralID );
void MRCC_VidDisableClock(u8 Copy_u8BusID ,u8 Copy_u8PeripheralID );
void MRCC_VidCalibrationOfClock(void);


#endif
