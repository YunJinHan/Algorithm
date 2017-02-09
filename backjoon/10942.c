#include <stdio.h>

int num[2005];
int n,m;

int pal(int s,int e){
	if (e>=s){
		if (s==e){
			return 1;
		}
		else if (num[s]==num[e]){
			return pal(s+1,e-1);
		}
		else {
			return 0;
		}
	}
	return 1;
}

int main(void){
	int i,j,s,e;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	scanf("%d",&m);
	while(m--){
		scanf("%d %d",&s,&e);
		printf("%d\n",pal(s,e));
	}
	return 0;
}