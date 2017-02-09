#include <stdio.h>

int main(void){
	int a,b,c,A,B,C;
	scanf("%d %d %d",&a,&b,&c);
	A = a>b ? (a>c ? a : c) : (b>c ? b : c);
	B = a>b ? (a>c ? c : a) : (b>c ? c : b);
	C = a>b ? (b>c ? c : b) : (a>c ? c : a);
	printf("%d %d %d\n",C,B,A);
	return 0;
}