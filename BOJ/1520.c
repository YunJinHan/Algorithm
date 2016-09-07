#include <stdio.h>

int cache[502][502];
int dp[502][502];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int N,M;

int findpath(int x,int y){
	if (x==M && y==N) return dp[N][M] = 1;
	if (dp[y][x]==0){
		for (int i=0;i<4;i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (cache[y][x] > cache[ny][nx]){
				dp[y][x] += findpath(nx,ny);
			}
		}
	}
	return dp[y][x];
}

int main(void){
	scanf("%d %d",&N,&M);
	for (int i=1;i<=N;i++){
		for (int j=1;j<=M;j++){
			scanf("%d",&cache[i][j]);
		}
	}
	printf("%d\n",findpath(1,1));
	return 0;
}