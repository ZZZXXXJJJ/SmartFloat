#include "./report/report1.h"
#include "./usart/bsp_debug_usart.h"
#include <string.h>
//#include "stm32f4xx_it.h"
extern uint8_t CENTER_BUF[200];
//extern uint8_t BD_count;
uint8_t hexChars[200];
uint8_t CRC_BD[3];
uint8_t BDTXA[200];
uint8_t FIRST[21]="$CCTXA,0314147,1,2,A4";
uint8_t last[3]="\r\n";
uint8_t star[2]="*";
static void ByteUtill()
{
	const uint8_t hexArray[17]="0123456789ABCDEF";
	//static uint8_t hexChars[34];
	for (uint8_t j = 0; j < strlen((char*)CENTER_BUF); j++) {
		int v = CENTER_BUF[j] & 0xFF;
		hexChars[j * 2] = hexArray[(v >> 4)];
		hexChars[j * 2 + 1] = hexArray[v & 0x0F];
	}
}
static void crc_data(uint8_t data[], uint8_t startIndex, uint16_t length) {
	uint8_t crc = 0x00;
	const uint8_t hexArray[17]="0123456789ABCDEF";
	for (uint8_t i = 0; i < length; i++) {
		crc ^= data[startIndex + i];
	}
	CRC_BD[0]=hexArray[(crc >> 4)];
	CRC_BD[1]=hexArray[(crc & 0x0F)];
}
void BD_REPORT(uint8_t length)
{
	ByteUtill();
	strcpy((char*)BDTXA,(char*)FIRST);			
	strncat((char*)BDTXA,(char*)hexChars,length);
	crc_data(BDTXA,1,strlen((char*)BDTXA));
	strcat((char*)BDTXA,(char*)star);
	strcat((char*)BDTXA,(char*)CRC_BD);
	strcat((char*)BDTXA,(char*)last);
	Usart_SendStr_length( USART6, BDTXA,strlen((char*)BDTXA));
	//BD_count=0;
}
uint8_t crc_test(uint8_t data[], uint8_t startIndex, uint16_t length) {
	uint8_t crc = 0x00;
	const uint8_t hexArray[17]="0123456789ABCDEF";
	for (uint8_t i = 0; i < length-6; i++) {
		crc ^= data[startIndex + i];
	}
//	Usart_SendByte(UART4,hexArray[(crc >> 4)]);
//	Usart_SendByte(UART4,hexArray[(crc & 0x0F)]);
//	Usart_SendByte(UART4,data[length-4]);
//	Usart_SendByte(UART4,data[length-3]);
//	Usart_SendByte(UART4,crc);
	if(data[length-4]==hexArray[(crc >> 4)]&&data[length-3]==hexArray[(crc & 0x0F)])
	{
		return 1;
	}
	else return 0;
}