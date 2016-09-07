#include <stdio.h>

int A,B;
int count;

int gcd(int a,int b){return b ? gcd(b,a%b) : a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}

int main(void){
	scanf("%d",&count);
	while(count--){
		scanf("%d %d",&A,&B);
		printf("%d %d\n",lcm(A,B),gcd(A,B));
	}
	return 0;
}