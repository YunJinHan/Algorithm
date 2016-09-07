#include <stdio.h>

int main(void){
	int a,b,temp,count;
	scanf("%d",&count);
	while(count--){
		if (scanf("%d %d",&a,&b)==2){
			temp = a;
			for (int i=0;i<b-1;i++){
				a = (temp*a)%10;
			}
			if (a==0){
				printf("%d\n",10);
			}
			else {
				printf("%d\n",a);
			}
		}
	}
	return 0;
}