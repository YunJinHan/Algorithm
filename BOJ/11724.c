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
	int i,num1,num2;
	scanf("%d %d",&N,&M);
	for (i=0;i<M;i++){
		scanf("%d %d",&num1,&num2);
		a[num1][num2]=1;
		a[num2][num1]=1;
	}
	for (i=1;i<=N;i++){
		if (check[i]==0){
			dfs(i);
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}