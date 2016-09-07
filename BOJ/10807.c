#include <stdio.h>

int num[100]={0,};
int count;

int main(void){
	int i,a,total=0;
	scanf("%d",&count);
	for (i=0;i<count;i++) scanf("%d",&num[i]);
	scanf("%d",&a);
	for (i=0;i<count;i++){
		if (num[i]==a) total++;
	}
	printf("%d\n",total);
	return 0;
}