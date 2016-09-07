#include <stdio.h>

int gcd(int a,int b){
	return b ? gcd(b,a%b) : a;
}

int main(void){
	int n1,n2,m1,m2,k1,k2;
	scanf("%d %d %d %d",&n1,&n2,&m1,&m2);
	k1 = n1*m2+m1*n2;
	k2 = n2*m2;
	int k = gcd(k1,k2);
	printf("%d %d\n",k1/k,k2/k);
	return 0;
}