#include <stdio.h>

int dp[31] = {1,1,};

int main(void){
	int n,ans;
	scanf("%d",&n);
	for (int i=2;i<=n;i++){
		dp[i] = dp[i-2]*2 + dp[i-1];
	}
	if (n%2==0){
		ans = (dp[n] + dp[n/2] + 2*dp[n/2-1])/2;
	}
	else {
		ans = (dp[n] + dp[n/2])/2;
	}
	printf("%d\n",ans);
	return 0;
}