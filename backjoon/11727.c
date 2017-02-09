#include <stdio.h>

long long int f(int k){
	if (k<=1){
		return 1%10007;
	}
	else if (k%2){
		 return (f(k/2)*f(k/2+1)+2*f(k/2)*f(k/2-1))%10007;
	}
	else {
		 return (f(k/2)*f(k/2)+2*f(k/2-1)*f(k/2-1))%10007;
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	printf("%lld\n",f(n));
	return 0;
}