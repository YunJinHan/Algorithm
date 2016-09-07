#include <stdio.h>

int main(void){
	int r = 0;
	unsigned long long n;
	scanf("%lld",&n);
	while (n>0){
		r += n%2;
		n /= 2;
	}
	printf("%d\n",(r==1)?1:0);
	return 0;
}