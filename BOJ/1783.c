#include <stdio.h>

int main(void){
	int n,m,k;
	scanf("%d %d",&n,&m);
	if (n==1) k=1;
	else if (n==2){
		if (m<=6) k=(m+1)/2;
		else {k=4;}
	}
	else{
		if (m<=4) k=m;
		else if (m==5) k=4;
		else {k=m-2;}
	}
	printf("%d\n",k);
	return 0;
}