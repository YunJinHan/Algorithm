#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b) ? (a):(b))

int main(void){
	int count;
	int sum[102][102];
	int i,j,n,num,max_sum=0;
	scanf("%d",&count);
	while (count--){
		memset(sum,0,sizeof(sum));
		scanf("%d",&n);
		for (i=1;i<=n;i++){
			for (j=1;j<=i;j++){
				scanf("%d",&num);
				if (i==1 && j==1) sum[i][j]=num;
				else {
					sum[i][j]=max(sum[i-1][j],sum[i-1][j-1])+num;
				}
				max_sum = max(sum[i][j],max_sum);
			}
		}
		printf("%d\n",max_sum);
		max_sum=0;
	}	
	return 0;
}