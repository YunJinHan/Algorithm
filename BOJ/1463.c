#include <stdio.h>
#define min(a,b) ((a)>(b) ? (b) : (a))

int dp[1000001]={0,};
int count;

int main(void){
	int i;
	scanf("%d",&count);
	for (i=2;i<=count;i++){
		dp[i]=dp[i-1]+1;
		if (i%2==0){
			dp[i] = min(dp[i],dp[i/2]+1);
		}
		if (i%3==0){
			dp[i] = min(dp[i],dp[i/3]+1);
		}
	}
	printf("%d\n",dp[count]);
	return 0;
}