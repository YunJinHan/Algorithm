#include <stdio.h>

int main(void){
	int num[10] = {0};
	int i,a,b,c,sum;
	if (scanf("%d %d %d",&a,&b,&c)==3){
			sum=a*b*c;
		while (sum>10){
			num[sum%10]++;
			sum/=10;
		}
		num[sum]++;
		for (i=0;i<=9;i++){
			printf("%d\n",num[i]);
		}
	}
	return 0;
}