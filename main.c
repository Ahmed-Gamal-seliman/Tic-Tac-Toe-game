
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"
#include "Board.h"
#include "MainMenu.h"
#include "GameOperations.h"
#include "unitTesting.h"


int main()
{
	
	//AddTests();
	run();
	sint8 arr[5][5];
	sint8 PlayAgainFlag='y';
	char ChoosenItem=0;
	
	while(PlayAgainFlag !='n'){
		
		system("clear");
		if(PlayAgainFlag == 'y')
		{
			ShowMainMenu();
			PlayAgainFlag=0;
		}
		
		/*Intialize board*/
		IntializeBoard(arr,5);
		/*Fill Board with data that appear on screen */
		FillBoard(arr,5);
		
		printf("\nYour Choice: ");
		scanf(" %c",&ChoosenItem);
		
		
		if(ChoosenItem == '1')
		{
			SinglePlayerGame(arr);
		}
			
		else if(ChoosenItem == '2')
		{
			MuliPlayerGame(arr);	
		}
			
		else if(ChoosenItem == '3')
		{
			exit(0);
		}
			
		else
		{
			printf("Please choose a valid Item...");
		}
		
		
		printf("\n\nYou want to play Again (y/n):\n\n");
		scanf(" %c",&PlayAgainFlag);
	}
	
	
	
	
	
	
	return 0;
}


