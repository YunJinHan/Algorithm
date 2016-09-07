#include <stdio.h>

int count;
int a,b;

int gcm(int x,int y);

int main(void){
	scanf("%d",&count);
	while(count--){
		scanf("%d %d",&a,&b);
		printf("%d\n",(a*b)/(gcm(a,b)));
	}
	return 0;
}

int gcm(int x,int y){
	int n;
	while(1){
		n=x%y;
		if (n==0) return y;
		x = y;
		y = n;
	}
}