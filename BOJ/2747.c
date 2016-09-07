#include <stdio.h>

int main(void){
	int dp[50]={0,1,1,2,3,5};
	int i,j,count;
	scanf("%d",&count);
	if (count<=5) printf("%d\n",dp[count]);
	else {
		for (i=6;i<=count;i++){
			dp[i]=dp[i-1]+dp[i-2];
		}
		printf("%d\n",dp[count]);
	}
	return 0;
}