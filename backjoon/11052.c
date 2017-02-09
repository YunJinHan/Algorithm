#include <stdio.h>
#define max(a,b) (((a)>(b)) ? (a) : (b))

int boong[1005] = {0};
int dp[1005] = {0};

int main(void){
	int i,j,count;
	scanf("%d",&count);

	for (i=1;i<=count;i++){
		scanf("%d",&boong[i]);
	}

	dp[1] = boong[1];

	for (i=2;i<=count;i++){
		dp[i] = boong[i];
		for (j=1;j<=i/2;j++){
			dp[i] = max(dp[i],dp[i-j]+dp[j]);
		}
	}
	printf("%d\n",dp[count]);
	return 0;
}