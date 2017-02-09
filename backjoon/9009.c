#include <stdio.h>

int main(void){
	long long int dp[45]={1,1,2,};
	int count[40]={0,};
	int i,j,k=0;
	int n,num;
	scanf("%d",&n);
	for (i=3;i<45;i++) dp[i]=dp[i-1]+dp[i-2];
	while (n--){
		scanf("%d",&num);
		for (i=44;i>=0;i--){
			if (num>=dp[i]){
				num-=dp[i];
				count[k++]=dp[i];
			}
			if (num==0) break;
		}
		for (i=k-1;i>=0;i--) printf("%d ",count[i]);
		printf("\n");
		k=0;
	}

	return 0;
}