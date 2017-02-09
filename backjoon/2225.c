#include <stdio.h>
#define mod 1000000000

int dp[201][201];
int N,K;

int main(void){
	int i,j;
	scanf("%d %d",&N,&K);
	for (i=0;i<N;i++){
		for (j=0;j<K;j++){
			if (i==0 || j==0){
				dp[i][j] = j+1;
			}
			else {
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
			}
		}
	}
	printf("%d\n",dp[N-1][K-1]);
	return 0;
}