#include <stdio.h>

int main(void){
	int n,m,sum=0;
	scanf("%d %d",&n,&m);
	if (n==1 && m != 1) sum = m-1;
	else if (n != 1 && m==1) sum = n-1;
	else {
		sum = (m-1) + m*(n-1);
	}
	printf("%d\n",sum);
	return 0;
}