#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "print.h"

void printBoard(int board[][4])
{
	for(int i=0;i < 4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(board[i][j]==0)
				printf("    ");
			else
				printf("%4d",board[i][j]);
		}
		printf("\n\n");
	}
	printf("\ncontrol: w,a,s,d\nquit: Esc\nrestart: r\n");
}
