#include <stdio.h>
#include <string.h>

char pro[85];
int dp[85];

int main(void){
	int n,len,sum;
	scanf("%d",&n);
	while (n--){
		scanf("%s",pro);
		len = strlen(pro);
		sum = 0;
		dp[0] = (pro[0]=='O'?1:0);
		for (int i=1;i<len;i++){
			if (pro[i]=='O'){
				dp[i] = (pro[i-1]=='O'?dp[i-1]+1:1);
			} else if (pro[i]=='X'){
				dp[i] = 0;
			}
		}
		for (int i=0;i<len;i++){
			sum += dp[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}