#include <stdio.h>
#define min(a,b) ((a)>(b)?(b):(a))

int n,s;
int cache[100001];

int main(void){
	int i,j,sum=0,ans=1e9;
	scanf("%d %d",&n,&s);
	for (i=0;i<n;i++){
		scanf("%d",&cache[i]);
	}
	for (j=i=0;i<n;i++){

		sum += cache[i];

		if (sum >= s){

			for (;j<=i;j++){
				sum -= cache[j];

				if (sum < s){
					sum += cache[j];
					break;
				}
			}
			ans = min(i-j+1,ans);
		}
	}
	if (ans>=n){
		ans = 0;
	}
	printf("%d\n",ans);
	return 0;
}