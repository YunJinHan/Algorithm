#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int a[28][28];
int check[28][28];
int dx[4]={0,-1,1,0};
int dy[4]={-1,0,0,1};
int b[800];
int N,bsize=0,sum=0,c=0;

void dfs(int n,int m){
	int i,j;
	if (n>=1 && n<=N && m>=1 && m<=N){
		check[n][m]=1;
		for (i=0;i<4;i++){
			if (a[n+dy[i]][m+dx[i]]==1 && check[n+dy[i]][m+dx[i]]==0){
				sum++;
				dfs(n+dy[i],m+dx[i]);
			}
		}
	}
}

int main(void){
	int i,j;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		for (j=1;j<=N;j++){
			scanf("%1d",&a[i][j]);
		}
	}
	for (i=1;i<=N;i++){
		for (j=1;j<=N;j++){
			if (a[i][j]==1 && check[i][j]==0){
				sum=0;
				dfs(i,j);
				c++;
				b[bsize++]=sum+1;
			}
		}
	}
	printf("%d\n",c);
	sort(b,b+800);
	for (i=0;i<800;i++){
		if (b[i]!=0){
			printf("%d\n",b[i]);
		}
	}
	return 0;
}