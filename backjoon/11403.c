#include <stdio.h>
#define min(a,b) ((a) > (b) ? (b) : (a))
#define INF 999999999

int d[102][102];
int n;

int main(void){
	int i,j,k;
	int a,b,c;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			scanf("%d",&d[i][j]);
			if (d[i][j]==0) d[i][j] = INF;
		}
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
				printf("%d ",0);
			}
			else {
				printf("%d ",1);
			}
		}
		putchar('\n');
	}
	return 0;
}