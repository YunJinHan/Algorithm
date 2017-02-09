#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

int main(void){
	int box[1001]={0,};
	int dp[1001]={0,};
	int i,j,n,max=-1;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&box[i]);
		dp[i]=1;
	}
	for (i=0;i<n;i++){
		for (j=i-1;j>=0;j--){
			if (box[i]>box[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	for (i=0;i<n;i++){
		if (dp[i]>max){
			max=dp[i];
		}
	}
	printf("%d\n",max);
	return 0;
}