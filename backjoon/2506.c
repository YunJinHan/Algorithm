#include <stdio.h>

int cache[101];

int main(void){
	int n,k=1,ans=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&cache[i]);
		if (cache[i]==1){
			if (i!=0){
				if (cache[i-1]==1) k++;
				else {k=1;}
			}
			ans+=k;
		}
	}
	printf("%d\n",ans);
	return 0;
}