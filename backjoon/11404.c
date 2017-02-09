#include <stdio.h>
#define min(a,b) ((a) > (b) ? (b) : (a))
#define INF 999999999

int d[102][102];
int n,m;

int main(void){
	int i,j,k;
	int a,b,c;
	scanf("%d",&n);
	scanf("%d",&m);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			d[i][j]=INF;
		}
	}
	for (i=1;i<=n;i++) d[i][i]=0;
	for (i=1;i<=m;i++){
		scanf("%d %d %d",&a,&b,&c);
		d[a][b]=min(d[a][b],c);
	}
	for (k=1;k<=n;k++){
		for (i=1;i<=n;i++){
			for (j=1;j<=n;j++){
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (d[i][j]==INF){
				d[i][j]=0;
			}
			printf("%d ",d[i][j]);
		}
		putchar('\n');
	}
	return 0;
}