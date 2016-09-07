#include <stdio.h>

const int MAX = 1e5;
int T,n;
int cache[MAX+2];
int check[MAX+2];
int next[MAX+2];

int main(void){
	int nxt,ans;
	scanf("%d",&T);
	while (T--){
		ans = 0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++){
			scanf("%d",&next[i]);
			cache[next[i]]++;
		}
		for (int i=1;i<=n;i++){
			nxt = i;
			while (!cache[nxt] && !check[nxt]){
				check[nxt] = 1;
				cache[next[nxt]]--;
				nxt = next[nxt];
				ans++;
			}
		}
		for (int i=1;i<=n;i++) {
			cache[i]=check[i]=next[i]=0;
		}
		printf("%d\n",ans);
	}
	return 0;
}