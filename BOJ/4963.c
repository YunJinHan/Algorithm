#include <stdio.h>
#include <string.h>

int a[53][53];
int check[53][53];
int w,h,count=0;

void dfs(int n,int m){
	if(n>=0 && n<=w && m>=0 && m<=h){
		int i,j;
		check[n][m]=1;
		if (a[n-1][m-1]==1 && check[n-1][m-1]==0) dfs(n-1,m-1);
		if (a[n][m-1]==1 && check[n][m-1]==0) dfs(n,m-1);
		if (a[n+1][m-1]==1 && check[n+1][m-1]==0) dfs(n+1,m-1);
		if (a[n-1][m]==1 && check[n-1][m]==0) dfs(n-1,m);
		if (a[n+1][m]==1 && check[n+1][m]==0) dfs(n+1,m);
		if (a[n-1][m+1]==1 && check[n-1][m+1]==0) dfs(n-1,m+1);
		if (a[n][m+1]==1 && check[n][m+1]==0) dfs(n,m+1);
		if (a[n+1][m+1]==1 && check[n+1][m+1]==0) dfs(n+1,m+1);
	}
}

int main(void){
	int i,j;
	while (1){
		for (i=0;i<53;i++){
			memset(a[i],0,sizeof(int)*53);
			memset(check[i],0,sizeof(int)*53);
		}
		scanf("%d %d",&w,&h);
		if (w==0 && h==0) break;
		for (i=1;i<=h;i++){
			for (j=1;j<=w;j++){
				scanf("%d",&a[j][i]);
			}
		}
		count=0;
		for (i=1;i<=h;i++){
			for (j=1;j<=w;j++){
				if (a[j][i]==1 && check[j][i]==0){
					dfs(j,i);
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}