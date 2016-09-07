#include <stdio.h>
int main(void){
	int N,M,K,count=0;
	scanf("%d %d %d",&N,&M,&K);
	while ((N+M) >= K && N>=2 && M>=1){
		N-=2;M-=1;count++;
	}
	if (N+M<K){
		N+=2;M+=1;count--;
	}
	printf("%d\n",count);
	return 0;
}