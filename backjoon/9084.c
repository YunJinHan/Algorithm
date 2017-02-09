#include <stdio.h>
#include <string.h>

int dp[100002];
int a[22];
int T,N,M;

int main(void){
	scanf("%d",&T);
	while (T--){
		scanf("%d",&N);
		for (int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		scanf("%d",&M);
		for (int i=0;i<N;i++){
			for (int j=a[i];j<=M;j++){
				dp[j]+=dp[j-a[i]];
			}
		}
		printf("%d\n",dp[M]);
	}
	return 0;
}