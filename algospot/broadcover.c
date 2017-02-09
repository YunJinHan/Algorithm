#include <stdio.h>

int count;
char board[51][51];

int main(void){
	int i,j,col,row;
	scanf("%d",&count);
	while (count--){
		scanf("%d %d",&row,&col);
		for (i=1;i<=row;i++){
			scanf("%s",board[i]);
		}



	}
	return 0;
}