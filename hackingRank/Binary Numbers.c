#include <stdio.h>
#define max(a,b)  ((a)>(b) ? (a) : (b))

int main(void) {
	int n,i,j,tmp;
	int cnt = 0,ans = 0;
	int cache[30];
	scanf("%d",&n);

	for (i = 0; n > 0; i ++) {
		cache[i] = n%2;
		n /= 2;
	}
	tmp = cache[i - 1];
	for (j= i - 1; j >= 0; j --) {
		if (tmp == cache[j]) {
			cnt ++;
			ans = max(ans,cnt);
		}
		else {
			cnt = 0;
		}
	}
	printf("%d\n",ans);
	return 0;
}