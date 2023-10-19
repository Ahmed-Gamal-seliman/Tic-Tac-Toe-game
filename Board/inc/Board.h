
#ifndef BOARD_H
#define BOARD_H

#include "../../STD_TYPES.h"
#include "../../libCUnit/inc/unitTesting.h"
#include <stdio.h>


/* This function Intilaize board */
sint32 IntializeBoard(sint8 arr[][5],uint8);

/* This function Fill board with numbers and astrisk (*)*/
sint32 FillBoard(sint8 arr[][5],uint8);

/* This function Draw board as it is in the array */
sint32 DrawBoard(sint8 arr[][5],uint8);



/* This function Update board elements in the array */
sint32 UpDateBoard(sint8 arr[][5],sint32,sint8);

#endif