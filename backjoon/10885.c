#include <cstdio>
#include <cstring>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)>(b)?(b):(a))
#define mod 1000000007

int t;
int cache[100001];
int dp[100001];

int main(void){
	int n,tmp;
	scanf("%d",&t);
	while (t--){
		tmp = 0;
		scanf("%d",&n);
		for (int i=0;i<n;i++) scanf("%d",&cache[i]);
		dp[0] = cache[0];
		for (int i=1;i<n;i++){
			dp[i] = max(dp[i],max(cache[i],dp[i-1]*cache[i]));
			dp[i]%=mod;
			
		}
		printf("%d\n",dp[n-1]);
	}
	return 0;
}