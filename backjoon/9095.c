#include <stdio.h>

int main(void){
	int T,n;
	int dp[550]={0,};
	scanf("%d",&T);
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	while(T--){
		scanf("%d",&n);
		if (n>2){
			for (int i=3;i<=n;i++){
				dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
			}
		}
		printf("%d\n",dp[n-1]);
	}
	return 0;
}