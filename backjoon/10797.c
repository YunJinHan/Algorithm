#include <stdio.h>

int main(void){
	int num,num2,total=0;
	scanf("%d",&num);
	for (int i=0;i<5;i++){
		scanf("%d",&num2);
		if (num==num2) total++;
	}
	printf("%d\n",total);
	return 0;
}