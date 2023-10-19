
#include "Board.h"

sint32 IntializeBoard(sint8 arr[][5],uint8 size)
{
	if(size <= 0)
	{
		return ERROR;
	}
	
	else
	{
		for(sint32 j=0;j<size;j++)
		{
			for(sint32 i=0; i<size; i++)
				arr[i][j]=' ';
		}
		return OK;
	}
}

/* This function to Fill the board with the shape that will appear on screen */
sint32 FillBoard(sint8 arr[][5],uint8 size)
{
	/*This variable to fill the board with numbers that user will choose */
	sint32 count=(sint32)'1';
	
	if(size<=0)
	{
		return ERROR;
	}
	else
	{
		/* Fill Board with the Astresic (*) */
		for(sint32 j=1;j<size-1;j+=2)
		{
			for(sint32 i=0; i<size; i+=2)
				arr[i][j]='*';
		}
		
		for(sint32 i=1;i<size-1;i+=2)
		{
			
			for(sint32 j=0; j<size; j++)
				arr[i][j]='*';
		}
			
		/*Fill board with the numbers user will choose to write x and o instead of numbers 
		  when user choose one of them */	
			
			for(sint32 i=0; i<size; i+=2)
			{
				for(sint32 j=0; j<size ;j+=2)
				{
					arr[i][j]=count++;
				}
			}
	}
	return OK;
		
	
	
}


/* This function to Draw the board on screen */
sint32 DrawBoard(sint8 arr[][5],uint8 size)
{
	if(size <= 0)
	{
		return ERROR;
	}
	
	else
	{	
		for(sint32 i=0;i<size;i++)
		{
		
			for(sint32 j=0; j<size; j++)
			{
				printf("%c",arr[i][j]);
			}
			printf("\n");
		}
	}
	return OK;
}



sint32 UpDateBoard(sint8 arr[][5],sint32 numberBoard, sint8 PlayerLetter)
{
	if(numberBoard>9)
	{
		return ERROR_NUMBER_BOARD_MORETHAN9;
	}
	else if (numberBoard<=0)
	{
			return ERROR_NUMBER_BOARD_LESSTHAN0;
	}
	else if((PlayerLetter != 'x') && (PlayerLetter != 'o'))
	{
		return ERROR_LETTER_IS_WRONG;
	}
	else
	{
		if(numberBoard==1)
		{
			arr[0][numberBoard-1]=PlayerLetter;
		}
		else if(numberBoard==4)
		{
			arr[2][numberBoard-4]=PlayerLetter;
		}
		
		else if(numberBoard == 7)
		{
			arr[4][numberBoard-7]=PlayerLetter;
		}
		else if(numberBoard ==2 || numberBoard ==3)
		{
				
				arr[0][(numberBoard-1)*2]=PlayerLetter;
		}
		else if(numberBoard ==5 || numberBoard ==6)
		{
				
				arr[2][(numberBoard-4)*2]=PlayerLetter;
		}
		else if(numberBoard ==8 || numberBoard ==9)
		{
				
				arr[4][(numberBoard-7)*2]=PlayerLetter;
		}	
	}
	return OK;
	
}