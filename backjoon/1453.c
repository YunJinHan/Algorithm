#include <stdio.h>

int main(void){
	int seat[105] = {0};
	int num,a,count=0;
	scanf("%d",&num);
	for (int i=0;i<num;i++){
		scanf("%d",&a);
		if (seat[a-1] != 0){
			count++;
		}
		else {
			seat[a-1] = 1;
		}
	}
	printf("%d\n",count);
	return 0;
}