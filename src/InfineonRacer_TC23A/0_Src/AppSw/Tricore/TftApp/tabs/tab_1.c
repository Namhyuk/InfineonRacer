/*
 * tab_1.c
 *
 *  Created on: 2018. 7. 9.
 *      Author: Sujin
 */

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "tab_1.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/
// *INDENT-OFF*
TDISPLAYENTRY tab1_DIS0list[0] = {
// standard display color, select display color, x_min, x_max, y, select->function, standard display, input func, "String"
{0, 0, 0, 0, 0, 0, 0, 0, " "}  // RESERVED ENTRY
};
// *INDENT-ON*


/******************************************************************************/
/*-------------------------Function Prototypes--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------Private Variables/Constants-------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

void tab1_init(void){
    conio_ascii_printfxy (DISPLAY_TAB1, 10, 0, (uint8 *)"<<DISPLAY INFO 0>>");

}

void tab1_run(void){

}
