#include <stdio.h>

int main(void){
	int num[1050] ={0};
	int i,j,a,b,k=0,sum=0;
	for (i=1;i<=45;i++){
		for (j=1;j<=i;j++){
			num[k]=i;
			k++;
		}
	}
	scanf("%d %d",&a,&b);
	for (i=a;i<=b;i++){
		sum+=num[i-1];
	}
	printf("%d\n",sum);
	return 0;
}