#include <stdio.h>

int main(void){
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	A+=C/60;
	B+=C%60;
	if (B>=60){
		B-=60;
		A++;
	}
	if (A>=24){
		A-=24;
	}	
	printf("%d %d\n",A,B);
	return 0;
}