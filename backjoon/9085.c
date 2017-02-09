#include <stdio.h>
int main(void){
	int t,k,a,sum=0;scanf("%d",&t);
	while (t--){
		scanf("%d",&k);
		while(k--){scanf("%d",&a);sum+=a;}
		printf("%d\n",sum);sum=0;
	}return 0;
}