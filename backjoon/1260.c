#include <stdio.h>
#include <queue>
using namespace std;

int a[1002][1002]={0,};
int check[1002]={0,};
int N,M,V;
queue<int> q;

void dfs(int n){
	int i,j;
	printf("%d ",n);
	check[n]=1;
	for (i=1;i<=N;i++){
		if(a[n][i]==1 && check[i]==0){
			dfs(i);
		}
	}
}


void bfs(int n){
	int i,j;
	printf("%d ",q.front());
	if (!q.empty()) q.pop();
	check[n]=1;
	for(i=1;i<=N;i++){
		if (a[n][i]==1 && check[i]==0){
			check[i]=1;
			q.push(i);
		}
	}
	if (!q.empty()) bfs(q.front());
	else if (q.empty()) return
}

int main(void){
	int i,j;
	int num1,num2;
	scanf("%d %d %d",&N,&M,&V);
	for (i=0;i<M;i++){
		scanf("%d %d",&num1,&num2);
		a[num1][num2]=1;
		a[num2][num1]=1;
	}
	dfs(V);
	printf("\n");
	for (i=0;i<1002;i++) check[i]=0;
	q.push(V);
	bfs(V);
	printf("\n");
	return 0;
}

