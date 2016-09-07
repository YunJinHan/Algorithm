#include <stdio.h>

int cache[105];

int main(void){
	int num,sum=0,max=0;
	for (int i=1;i<=10;i++){
		scanf("%d",&num);
		sum+=num;
		cache[num/10]++;
	}
	for (int i=1;i<=100;i++){
		if (cache[i]!=0 && cache[i] > max){
			max = i;
		}
	}
	printf("%d\n%d\n",sum/10,max*10);
	return 0;
}