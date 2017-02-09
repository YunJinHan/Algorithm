#include <stdio.h>
#define min(a,b) ((a)>(b) ? (b) : (a))
#define INF 1e9

int n,m;
int vertex[1002][1002];
int path[1002][1002];
int rc = 0;

void route_count(int s,int e){
	rc++;
	if (path[s][e]!=0){
		route_count(s,path[s][e]);
		route_count(path[s][e],e);
	}
}

void route_print(int s,int e){
	if (path[s][e]!=0){
		route_count(s,path[s][e]);
		printf("%d ",path[s][e]);
		route_count(path[s][e],e);
	}
}

int main(void){
	int a,b,c,start,end;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++) vertex[i][j]=INF;
		vertex[i][i] = 0;
	}
	for (int i=0;i<m;i++){
		scanf("%d %d %d",&a,&b,&c);
		vertex[a][b] = min(vertex[a][b],c);
	}
	scanf("%d %d",&start,&end);
	for (int k=1;k<=n;k++){
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				if (vertex[i][j] > vertex[i][k]+vertex[k][j]){
					vertex[i][j] = vertex[i][k]+vertex[k][j];
					path[i][j] = k;
				}
			}
		}
	}
	printf("%d\n",vertex[start][end]);
	route_count(start,end);
	printf("%d\n%d ",rc,start);
	if (start!=end){
		route_print(start,end);
		printf("%d",end);
	}
	putchar('\n');
	return 0;
}