#include <stdio.h>

int main(void){
	int i,count;
	double aver,sum=0;
	double max=0;
	double dp[1004]={0,};

	scanf("%d",&count);
	for (i=0;i<count;i++){
		scanf("%lf",&dp[i]);
		if (dp[i]>max){
			max = dp[i];
		}
	}
	for (i=0;i<count;i++){
		dp[i] = dp[i]/max*100;
		sum+=dp[i];
	}
	printf("%.2lf\n",aver=sum/count);
	return 0;
}