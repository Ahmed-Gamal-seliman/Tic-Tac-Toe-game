#ifndef UNIT_TESTING_H
#define UNIT_TESTING_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "CUnit.h"
#include "Basic.h"
#include "Automated.h"
#include "Util.h"
#include "../../Board/inc/Board.h"
#include "../../GameOperations/inc/GameOperations.h"
#include "../../STD_TYPES.h"
enum StatusCodes
{
	ERROR=-1,
	OK,
	ERROR_NUMBER_BOARD_MORETHAN9,
	ERROR_NUMBER_BOARD_LESSTHAN0,
	ERROR_LETTER_IS_WRONG
	
};

/* Unit Testing For Board.h in Tic-Toe Project */
void TestIntializeBoardSuccess(void);
void TestIntializeBoardFail(void);


void TestFillBoardSuccess(void);
void TestFillBoardFail(void);

void TestDrawBoardSuccess(void);
void TestDrawBoardFail(void);

void TestUpDateBoardSuccess(void);
void TestUpDateBoardFail(void);

/* Unit Testing For GameOperations.h in Tic-Toe Project */

void TestCheckNumberBoardChoosenSuccess(void);

void TestCheckNumberBoardChoosenFail(void);


/* This function to Add Tests in cunit framework*/
void AddTests(void);

/* This function is to run the test cases */
void run(void);
#endif
