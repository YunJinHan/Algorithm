#include <stdio.h>

int main(void){
	int num[5] = {0};
	int i,sum=0;
	for (i=0;i<5;i++){
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	sum/=5;
	int temp,j,k;
	for (i=0;i<4;i++){
		k=i;
		for (j=i+1;j<5;j++){
			if (num[k] > num[j]){
				k=j;
			}
		}
		temp = num[k];
		num[k] = num[i];
		num[i] = temp;
	}
	printf("%d\n%d\n",sum,num[2]);
	return 0;
}