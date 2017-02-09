#include <stdio.h>

int main(void){
	int num[6] ={1,1,2,2,2,8};
	int num2;
	for (int i=0;i<6;i++){
		scanf("%d",&num2);
		if (num2 == num[i]) printf("0 ");
		else {
			printf("%d ",num[i]-num2);
		}
	}
	putchar('\n');
	return 0;
}