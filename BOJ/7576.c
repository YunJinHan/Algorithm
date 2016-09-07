#include <cstdio>
#include <queue>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;

queue <pair <int,int> > q;
int n,m;
int cache[1001][1001];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int main(void){
	int ans = 1,count = 0;
	pair <int,int> tmp;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%d",&cache[i][j]);
			if (cache[i][j]==1) q.push(make_pair(i,j));
			if (cache[i][j]!=-1) count++;
		}
	}
	while (!q.empty()){
		tmp = q.front();
		int y = tmp.first;
		int x = tmp.second;
		q.pop();
		count--;
		for (int i=0;i<4;i++){
			int y2 = y + dy[i];
			int x2 = x + dx[i];
			if (y2 < 1 || y2 > m || x2 < 1 || x2 > n) continue;
			if (cache[y2][x2] == 0){
				cache[y2][x2] = cache[y][x] + 1;
				ans = max(ans,cache[y2][x2]);
				q.push(make_pair(y2,x2));
			}
		}
	}
	if (!count) printf("%d\n",ans-1);
	else {printf("%d\n",-1);}
	return 0;
}