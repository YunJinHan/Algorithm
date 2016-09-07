#include <stdio.h>

int main(void){
	int dp[1000001]={1,2,};
	int i,N;
	scanf("%d",&N);
	for (i=2;i<N;i++){
		dp[i]=dp[i-1]+dp[i-2];
		dp[i]%=15746;
	}
	printf("%d\n",dp[N-1]);
	return 0;
}