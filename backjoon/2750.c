#include <stdio.h>

int num[1000]={0};
int i,j,k,count = 0;

void sort(void);

int main(void){
	scanf("%d",&count);
	for (i=0;i<count;i++){
		scanf("%d",&num[i]);
	}
	sort();
	for (i=0;i<count;i++){
		printf("%d\n",num[i]);
	}
	return 0;
}

void sort(void){
	int temp;
	for (i=0;i<count-1;i++){
		k=i;
		for (j=i+1;j<count;j++){
			if (num[k] > num[j]){
				k=j;
			}
		}
		temp = num[k];
		num[k] = num[i];	
		num[i] = temp;
	}
}