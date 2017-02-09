#include <stdio.h>
#define min(a,b) ((a)>(b) ? (b) : (a))
#define INF 1e9

int n,m;
int vertex[1002][1002];

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
				vertex[i][j] = min(vertex[i][j],vertex[i][k]+vertex[k][j]);
			}
		}
	}
	printf("%d\n",vertex[start][end]);
	return 0;
}