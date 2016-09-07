#include <stdio.h>

int main(void){
	int dp[100001]={0,};
	int i,n;
	scanf("%d",&n);
	dp[0]=3;
	dp[1]=7;
	for (i=2;i<n;i++){
		dp[i]=dp[i-2]*3+(dp[i-1]-dp[i-2])*2;
		dp[i]%=9901;
	}
	printf("%d\n",dp[n-1]);
	return 0;
}