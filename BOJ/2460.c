#include <stdio.h>

int cache[10][2];
int dp[10];

int main(void){
	for (int i=0;i<10;i++){
		scanf("%d %d",&cache[i][0],&cache[i][1]);
	}
	dp[0]=cache[0][1];
	for (int i=1;i<10;i++){
		dp[i]=dp[i-1]+cache[i][1]-cache[i][0];
	}
	for (int i=0;i<9;i++){
		for (int j=i;j<10;j++){
			if (dp[i] > dp[j]){
				int temp = dp[i];
				dp[i] = dp[j];
				dp[j] = temp;
			}
		}
	}
	printf("%d\n",dp[9]);
	return 0;
}