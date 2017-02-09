#include <stdio.h>

int main(void){
	int num,i,j,k,count,total=0;
	int prime[1001]={0};
	for (i=2;i<=1000;i++) prime[i] = 1;
	for (i=2;i<=1000;i++) for (j=i*2;j<=1000;j+=i) prime[j]=0;
	scanf("%d",&count);
	while (count--){
		scanf("%d",&num);
		if (prime[num]==1) total++;
	}
	printf("%d\n",total);
	return 0;
}