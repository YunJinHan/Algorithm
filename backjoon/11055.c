#include <stdio.h>
#define max(a,b) (((a)>(b)) ? (a) : (b))

int main(void){
	int num[1004]={0};
	int dp[1004]={0};
	int i,j,count;
	scanf("%d",&count);
	for (i=0;i<count;i++){
		scanf("%d",&num[i]);
	}
	int m =0;
	int a = 0;

	for (i=1;i<count;i++){
		for (j=i-1;j>=0;j--){
			if (num[i] > num[j]){
				if (dp[j] != 0){
					if (a==0){
						m = dp[j] + num[i];
						a=1;
					}
					m = max(m,dp[j]+num[i]);
					dp[i] = m;
				}
				else {
					if (a==0){
						m = num[i] + num[j];
						a=1;
					}
					m = max(m,num[i] + num[j]);
					dp[i] = m;
				}
			}
		}
		a=0;
	}
	m = 0;
	for (i=0;i<count;i++){
		if (dp[i]>m){
			m = dp[i];
		}
	}
	if (m==0){
		printf("%d\n",num[0]);
	}
	else {
		printf("%d\n",m);
	}
	return 0;
}