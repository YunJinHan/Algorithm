#include <stdio.h>

int main(void){
	int num[9];
	int num2[9]; 
	int i,j,k,temp;
	for (i=0;i<9;i++){
		scanf("%d",&num[i]);
		num2[i] = num[i];
	}
	for (i=0;i<8;i++){
		k=i;
		for (j=i+1;j<9;j++){
			if (num[k] > num[j]){
				k=j;
			}
		}
		temp = num[k];
		num[k] = num[i];
		num[i] = temp;
	}
	printf("%d\n",num[8]);
	for (i=0;i<9;i++){
		if (num2[i] == num[8]){
			printf("%d\n",i+1);
		}
	}
	return 0;
}