#include <cstdio>
#define max(a,b) ((a)>(b)?(a):(b))

int cache[100002];
int dp[100002];

int main(void){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&cache[i]);
	dp[0] = cache[0];
	for (int i=1;i<n;i++){
		dp[i] = max(cache[i],dp[i-1]+cache[i]);
	}
	int ans = dp[0];
	for (int i=1;i<n;i++) ans = max(ans,dp[i]);
	printf("%d\n",ans);
	return 0;
}