#include <stdio.h>
#define max(a,b) ((a) > (b) ? (a) : (b))

int d[1002][1002];
int sum[1002][1002];
int n,m;

int main(void){
	int i,j,result;
	scanf("%d %d",&n,&m);
	for (i=1;i<=n;i++){
		for (j=1;j<=m;j++){
			scanf("%d",&d[i][j]);
		}
	}
	for (i=1;i<=n;i++){
		for (j=1;j<=m;j++){
			result=0;
			result=max(sum[i-1][j],max(sum[i-1][j-1],sum[i][j-1]));
			sum[i][j]=result+d[i][j];
		}
	}
	printf("%d\n",sum[n][m]);
	return 0;
}