#include <stdio.h>
#include <algorithm>
#define min(a,b) ((a)>(b)?(b):(a))
using namespace std;

int n,k;
long long height[300001];
long long gap[300001];

int main(void){
	int ans = 0;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&height[i]);
		if (i!=0){
			gap[i-1] = height[i] - height[i-1];
		}
	}
	sort(gap,gap+n-1);
	ans = height[n-1] - height[0];
	while (k>=1){
		ans -= gap[n-1];
		n--;
		k--;
	}
	printf("%d\n",ans);
	return 0;
}