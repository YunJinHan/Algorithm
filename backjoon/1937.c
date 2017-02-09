#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

int tree[510][510];
int check[510][510];
int dp[510][510];
int k;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int bfs(int ypos,int xpos){
	if (check[ypos][xpos]==-1){
		check[ypos][xpos]=1;
		for (int i=0;i<4;i++){
			int nx = dx[i]+xpos;
			int ny = dy[i]+ypos;
			if (ny<1 || nx<1 || ny>k || nx>k) continue;
			if (tree[ypos][xpos] >= tree[ny][nx]) continue;
			else {
				dp[ypos][xpos]=max(dp[ypos][xpos],bfs(ny,nx)+1);
			}
		}
	}
	return dp[ypos][xpos];
}

int main(void){
	int i,j,result=-1;
	scanf("%d",&k);
	for (i=1;i<=k;i++){
		for (j=1;j<=k;j++){
			scanf("%d",&tree[i][j]);
			check[i][j]=-1;
		}
	}
	for (i=1;i<=k;i++){
		for (j=1;j<=k;j++){
			result=max(bfs(i,j),result);
		}
	}
	printf("%d\n",result+1);
	return 0;
}