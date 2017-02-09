#include <stdio.h>

int main(void){
	int a,b=0;
	scanf("%d",&a);
	if (a%4==0){
		if (a%400==0) b=1;
		else if (a%100==0) b=0;
		else {b=1;}
	}
	if (b)printf("%d\n",1);
	else {printf("%d\n",0);}
	return 0;
}