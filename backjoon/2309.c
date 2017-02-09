#include <stdio.h>

int main(void){
	int num[9] = {0};
	int i,j,a=0,b=0,total,sum=0;
	for (i=0;i<9;i++){
		scanf("%d",&num[i]);
		sum+=num[i];
	}

	for (i=0;i<9;i++){
		for (j=0;j<9;j++){
			total = sum;
			if (i != j){
				total=total-(num[i]+num[j]);
				if (total==100){
					a=i;
					b=j;
					break;
				}
			}
		}
	}
	num[a]=0;
	num[b]=0;
	int k;
	for (i=0;i<8;i++){
		k=i;
		for (j=i+1;j<9;j++){
			if (num[k]>num[j]){
				k=j;
			}
		}
		int temp = num[k];
		num[k] = num[i];
		num[i] = temp;
	}

	for (i=0;i<9;i++){
		if (num[i] != 0){
			printf("%d\n",num[i]);
		}
	}

	return 0;
}