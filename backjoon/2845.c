#include <stdio.h>

int main(void){
	int num[5] ={0,};
	int A,B,num2;
	scanf("%d %d",&A,&B);
	num2 = A*B;
	for (int i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	for (int i=0;i<5;i++){
		printf("%d ",num[i]-num2);
	}
	return 0;
}