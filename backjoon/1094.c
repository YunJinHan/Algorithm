#include <stdio.h>

int w(int x){
	int sum = 0;
	if (x==64) return 1;
	if (x>=32){
		x -= 32;
		sum++;
	}
	if (x>=16){
		x -= 16;
		sum++;
	}
	if (x>=8){
		x -= 8;
		sum++;
	}
	if (x>=4){
		x -= 4;
		sum++;
	}
	if (x>=2){
		x -= 2;
		sum++;
	}
	if (x>=1){
		x -= 1;
		sum++;
	}
	return sum;
}

int main(void){
	int x;
	scanf("%d",&x);
	printf("%d\n",w(x));
	return 0;
}