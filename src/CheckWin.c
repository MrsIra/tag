#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "CheckWin.h"

int checkWin(int board[][4])
{
	int count = 1;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(count > 15)return true;
			if(board[i][j] == count)
			    {
				    count++;
			    }
			if(board[i][j] != count)
			     return false;
		}
	}
return 0;
}

