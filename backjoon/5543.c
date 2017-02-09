#include <stdio.h>
#define min(a,b) ((a)>(b) ? (b):(a))
int main(void){
	int re=5000000,b[3]={0,0,0},c[2]={0,0};
	for (int i=0;i<3;i++) scanf("%d",&b[i]);
	for (int i=0;i<2;i++){
		scanf("%d",&c[i]);
		for (int j=0;j<3;j++) re = min(re,b[j]+c[i]);
	}
	printf("%d\n",re-50);
	return 0;
}