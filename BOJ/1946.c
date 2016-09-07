#include <stdio.h>

int cache[100002];
int N,T;

int main(void){
	int a,b,min,result;
	scanf("%d",&T);
	while (T--){
		min=1e9;
		result=0;
		scanf("%d",&N);
		for (int i=1;i<=N;i++){
			scanf("%d %d",&a,&b);
			cache[a]=b;
		}
		for (int i=1;i<=N;i++){
			if (min > cache[i]){
				min = cache[i];
				result++;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}