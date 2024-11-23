#include "STD_TYPES.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "CLCD_interface.h"

void main(void)
{
	uint8 Local_u8count = 0;


	uint8 Local_u8Pattern[8] = {
			0b00000100,
			0b00001010,
			0b00000100,
			0b00011111,
			0b00000100,
			0b00001110,
			0b00001010,
			0};

	uint8 Local_u8Pattern1[8] = {
			0b00001100,
			0b00001100,
			0b00001110,
			0b00011100,
			0b00001100,
			0b00011010,
			0b00010011,
			0};
	uint8 Local_u8ball[8] = {
			0b00000000,
			0b00000000,
			0b00001110,
			0b00001110,
			0b00001110,
			0b00000000,
			0b00000000,
			0};
	uint8 Local_u8Dance[8] = {
			0b00000100,
			0b00001010,
			0b00000100,
			0b00001110,
			0b00010101,
			0b00001010,
			0b00001010,
			0};

	uint8 Local_u8Gun[8] = {
			0b00000000,
			0b00011111,
			0b00010001,
			0b00011111,
			0b00011100,
			0b00011000,
			0b00000000,
			0};

	uint8 Local_u8bolet[8] = {
			0b00000000,
			0b00000000,
			0b00000100,
			0b00000000,
			0b00000000,
			0b00000000,
			0b00000000,
			0};

	uint8 Local_u8Die[8] = {
			0b00000000,
			0b00000000,
			0b00000000,
			0b00000000,
			0b00000000,
			0b00010011,
			0b00011111,
			0};



	/*set direction*/
	DIO_u8SetPortDirection(DIO_u8PORTA,DIO_u8PORT_OUTPUT);

	DIO_u8SetPinDirection(DIO_u8PORTD,DIO_u8PIN2,DIO_u8PIN_INPUT);


	/*start*/
	CLCD_voidInit();

	/*1*/
	CLCD_voidGoToXY(0,0);
	CLCD_u8SendString("I am Hamoksha");
	CLCD_u8SendSpecialCharacter(0,Local_u8Pattern,15,0);
	/*2*/
	_delay_ms(1000);
	CLCD_voidGoToXY(0,0);
	CLCD_u8SendString("I Can Run    ");
	CLCD_voidGoToXY(15,0);
	CLCD_u8SendString(" ");
	_delay_ms(100);
	for(Local_u8count = 15 ; Local_u8count >=0 ; Local_u8count--)
	{
		CLCD_u8SendSpecialCharacter(1,Local_u8Pattern1,Local_u8count,1);
		CLCD_voidGoToXY((Local_u8count+1),1);
		CLCD_u8SendString(" ");
		_delay_ms(80);
		if(Local_u8count == 0)
		{
			CLCD_voidGoToXY(0,1);
			CLCD_u8SendString(" ");
			break;
		}
	}
	/*3*/
	_delay_ms(200);
	CLCD_voidGoToXY(0,0);
	CLCD_u8SendString("ICanPlayFootball");
	CLCD_u8SendSpecialCharacter(0,Local_u8Pattern1,15,1);
	for(Local_u8count = 13 ; Local_u8count >=0 ; Local_u8count--)
	{
		CLCD_u8SendSpecialCharacter(2,Local_u8ball,Local_u8count,1);
		CLCD_voidGoToXY((Local_u8count+1),1);
		CLCD_u8SendString(" ");
		_delay_ms(30);
		if(Local_u8count == 0)
		{
			CLCD_voidGoToXY(0,0);
			CLCD_u8SendString("Goal!!!!!!!!!!     ");
			CLCD_voidGoToXY(15,1);
			CLCD_u8SendString(" ");
			CLCD_u8SendSpecialCharacter(0,Local_u8Pattern,7,1);
			CLCD_voidGoToXY(0,1);
			CLCD_u8SendString(" ");
			_delay_ms(400);
			break;
		}
	}
	_delay_ms(500);
	CLCD_voidGoToXY(7,1);
	CLCD_u8SendString(" ");

	/*4*/
	_delay_ms(200);
	CLCD_voidGoToXY(0,0);
	CLCD_u8SendString("I Can Dance    ");
	for(Local_u8count = 10 ; Local_u8count >=0 ; Local_u8count--)
	{
		CLCD_u8SendSpecialCharacter(0,Local_u8Pattern,7,1);
		_delay_ms(50);
		CLCD_u8SendSpecialCharacter(0,Local_u8Dance,7,1);
		_delay_ms(50);
		if(Local_u8count == 0)
		{
			CLCD_voidGoToXY(7,1);
			CLCD_u8SendString(" ");
			break;
		}
	}
	/*5*/
	_delay_ms(200);
	CLCD_voidGoToXY(0,0);
	CLCD_u8SendString("Don't Kill Me :(     ");
	CLCD_u8SendSpecialCharacter(0,Local_u8Pattern,15,1);
	CLCD_u8SendSpecialCharacter(4,Local_u8Gun,0,1);
	for(Local_u8count = 1 ; Local_u8count <= 14 ; Local_u8count++)
	{
		CLCD_u8SendSpecialCharacter(4,Local_u8Gun,0,1);
		CLCD_u8SendSpecialCharacter(1,Local_u8bolet,Local_u8count,1);
		CLCD_voidGoToXY((Local_u8count-1),1);
		CLCD_u8SendString(" ");
		_delay_ms(20);
		if(Local_u8count == 14)
		{
			CLCD_voidGoToXY(14,1);
			CLCD_u8SendString(" ");

			CLCD_voidGoToXY(15,1);
			CLCD_u8SendString(" ");
			CLCD_u8SendSpecialCharacter(5,Local_u8Die,13,1);

			_delay_ms(500);
			break;
		}
	}
	CLCD_voidGoToXY(0,0);
	CLCD_u8SendString("    The end     ");

	CLCD_voidGoToXY(0,1);
	CLCD_u8SendString(" Hamoksha Died ");


	while(1)
	{



	}  // while(1)

} //main
