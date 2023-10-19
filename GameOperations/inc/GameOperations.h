
#ifndef GAMEOPERATIONS_H
#define GAMEOEPRATIONS_H

#include "../../Board/inc/Board.h"
#include <time.h>
#include <stdlib.h>

/* this function play as a single player implmentation */
void SinglePlayerGame(sint8 arr[][5]);

/* this function play as a Multiplayer player implmentation */
void MuliPlayerGame(sint8 arr[][5]);

/* this function Check who is the winner */
sint32 CheckWinner(sint8 arr[][5]);

/* this function handle the number of board i choose and return is this number accepted or not */
sint32 CheckNumberBoardChoosen(sint32 numberBoard, sint32 *CheckNumberBoard);

/* this function check is the is Draw or not */
sint32 CheckGameIsNotCompleted(sint8 arr[][5]);

/* this function check there is a symbol in the place that i want to play in or not*/
void CheckThereIsSymbolOrNot(sint32,sint8 arr[][5],sint32*);

#endif