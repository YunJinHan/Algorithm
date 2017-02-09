#include <stdio.h>

int main(void){
	int i,j,count,a;
	int num[501]={0};
	int dp[501]={0};
	
	scanf("%d",&count);
	while(count--){
		scanf("%d",&a);
		for (i=0;i<a;i++){
			scanf("%d",&num[i]);
		}
		for (i=1;i<=a;i++){
			for (j=0;j<i;j++){
				if (num[i] > num[j] && dp[i] < dp[j] + 1){
					dp[i] = dp[j] + 1;
				}
			}
		}

		int k;
		for (i=0;i<a;i++){
			k=i;
			for (j=i+1;j<=a;j++){
				if (dp[k]>dp[j]){
					k=j;
				}
			}
			int temp = dp[k];
			dp[k] = dp[i];
			dp[i] = temp;
		}

		printf("%d\n",dp[a] + 1);

		for (i=0;i<=a;i++){
			num[i]=0;
			dp[i]=0;
		}
	}
	return 0;
}