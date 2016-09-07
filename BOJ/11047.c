#include <stdio.h>

int N[10]={0,};
int total=0;
int K;
int count;

int main(void){
	int i;
	scanf("%d %d",&count,&K);
	for (i=0;i<count;i++){
		scanf("%d",&N[i]);
	}
	int j = count-1;
	while (K!=0){
		if (N[j]>K) j--;
		else if (N[j]<K){
			K-=N[j];
			total++;
		}
		else {
			K=0;
			total++;
			break;
		}
	}
	printf("%d\n",total);
	return 0;
}