#include <stdio.h>

int main(void){
	int N;
	scanf("%d",&N);
	if (N<7){
		if (N==2){
			printf("CY\n");
		}
		else{
			printf("SK\n");
		}
	}
	else {
		while(N>=7){
			N-=7;
		}
		if (N==0 || N==2){
			printf("CY\n");
		}
		else {
			printf("SK\n");
		}
	}
	return 0;
}