#include <stdio.h>

int main(void){
	int num[10001] = {0};
	int i,n,m=0,k;
	scanf("%d %d",&n,&k);
	for (i=1;i<=n;i++){
		if (n%i==0){
			num[m]=i;
			m++;
		}
	}
	if (num[k-1]==0){
		printf("%d\n",0);
	}
	else {
		printf("%d\n",num[k-1]);
	}

	return 0;
}