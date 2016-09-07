#include <stdio.h>

int cache[10000];

int main(void){
	int n,tmp;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&tmp);
		cache[tmp-1]++;
	}
	for (int i=0;i<10000;i++){
		for (int j=0;j<cache[i];j++){
			printf("%d\n",i+1);
		}
	}
	return 0;
}