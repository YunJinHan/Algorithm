#include <stdio.h>

int main(void){
	int num=0,count=0;
	int dp[11]={0};
	int i,j,k,temp;

	if (scanf("%d",&num)==1){

		while (num>10){
			dp[count]=num%10;
			count++;
			num=(int)num/10;
		}
		dp[count]=num;

		for (i=0;i<count;i++){
			k=i;
			for (j=i+1;j<count+1;j++){
				if (dp[j] > dp[k]){
					k=j;
				}
			}
			temp = dp[k];
			dp[k] = dp[i];
			dp[i] = temp;
		}
		
		for (i=0;i<count+1;i++){
			printf("%d",dp[i]);
		}
		printf("\n");
	}
	return 0;
}
