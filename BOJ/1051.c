#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))

int cache[51][51];

int main(void){
	int n,m,len = 0,ans = 0;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++) scanf("%1d",&cache[i][j]);
	}
	for (int i=1;i<n;i++){
		for (int j=1;j<=m;j++){
			for (int k=j+1;k<=m;k++){
				if (cache[i][j] == cache[i][k]){
					len = k - j;
					if (i+len <= n && cache[i+len][j] == cache[i][j] && cache[i][k] == cache[i+len][k]){
						ans = max(ans,(len+1)*(len+1));
					}
				}
			}
		}
	}
	if (ans==0) ans = 1;
	printf("%d\n",ans);
	return 0;
}