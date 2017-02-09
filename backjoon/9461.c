#include <stdio.h>

long long int dp[101]={1,1,1,2,2,};
int count;

int main(void){
	int num;
	scanf("%d",&count);
	while (count--){
		scanf("%d",&num);
		if (num>=6){
			for (int i=5;i<=num;i++){
				dp[i]=dp[i-1]+dp[i-5];
			}
		}
		printf("%lld\n",dp[num-1]);
	}
	return 0;
}