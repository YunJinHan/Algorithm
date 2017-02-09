#include <stdio.h>

int main(void){
	int num[9][9] = {0,};
	int i,j;
	int max=0,max_row,max_col;
	for (i=0;i<9;i++){
		for (j=0;j<9;j++){
			scanf("%d",&num[i][j]);
			if (num[i][j]>max){
				max = num[i][j];
				max_row = i+1;
				max_col = j+1;
			}
		}
	}
	printf("%d\n%d %d\n",max,max_row,max_col);
	return 0;
}