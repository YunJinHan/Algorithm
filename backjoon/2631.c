#include <cstdio>

int cache[201];

int main(void){
	int n,tmp,len=0,ans=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&cache[i]);

	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			tmp = cache[i];
			len = 0;
			for (int k=j;k<n;k++){
				if ( tmp < cache[k]){
					tmp = cache[k];
					len++;
				}	
			}
			ans = (ans>len)?ans:len;
		}
	}
	printf("%d\n",n-ans-1);
	return 0;
}