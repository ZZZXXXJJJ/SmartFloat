#include "stm32f4xx.h"
#include "./usart/bsp_debug_usart.h"
#include "./report/report1.h"
#include <string.h>
//#include "./report.h"
//#include "./i2c/bsp_i2c_eeprom.h"

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
//extern uint8_t TXA;
//extern uint8_t TXA6;
//extern uint8_t hexChars[200];
//extern uint8_t CRC_BD[3];
//extern uint8_t BD_count;
//uint8_t BDTXA[200];
//uint8_t FIRST[21]="$CCTXA,0314147,1,2,A4";//314192，314147
//uint8_t last[3]="\r\n";
//uint8_t star[2]="*";
int main(void)
{	
  Debug_USART_Config();
	RNSS_USART_Config();
	RDSS_USART_Config();
	CENTER_USART_Config();
	/* 发送一个字符串 */
	//Usart_SendString( DEBUG_USART,"这是一个EEPROM测试\n");
	//printf("这是一个EEPROM测试\n");
	
  while(1)
	{	
//		if(TXA6==1)//串口1时，条件TXA==1；串口6时，条件TXA6==1
//		{
//			//strcpy((char*)hexChars,"");
//		  ByteUtill();
//			strcpy((char*)BDTXA,(char*)FIRST);			
//			strncat((char*)BDTXA,(char*)hexChars,BD_count);
//			crc_data(BDTXA,1,strlen((char*)BDTXA));
//			strcat((char*)BDTXA,(char*)star);
//		  strcat((char*)BDTXA,(char*)CRC_BD);
//			strcat((char*)BDTXA,(char*)last);
////			for(uint8_t i=0;i<strlen((char*)BDTXA);i++)
////			{
////				USART6->DR=BDTXA[i];
////				while((USART6->SR&0X40)==0);
////			}
//			Usart_SendStr_length( USART6, BDTXA,strlen((char*)BDTXA));
////		 strcpy((char*)hexChars,"");
////		 strcpy((char*)BDTXA,"1213");
////			memset(hexChars,0,200);
////			memset(BDTXA,0,200);
//			TXA6=0;//串口1：TXA=0;
//			BD_count=0;
			
//		}
	}	
}



/*********************************************END OF FILE**********************/

