#include <stdio.h>

int main(void){
	int a,b,c,d,k;
	int num[3] = {0};
	if (scanf("%d %d",&a,&b)==2){
		k = a*b;
		num[0] = b/100;
		b-=num[0]*100;
		num[1] = b/10;
		b-=num[1]*10;
		num[2] = b;
		printf("%d\n",num[2]*a);
		printf("%d\n",num[1]*a);
		printf("%d\n",num[0]*a);
		printf("%d\n",k);
	}
	return 0;
}