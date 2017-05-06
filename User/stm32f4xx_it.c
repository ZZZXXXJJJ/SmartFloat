/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/stm32f4xx_it.c 
  * @author  MCD Application Team
  * @version V1.5.0
  * @date    06-March-2015
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and 
  *          peripherals interrupt service routine.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_it.h"
#include "./usart/bsp_debug_usart.h"
#include "./report/report1.h"
#include <string.h>

/** @addtogroup STM32F429I_DISCOVERY_Examples
  * @{
  */

/** @addtogroup FMC_SDRAM
  * @{
  */ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M4 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {}
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {}
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {}
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {}
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{}

/**
  * @brief  This function handles PendSV_Handler exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{}

/******************************************************************************/
/*                 STM32F4xx Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f429_439xx.s).                         */
/******************************************************************************/
//uint8_t USART1_RX_STA=0;
//uint8_t USART1_RX_COUNT=0;
//uint8_t BD_count;
//uint8_t USART1_RX_BUF[200];
//uint8_t CENTER_BUF[200];
//uint8_t TXA=0;
//void DEBUG_USART_IRQHandler(void)
//{
//  uint8_t res,t;
//	if((USART1->SR&(1<<5)))
//	{
//		res=USART1->DR;
//		USART1->DR=res;
//		if(res==0x61)//0xEC£¨$CCICA,0,00*7B
//		{USART1_RX_BUF[USART1_RX_COUNT]=res;}
//		if(USART1_RX_BUF[0]==0x61)//0xEC
//		{
//			USART1_RX_BUF[USART1_RX_COUNT++]=res;
//		}
//		if(res==0xEB)//0xEB
//		{
//			TXA=1;
//			strncpy((char*)CENTER_BUF,(char*)USART1_RX_BUF,USART1_RX_COUNT);
//			
////			for(t=0;t<USART1_RX_COUNT;t++)//USART4_RX_COUNT
////			{
////				USART6->DR=CENTER_BUF[t];
////				while((USART6->SR&0X40)==0);
////			}
//      
//			USART1_RX_STA=0;
//		  BD_count=USART1_RX_COUNT*2;
//			strcpy((char*)USART1_RX_BUF,"");
//		  USART1_RX_COUNT=0;
//		}
//	}
	
