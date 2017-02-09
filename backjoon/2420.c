#include <stdio.h>

int main(void){
	long long int n,m,k;
	scanf("%lld %lld",&n,&m);
	k=n-m;
	if (k<0){
		k*=-1;
	}
	printf("%lld\n",k);
	return 0;
}