#include <stdio.h>
#define INF 1e10

int K,N;
long long int cache[10001];
long long int left,right=INF,mid,max=0;

int main(void){
	int i,j,result;
	scanf("%d %d",&K,&N);
	for (i=1;i<=K;i++){
		scanf("%d",&cache[i]);
	}
	while(left<=right){
		result=0;
		mid=(left+right)/2;
		for (i=1;i<=K;i++){
			result+=cache[i]/mid;
		}
		if (result>=N){
			left=mid+1;
			if (mid>max) max=mid;
		}
		else{
			right=mid-1;
		}
	}
	printf("%lld\n",max);
	return 0;
}