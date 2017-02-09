#include <stdio.h>

int a,b;

int gcm(int a,int b);

int main(void){
	scanf("%d %d",&a,&b);
	printf("%d\n%d\n",gcm(a,b),(a*b)/(gcm(a,b)));
	return 0;
}

int gcm(int a,int b){
	int n;
	while(1){
		n=a%b;
		if (n==0) return b;
		a = b;
		b = n;
	}
}