#include <stdio.h>

int main(void){
	int n,p,w,ans;
	scanf("%d %d %d %d",&n,&n,&p,&w);
	if (p%w==0){
		ans = p/w;
	} else {
		ans = p/w + 1;
	}
	printf("%d\n",ans);
	return 0;
}