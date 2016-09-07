#include <stdio.h>
#define max(a,b) ((a)>(b) ? (a) : (b))

int dp[501][501] = {0,};
int count;

int main(void){
	int i,j,num2,sum=0;
	scanf("%d",&count);
	for (i=0;i<count;i++){
		for (j=1;j<=i+1;j++){
			scanf("%d",&num2);
			if (i==0 && j==1) dp[i][j] = num2;
			else {
				dp[i][j] = max(dp[i-1][j-1],dp[i-1][j])+num2;
			}
			sum=max(sum,dp[i][j]);
		}
	}
	printf("%d\n",sum);
	return 0;
}