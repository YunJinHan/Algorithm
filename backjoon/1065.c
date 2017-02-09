#include <stdio.h>

int main(void){
	int N,p,sum=0;
	scanf("%d",&N);
	for (int i=1;i<=N;i++){
		p = (i/10)%10-i%10;
		for (int j=10;j<=i;j*=10){
			if ((i/j)%10-(i*10/j)%10 != p){
				sum--;
				break;
			}
		}
		sum++;
	}
	printf("%d\n",sum);
	return 0;
}