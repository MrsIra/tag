#include "random.h"

void randomized(int board[][4]){
	while(1){	
	 	int tmpBoard[4][4]={0};
		int test[16]={0},k=0,sum=0;
		int checkSum[16]={0};
		for(int i=1;i<=15;i++){
			while(1){
				int colomn = rand()%4;
				int row = rand()%4;
				if(tmpBoard[colomn][row]==0&&!(colomn==3&&row==3)){
					test[colomn*4+1+row]=i;
					k++;
					for(int j=k;j>=0;j--){
						if(test[j]<i)
							checkSum[j]++;
					}
					tmpBoard[colomn][row]=i;
					break;
				}
			}
		}
		for(int i=1;i<16;i++){
			for(int j=15;j>i;j--){
				if(test[i]>test[j])
					sum++;
			}
		}
		if(sum%2==0){
			for(int i=0;i < 4;i++){
				for(int j=0;j<4;j++){
					board[i][j]=tmpBoard[i][j];
				}
			}
			break;
		}
	}
}

