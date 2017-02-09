#include <stdio.h>

int main(void){
	int dp[1004][11]={0,1,1,1,1,1,1,1,1,1,1,};
	int i,j,k,n,sum=0;
	scanf("%d",&n);
	if (n>1){
		for (i=1;i<n;i++){
			for (j=1;j<11;j++){
				for (k=0;k<=j;k++){
					dp[i][j]+=dp[i-1][k];
				}
				dp[i][j]%=10007;
			}

		}
	}
	for (i=0;i<11;i++){
		sum+=dp[n-1][i];
		sum%=10007;
	}
	printf("%d\n",sum);
	return 0;
}