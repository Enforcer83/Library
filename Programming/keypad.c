#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include "inc/hw_sysctl.h"
#include "inc/hw_types.h"
#include "inc/hw_nvic.h"
#include "inc/hw_ints.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"

#include "keypad.h"

#define	KEYPAD_ROW_0	GPIO_PIN_0	// The row beginning with 1.
#define KEYPAD_ROW_1	GPIO_PIN_1	// The row beginning with 4.
#define KEYPAD_ROW_2	GPIO_PIN_2	// The row beginning with 7.
#define KEYPAD_ROW_3	GPIO_PIN_3	// The row beginning with a symbol.
#define KEYPAD_ROWS		(KEYPAD_ROW_0|KEYPAD_ROW_1|KEYPAD_ROW_2|KEYPAD_ROW_3)	// Handy for when you want to reference every pin connected to a row.

#define KEYPAD_COL_0	GPIO_PIN_4	// The column beginning with 1.
#define KEYPAD_COL_1	GPIO_PIN_5	// The column beginning with 2.
#define KEYPAD_COL_2	GPIO_PIN_6	// The column beginning with 3.
#define KEYPAD_COL_3	GPIO_PIN_7	// The column beginning with H(A).
#define KEYPAD_COLS		(KEYPAD_COL_0|KEYPAD_COL_1|KEYPAD_COL_2|KEYPAD_COL_3)	// Handy for when you want to reference every pin connected to a column.

//**********************************************************************************************************//
//																											//
// 													COLUMN													//
// ROW	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25	//	
// 1	ESC		F1	F2	F3	F4		F5	F6	F7	F8		F9	F10	F11	F12		PS	SL	PAS						//
// 2	`	1	2	3	4	5	6	7	8	9	0	-	=			BS		INS	HM	PU		NL	/	*	-	//
// 3	TB		q	w	e	r	t	y	u	i	o	p	[	]		\		DEL	END	PD		7	8	9		//
// 4	CL		a	s	d	f	g	h	j	k	l	;	'			CR						4	5	6	+	//
// 5	LS			z	x	c	v	b	n	m	,	.	/			RS			U			1	2	3		//
// 6	LC		LA					SPC					RA			RC		L	D	R			0	.	CR	//
//																											//
//**********************************************************************************************************//

//
// The below defines represent the maximum number of equaly spaced rows and columns for a standard size U.S QWERTY keyboard with key pad
//
#define	KEYPAD_ROWS		4
#define	KEYPAD_COLS		4

bool NEW_KEY_PRESSED = false;

uint32_t KEYPAD_ROW_PORT = 0;
uint32_t KEYPAD_COL_PORT = 0;

int32_t LAST_KEY_PRESSED = -2;

const uint8_t keys[KEYPAD_ROWS][KEYPAD_COLS] =


void initKeypad (uint32_t rowPort, uint32_t colPort)
{

	GPIOPinTypeGPIOOutput(colPort, KEYPAD_COLS);
	GPIOPinTypeGPIOInput(rowPort, KEYPAD_ROWS);

	GPIODirModeSet(colPort, ALL, GPIO_DIR_MODE_OUT);
	GPIODirModeSet(rowPort, ALL, GPIO_DIR_MODE_IN);
	
	GPIOPadConfigSet(colPort, ALL, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
    GPIOPadConfigSet(rowPort, ALL, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);

	GPIOPinWrite(colPort, KEYPAD_COLS, KEYPAD_COLS); // turn on every column
	// I do this so that when any key is pressed, a rising edge will happen on Port B and
	// trigger an interrupt.  The ISR polls column-by-column to see key in particular it is.

	KEYPAD_ROW_PORT = rowPort;
	KEYPAD_COL_PORT = colPort;

}

int32_t checkKeypadCol (uint8_t checkCol)
{

	uint8_t rowPins;

	GPIOPinWrite(KEYPAD_COL_PORT, KEYPAD_COLS, checkCol);

	rowPins = GPIOPinRead(KEYPAD_ROW_PORT, KEYPAD_ROWS);

	if (rowPins & KEYPAD_ROW_0)
	{

		return 0;

	}
	
	else if (rowPins & KEYPAD_ROW_1)
	{

		return 1;

	}

	else if (rowPins & KEYPAD_ROW_2)
	{

		return 2;

	}

	else if (rowPins & KEYPAD_ROW_3)
	{

		return 3;

	}

	return -1;

}

int32_t checkKeypad (void) {
	
	int32_t row = 0, col = 0;

	row = checkKeypadCol(KEYPAD_COL_0);

	if (row != -1)
	{

		col = 0;
		return keys[row][col];

	}

	row = checkKeypadCol(KEYPAD_COL_1);

	if (row != -1)
	{

		col = 1;
		return keys[row][col];

	}

	row = checkKeypadCol(KEYPAD_COL_2);

	if (row != -1)
	{

		col = 2;
		return keys[row][col];

	}

	row = checkKeypadCol(KEYPAD_COL_3);

	if (row != -1)
	{
	
		col = 3;
		return keys[row][col];

	}

	return -1;

}

int32_t getLastKeyPressed(void)
{

	if (!NEW_KEY_PRESSED)
	{
		
		return -2;
		
	}
	
	NEW_KEY_PRESSED = false;
	return LAST_KEY_PRESSED;

}

void keyPressISR(void)
{

	LAST_KEY_PRESSED = checkKeypad(); //poll the keypad
	NEW_KEY_PRESSED = true

	GPIOPinWrite(KEYPAD_COL_PORT, KEYPAD_COLS, KEYPAD_COLS);

}