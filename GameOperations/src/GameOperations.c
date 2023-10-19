
#include "GameOperations.h"


void SinglePlayerGame(sint8 arr[][5])
{
	
	sint8 PlayerLetter=0;
	sint32 ValidPlayerLetter=1;
	sint8 ComputerLetter=0;
	sint32 numberBoard=0;
	sint32 CheckNumberBoard=1;
	sint32 Winner=0;
	sint32 FlagPlayer=1;
	
	
	
	
	while(ValidPlayerLetter)
	{
		printf("\n\nChoose x or o:\n");
		scanf(" %c",&PlayerLetter);
		if((PlayerLetter =='x' || PlayerLetter == 'o') || (PlayerLetter =='X' || PlayerLetter == 'O'))
		{
			printf("\n\nNow Player 1 is %c\n",PlayerLetter);
			if(PlayerLetter == 'x' || PlayerLetter == 'X')
			{
				ComputerLetter='o';
			}
			else
			{
				ComputerLetter='x';
			}
			ValidPlayerLetter=0;
		}
		else
		{
			printf("\n\nSorry, you must choose x or o Only!!!\n\n");
		}
	}
	system("clear");
	DrawBoard(arr,5);
	
	while(1)
	{
		CheckNumberBoard=1;
		/* This loop to check if the user enters the number of board right or wrong
			if it is wrong it will ask again to enter the number of board until it entered right*/
			
			
		while(CheckNumberBoard)
		{
			if(FlagPlayer)
			{
				printf("\n\nPlayer 1 Choose the location from the board (if you want to quit press 0): \n");
				scanf("%d",&numberBoard);
				if(numberBoard ==0)
				{
					break;
				}
				CheckNumberBoardChoosen(numberBoard,&CheckNumberBoard);
				if(CheckNumberBoard == 1)
				{
					printf("\nYou enter a wrong number please enter number that is available on board\n\n");
					sleep(1);
				}
				else
				{
					FlagPlayer=0;
				}
				/* update number the user choosed by player letter on the board*/
				UpDateBoard(arr,numberBoard,PlayerLetter);
				system("clear");
				DrawBoard(arr,5);
				
			}
		}

		if(numberBoard == 0)
		{
			break;
		}
		
		
		Winner=CheckWinner(arr);
		if(Winner != -1)
		{
			printf("The Winner is Player %c\n",Winner);
			break;
		}
		
		if(CheckGameIsNotCompleted(arr) == 0)
		{
			printf("\n\nGame is Draw\n\n");
			break;
		}
		
		CheckNumberBoard=1;
		while(CheckNumberBoard){
			printf("The Computer is Playing Now Please wait...");
			if(!FlagPlayer)
			{
				sint32 OutputSymbolCheck=1;
				
				while(OutputSymbolCheck)
				{
					srand(time(NULL));
					numberBoard=(rand()+1)%10;
					
					CheckNumberBoardChoosen(numberBoard,&CheckNumberBoard);
					
						/* OutputCheck=0 means you can here
						other wise we must generate a new random number again until there is a place to insert*/
						CheckThereIsSymbolOrNot(numberBoard,arr,&OutputSymbolCheck);
					
				}
				/* update number the user choosed by player letter on the board*/
				UpDateBoard(arr,numberBoard,ComputerLetter);
				system("clear");
				DrawBoard(arr,5);
				FlagPlayer=1;
			}
		}
		
		Winner=CheckWinner(arr);
		if(Winner != -1)
		{
			printf("The Winner is Computer.\n");
			break;
			
		}
		
		if(CheckGameIsNotCompleted(arr) == 0)
		{
			printf("\n\nGame is Draw\n\n");
			break;
		}
		
	}
	
	
}

