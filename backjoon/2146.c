#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(a,b) ((a) > (b) ? (b) : (a))

int map[102][102];
int check[102][102];
int check2[102][102];
int map_check[102][102];
int zero_check[102][102][102];
int N,island = 1;
int zero = 1;
int dy[4]={0,0,-1,1};
int dx[4]={1,-1,0,0};

void dfs(int y,int x){
	if (x>=1 && x<=N && y>=1 && y<=N){
		check[y][x]=1;
		map_check[y][x]=island;
		for (int i=0;i<4;i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (map[ny][nx]==1 && check[ny][nx]==0){
				map_check[ny][nx]=island;
				dfs(ny,nx);
			}
		}
	}
}

void zero_dfs(int y,int x,int island){
	if (x>=1 && x<=N && y>=1 && y<=N && check2[y][x] == 0 && map_check[y][x] == island){
		check2[y][x]=1;
		for (int i=0;i<4;i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (map_check[ny][nx]==0){
				zero_check[island][x][y] = 1;
			}
			if (map_check[ny][nx]==island && check2[ny][nx]==0){
				zero_dfs(ny,nx,island);
			}
		}
	}
}

int length(int xa,int xb,int ya,int yb){
	return abs(xa-xb)+abs(ya-yb)-1;
}

int main(void){
	int i,j,k,l,p,o,result = 100000;
	scanf("%d",&N);
	for (i=1;i<=N;i++){
		for (j=1;j<=N;j++){
			scanf("%d",&map[j][i]);
		}
	}
	for (i=1;i<=N;i++){
		for (j=1;j<=N;j++){
			if (map[j][i]==1 && check[j][i]==0){
				dfs(j,i);
				zero_dfs(j,i,island);
				island++;
				zero = 1;
			}
		}
	}
	for (i=1;i<island;i++){
		for (j=i+1;j<island;j++){
			for (k=1;k<=N;k++){
				for (l=1;l<=N;l++){
					if (zero_check[i][k][l]!=0){
						for (p=1;p<=N;p++){
							for (o=1;o<=N;o++){
								if (zero_check[j][p][o]!=0){
									result=min(result,length(k,p,l,o));
								}
							}
						}
					}
				}
			}
		}
	}
	if (result==100000){
		printf("%d\n",0);
	}
	else {
		printf("%d\n",result);
	}
	return 0;
}