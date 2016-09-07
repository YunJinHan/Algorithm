#include <cstdio>

int main(void){
	int n,store;
	unsigned long long cache[1001],ans = 0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%lld",&cache[i]);
	scanf("%d",&store);
	for (int i=1;i<=n;i++){
		if (cache[i]%store == 0){
			ans += cache[i];
		} else {
			ans += (cache[i]/store+1)*store;
		}
	}
	printf("%lld\n",ans);
	return 0;
}