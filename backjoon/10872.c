#include <stdio.h>

int f(int a){
	if (a==0 || a==1) return 1;
	return a*f(a-1);
}

int main(void){
	int num;
	scanf("%d",&num);
	printf("%d\n",f(num));
	return 0;
}