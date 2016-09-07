#include <stdio.h>

int main(void){
	int A,B,C,D;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	C+=D;
	while(C>=60){
		C-=60;
		B++;
	}
	while(B>=60){
		B-=60;
		A++;
	}
	while(A>=24){
		A-=24;
	}
	printf("%d %d %d\n",A,B,C);
	return 0;
}