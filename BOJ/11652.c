#include <cstdio>
#include <algorithm>
#define min(a,b) ((a)>(b)?(b):(a))
using namespace std;

int n;
long long cache[1000001];

int main(void){
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&cache[i]);
	}
	sort(cache,cache+n);

	long long ans = cache[0];
	int ans_cnt = 1, cnt = 1;

	for (int i=1;i<n;i++){
		if (cache[i] == cache[i-1]){
			cnt ++;
		} else {
			cnt = 1;
		} if (ans_cnt < cnt){
			ans_cnt = cnt;
			ans = cache[i];
		}
	}
	printf("%lld\n",ans);
	return 0;
}