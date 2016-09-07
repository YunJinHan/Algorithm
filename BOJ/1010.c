#include <stdio.h>

int main(void){
	int t,n,m;
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		int ans = 1;
		for (int j=1;j<=n;j++){
			ans = ans * (m-j+1) / j;
		}
		printf("%d\n",ans);
	}
	return 0;
}