void MuliPlayerGame(sint8 arr[][5])
{
	sint8 PlayerLetter=0;
	sint32 ValidPlayerLetter=1;
	sint8 Player2Letter=0;
	sint32 numberBoard=0;
	sint32 CheckNumberBoard=1;
	sint32 Winner=0;
	sint32 FlagPlayer=1;
	
	
	
	while(ValidPlayerLetter)
	{
		printf("\n\nPlayer 1 Choose x or o:\n");
		scanf(" %c",&PlayerLetter);
		if((PlayerLetter =='x' || PlayerLetter == 'o') || (PlayerLetter =='X' || PlayerLetter == 'O'))
		{
			if(PlayerLetter == 'x' || PlayerLetter == 'X')
			{
				Player2Letter='o';
			}
			else
			{
				Player2Letter='x';
			}
			ValidPlayerLetter=0;
			printf("\n\nPlayer 1 is %c\nPlayer 2 is %c\n\n",PlayerLetter,Player2Letter);
			sleep(1);
		}
		else
		{
			printf("\n\nSorry, you must choose x or o Only!!!\n\n");
		}
		
	}
	system("clear");
	DrawBoard(arr,5);
	
	while(1)
	{
		CheckNumberBoard=1;
		/* This loop to check if the user enters the number of board right or wrong
			if it is wrong it will ask again to enter the number of board until it entered right*/
			
			
		while(CheckNumberBoard)
		{
			if(FlagPlayer)
			{
				printf("\n\nPlayer 1 choose the location from the board (if you want to quit press 0): \n");
				scanf("%d",&numberBoard);
				if(numberBoard == 0)
				{
					break;
				}
				CheckNumberBoardChoosen(numberBoard,&CheckNumberBoard);
				if(CheckNumberBoard == 1)
				{
					printf("\nYou enter a wrong number please enter number that is available on board\n\n");
					sleep(1);
				}
				else
				{
					FlagPlayer=0;
				}
				/* update number the user choosed by player letter on the board*/
				UpDateBoard(arr,numberBoard,PlayerLetter);
				system("clear");
				DrawBoard(arr,5);
				
			}
		}
		
		if(numberBoard == 0)
		{
			break;
		}
		
		Winner=CheckWinner(arr);
		if(Winner != -1)
		{
			if(Winner == (sint32)(PlayerLetter))
			{
				printf("Player 1 is The Winner \n");
			}
			else
			{
				printf("Player 2 is The Winner \n");
			}
			break;
			
		}
		
		if(CheckGameIsNotCompleted(arr) == 0)
		{
			printf("\n\nGame is Draw\n\n");
			break;
		}
		
		CheckNumberBoard=1;
		while(CheckNumberBoard)
		{
			if(!FlagPlayer)
			{
				printf("\n\nPlayer 2 choose the location from the board (if you want to quit press 0): \n");
				scanf("%d",&numberBoard);
				
				if(numberBoard == 0)
				{
					break;
				}
				
				CheckNumberBoardChoosen(numberBoard,&CheckNumberBoard);
				if(CheckNumberBoard == 1)
				{
					printf("\nYou enter a wrong number please enter number that is available on board\n\n");
					sleep(1);
				}
				else
				{
					FlagPlayer=1;
				}
				/* update number the user choosed by player letter on the board*/
				UpDateBoard(arr,numberBoard,Player2Letter);
				system("clear");
				DrawBoard(arr,5);
				
			}
		}
		
		if(numberBoard == 0)
		{
			break;
		}
		
		Winner=CheckWinner(arr);
		if(Winner != -1)
		{
			if(Winner == (sint32)(PlayerLetter))
			{
				printf("Player 1 is The Winner \n");
			}
			else
			{
				printf("Player 2 is The Winner \n");
			}
			break;
			
		}
		
		if(CheckGameIsNotCompleted(arr) == 0)
		{
			printf("\n\nGame is Draw\n\n");
			break;
		}
		
	}
	
}

sint32 CheckGameIsNotCompleted(sint8 arr[][5])
{
	/* This counter to count if there is numbers on the board or NOT*/
	sint32 counter=0;
	/* Check if there is a numbers in the board or not */
	for(sint32 i=0;i<5;i++)
	{
		for(sint32 j=0; j<5;j++)
		{
			if(arr[i][j] >='1' && arr[i][j] <='9')
			{
				counter++;
			}
		}
	}
	return counter;
}

sint32 CheckWinner(sint8 arr[][5])
{
	sint32 WinPlayer=0; //this varible to check the winner
	sint8 WinPlayerLetter=0;
	
	
	
	/* Check 3 items Horizontally */
	for(sint32 i=0;i<5;i+=2)
	{
		WinPlayer=0;
		
		for(sint32 j=0; j<4;j+=2)
		{
			if(arr[i][j] == arr[i][j+2])
			{
				WinPlayer++;
				WinPlayerLetter=arr[i][j];
			}
		}
		if(WinPlayer == 2)
		{
			return WinPlayerLetter;
		}
	}
	
	
	/* Check 3 items Vertically */
	for(sint32 i=0;i<5;i+=2)
	{
		WinPlayer=0;
		
		for(sint32 j=0; j<4;j+=2)
		{
			if(arr[j][i] == arr[j+2][i])
			{
				WinPlayer++;
				WinPlayerLetter=arr[j][i];
			}
		}
		if(WinPlayer == 2)
		{
			return WinPlayerLetter;
		}
	}
	
	
	
	
	/* Check 3 items Cross Right */	
	if((arr[0][0] == arr[2][2]) && (arr[2][2]== arr[4][4]))
	{
		
		WinPlayerLetter=arr[0][0];
		return WinPlayerLetter;
	}
	
	
	/* Check 3 items Cross Left */	
	if((arr[0][4] == arr[2][2]) && (arr[2][2]== arr[4][0]))
	{
		
		WinPlayerLetter=arr[0][4];
		return WinPlayerLetter;
	}
	
	return -1;
}


sint32 CheckNumberBoardChoosen(sint32 numberBoard, sint32 *CheckNumberBoard)
{
	if(numberBoard<=0)
	{
		return ERROR_NUMBER_BOARD_LESSTHAN0;
	}
	else if(numberBoard>9)
	{
		return ERROR_NUMBER_BOARD_MORETHAN9;
	}
	else
	{
		if(numberBoard >=1 && numberBoard<=9)
		{
			*CheckNumberBoard=0;
		}
		else
		{
			*CheckNumberBoard=1;
		}
	}
	return OK;
}

void CheckThereIsSymbolOrNot(sint32 numberBoard,sint8 arr[][5],sint32 *OutputSymbolCheck)
{
	/* Search in the array for the number Board 
	if number board is exist then we can insert the symbol
	if  NOT so we can't inset the symbol*/
	

	/*Search in the array */
	for(sint32 i=0;i<5;i++)
	{
		for(sint32 j=0; j<5; j++)
		{
			if((arr[i][j]-'0') == (sint8)numberBoard)
			{
				*OutputSymbolCheck=0;
				break;
			}
		}
		
		if((*OutputSymbolCheck) == 0)
		{
			break;
		}
	}
	
	
	
}

