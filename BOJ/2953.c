#include <stdio.h>

int main(void){
	int score,sum=0,max=0,max_index=0;
	for (int i=0;i<5;i++){
		for (int j=0;j<4;j++){
			scanf("%d",&score);
			sum+=score;
		}
		if (sum>max){
			max = sum;
			max_index = i;
		}
		sum=0;
	}
	printf("%d %d\n",max_index+1,max);
	return 0;	
}