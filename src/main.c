#include "print.h"
#include "random.h"
#include "CheckWin.h"

int main(){ 
	int board[4][4]={0};
	int x=3,y=3,prevX=3,prevY=3, kol=0;
	srand(time(NULL));
	randomized(board);
	printBoard(board);
	while(1){
		char k = getchar();
		switch(k){
			case 'w':case 'W':
				if(x<3){
					kol++;
					int tmp = board[x][y];
					board[x][y]=board[x+1][y];
					board[x+1][y]=tmp;
					x++;
				}
				break;
			case 's':case 'S':
				if(x>0){
					kol++;
					int tmp = board[x][y];
					board[x][y]=board[x-1][y];
					board[x-1][y]=tmp;
					x--;
				}
				break;
			case 'a':case 'A':
				if(y<3){
					kol++;
					int tmp = board[x][y];
					board[x][y]=board[x][y+1];
					board[x][y+1]=tmp;
					y++;
				}
				break;
			case 'd':case 'D':
				if(y>0){
					kol++;
					int tmp = board[x][y];
					board[x][y]=board[x][y-1];
					board[x][y-1]=tmp;
					y--;
				}
				break;
			case 'r':case 'R':
				randomized(board);
				printBoard(board);
				x=3;
				y=3;
				break;
			case 27:return 0;
				break;
		}
		if(x!=prevX||y!=prevY){
			printBoard(board);
			if(checkWin(board)){
				printf("\n\nYOU WIN!");
				printf("\n\nKol-vo khodov %d\n", kol);
				
			}	
		}
		prevX=x;prevY=y;
	}
}
