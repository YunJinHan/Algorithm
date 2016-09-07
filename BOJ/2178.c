#include <stdio.h>
#include <queue>
using namespace std;

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int map[102][102];
int check[102][102] = {1,};
int N,M;

int main(void){
	int i,j,result;
	queue<int> q;
	scanf("%d %d",&N,&M);
	for (i=0;i<N;i++){
		for (j=0;j<M;j++){
			scanf("%1d",&map[i][j]);
		}
	}
	q.push(0);
	result = 1;

	while (1){
		int qsize = q.size();
		for (i=0;i<qsize;i++){
			int y = q.front()/100;
			int x = q.front()%100;
			q.pop();

			if (y == N-1 && x == M-1){
				printf("%d\n",result);
				return 0;
			}

			for (j=0;j<4;j++){
				int ny = y + dy[j];
				int nx = x + dx[j];
				if (ny<0||ny>=N||nx<0||nx>=M) continue;
				if (map[ny][nx]==0) continue;
				if (check[ny][nx]==1) continue;
				check[ny][nx] = 1;
				q.push(ny*100+nx);
			}
		}
		result++;
	}
	return 0;
}