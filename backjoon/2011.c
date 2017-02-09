#include <stdio.h>
#include <string.h>

char s[5010];
int dp[5010]={1,};

int main(void){
	int i;
	scanf("%s",s+1);
	int len = strlen(s+1);
	for (i=1;i<=len;i++){
		if (s[i]!='0'){
			dp[i]=dp[i-1]%1000000;
		}
		if (s[i-1]=='1' || (s[i-1]=='2' && s[i]<='6')){
			dp[i]=(dp[i]+dp[i-2])%1000000;
		}
	}
	printf("%d\n",dp[len]);
	return 0;
}