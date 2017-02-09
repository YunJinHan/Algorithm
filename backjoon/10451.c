#include <stdio.h>

int a[1002][1002]={0,};
int check[1002]={0,};
int N,M,count=0;

void dfs(int n){
	int i,j;
	check[n]=1;
	for (i=1;i<=N;i++){
		if (a[n][i]==1 && check[i]==0){
			dfs(i);
		}
	}
}

int main(void){
	int i,j,num1;
	scanf("%d",&M);
	while (M--){
		scanf("%d",&N);
		for (i=1;i<=N;i++){
			scanf("%d",&num1);
			a[i][num1]=1;
			a[num1][i]=1;
		}
		for (i=1;i<=N;i++){
			if (check[i]==0){
				dfs(i);
				count++;
			}
		}
		printf("%d\n",count);
		for (i=0;i<1002;i++) check[i]=0;
		for (i=0;i<1002;i++){
			for (j=0;j<1002;j++){
				a[i][j]=0;
			}
		}
		count=0;
	}
	return 0;
}