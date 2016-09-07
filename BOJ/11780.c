#include <stdio.h>
#include <string.h>
#define min(a,b) ((a) > (b) ? (b) : (a))
#define INF 999999999

int d[102][102];
int p[102][102];
int n,m,count;

void path(int a,int b){
	if (p[a][b]!=0){
		path(a,p[a][b]);
		printf("%d ",p[a][b]);
		path(p[a][b],b);
	}
}

void path2(int a,int b){
	if (p[a][b]!=0){
		path2(a,p[a][b]);
		count++;
		path2(p[a][b],b);
	}
}

int main(void){
	int i,j,k;
	int a,b,c;
	scanf("%d",&n);
	scanf("%d",&m);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			p[i][j]=0;
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
				if (d[i][j] > d[i][k]+d[k][j]){
					p[i][j]=k;
					d[i][j]=d[i][k]+d[k][j];
				}
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

	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			path2(i,j);
			if (d[i][j]==0 && count==0){
				printf("0");
			}
			else if (count==0){
				printf("%d %d %d",2,i,j);
			}
			else {
				printf("%d %d ",count+2,i);
				path(i,j);
				printf("%d",j);
			}
			count=0;
			putchar('\n');
		}
	}
	return 0;
}