//uint8_t res,t;
//	if((USART1->SR&(1<<5)))
//	{
//		res=USART1->DR;
//		USART1->DR=res;
//		if(res=='$')
//		{USART1_RX_BUF[USART1_RX_COUNT]=res;}
//		if(USART1_RX_BUF[0]=='$')
//		{
//			USART1_RX_BUF[USART1_RX_COUNT++]=res;
//		}
//		if(res==0x0A)
//		{
////			TXA=1;
////			strncpy((char*)CENTER_BUF,(char*)USART1_RX_BUF,USART1_RX_COUNT);
//			for(t=0;t<USART1_RX_COUNT;t++)
//			{
//				USART6->DR=USART1_RX_BUF[t];
//				while((USART6->SR&0X40)==0);
//			}
////			USART1_RX_STA=0;
////		  BD_count=USART1_RX_COUNT*2;
////			strcpy((char*)USART1_RX_BUF,"");
//		  USART1_RX_COUNT=0;
//		}
//	}
//}	
uint8_t RNSS_RX_BUF[200];
uint8_t RNSS_RX_COUNT=0;
extern uint8_t CENTER_BUF[200];
void RNSS_USART_IRQHandler(void)
{
	uint8_t dLat[11];
	uint8_t dLng[12];
	uint8_t dLan[29];
  uint8_t ucTemp;
	uint8_t t;
	if(USART_GetITStatus(RNSS_USART,USART_IT_RXNE)!=RESET)
	{		
		ucTemp = USART_ReceiveData(RNSS_USART);
   // USART_SendData(UART4,ucTemp);    
	}	
  if(ucTemp=='$')//0xEC
		{RNSS_RX_BUF[0]=ucTemp;}
	  if(RNSS_RX_BUF[0]=='$')//0xEC
		{
			
			RNSS_RX_BUF[RNSS_RX_COUNT]=ucTemp;
			//USART1->DR=RNSS_RX_BUF[RNSS_RX_COUNT];
			RNSS_RX_COUNT++;
			
			
		}
	
		if(ucTemp=='\n'&&RNSS_RX_BUF[0]=='$')
		{
			//Usart_SendStr_length( UART4, RNSS_RX_BUF,RNSS_RX_COUNT);
			if(crc_test(RNSS_RX_BUF, 1, RNSS_RX_COUNT))
		  {
				if(strncmp((char*)RNSS_RX_BUF,"$GNGGA",6)==0)
				{	
					
					//Usart_SendStr_length( UART4, RNSS_RX_BUF,RNSS_RX_COUNT);
				  if(RNSS_RX_BUF[47]=='1')
					{
						for(t=18;t<46;t++)
						{
							dLan[t-18]=RNSS_RX_BUF[t];
						}
						Usart_SendStr_length( UART4, dLan,28);
						strncpy((char*)CENTER_BUF,(char*)dLan,28);
						BD_REPORT(56);
						USART_Cmd(USART3,DISABLE);
				  }
				}
			}
			

			RNSS_RX_BUF[0]=0;		  
		  RNSS_RX_COUNT=0;
			}	
}	
uint8_t USARTE0_RX_STA=0;
uint8_t USARTE0_RX_COUNT=0;
uint8_t USARTE0_RX_BUF[200];
uint8_t RDSS_RX_REPORT[200];
void RDSS_USART_IRQHandler(void)
{
  uint8_t res,t;
	if((USART6->SR&(1<<5)))
	{
		res=USART6->DR;
		if(res=='$')//0xEC
		{USARTE0_RX_BUF[0]=res;}
	  if(USARTE0_RX_BUF[0]=='$')//0xEC
		{
			
			USARTE0_RX_BUF[USARTE0_RX_COUNT]=res;
			//USART1->DR=USARTE0_RX_BUF[USARTE0_RX_COUNT];
			USARTE0_RX_COUNT++;
			
			
		}
	
		if(res=='\n'&&USARTE0_RX_BUF[0]=='$')
		{
			 if(crc_test(USARTE0_RX_BUF, 1, USARTE0_RX_COUNT))
			 {
        if(strncmp((char*)USARTE0_RX_BUF,"$BDTXR",6)==0)	
				{	
					for(t=22;USARTE0_RX_BUF[t]!='*';t++)
					{
						RDSS_RX_REPORT[t-22]=USARTE0_RX_BUF[t];
					}
					Usart_SendStr_length( UART4, RDSS_RX_REPORT,t-22);
				}
					if(strncmp((char*)USARTE0_RX_BUF,"$BDFKI",6)==0)
				{					
			  Usart_SendStr_length( UART4, USARTE0_RX_BUF,USARTE0_RX_COUNT);
				}
			 }

			USARTE0_RX_BUF[0]=0;
		  USARTE0_RX_COUNT=0;
		}		
	}

}	
uint8_t USART4_RX_STA=0;
uint8_t USART4_RX_COUNT=0;
uint8_t USART4_RX_BUF[200];
uint8_t CENTER_BUF[200];
uint8_t TXA6=0;

void CENTER_USART_IRQHandler(void)
{
  uint8_t res,t;
  uint8_t BD_count;
	if((UART4->SR&(1<<5)))
	{
		res=UART4->DR;
		UART4->DR=res;
		if(res==0xEC)//0xEC
		{USART4_RX_BUF[USART4_RX_COUNT]=res;}
		if(USART4_RX_BUF[0]==0xEC)//0xEC
		{
			USART4_RX_BUF[USART4_RX_COUNT++]=res;
		}
		if(res==0xEB)
		{
			TXA6=1;
			strncpy((char*)CENTER_BUF,(char*)USART4_RX_BUF,USART4_RX_COUNT);
//			for(t=0;t<USART4_RX_COUNT;t++)
//			{
//				USART6->DR=CENTER_BUF[t];
//				while((USART6->SR&0X40)==0);
//			}
			BD_count=USART4_RX_COUNT*2;
			
			BD_REPORT(BD_count);
			strcpy((char*)USART4_RX_BUF,"");//«Â¡„
			USART4_RX_STA=0;
		  USART4_RX_COUNT=0;
		}
	}
	
}		
/**
  * @}
  */ 

/**
  * @}
  */ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
