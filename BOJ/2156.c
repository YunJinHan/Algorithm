#include <stdio.h>
#define max(a,b) ((a)>(b) ? (a):(b))

int cache[10002];
int dp[10002];
int N;

int main(void){
	int i;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		scanf("%d",&cache[i]);
	}
	dp[1]=cache[1];
	dp[2]=cache[2]+dp[1];
	for (i=3;i<=N;i++){
		dp[i]=max(dp[i-1],max(dp[i-2]+cache[i],dp[i-3]+cache[i-1]+cache[i]));
	}
	printf("%d\n",dp[N]);
	return 0;
}