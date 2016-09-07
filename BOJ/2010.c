#include <stdio.h>

int main(void){
	int count,j,i,k=0,sum=0;
	int a[500000] = {0};
	scanf("%d",&count);
	j = count;
	while(count--){
		scanf("%d",&a[k]);
		k++;
	}
	for (i=0;i<j-1;i++){
		a[i]-=1;	
		sum+=a[i];
	}
	sum+=a[j-1];
	printf("%d\n",sum);
	return 0;
}