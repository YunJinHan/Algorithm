#include <stdio.h>

int main(void){
	char car[9];
	int count,value1,value2,total;
	scanf("%d",&count);
	while(count--){
		scanf("%s",&car);
		value1 = (car[0]-65)*26*26+(car[1]-65)*26+(car[2]-65);
		value2 = (car[4]-48)*1000+(car[5]-48)*100+(car[6]-48)*10+(car[7]-48);
		total = value1 - value2;
		if (total<0){
			total *= -1;
		} 
		if (total>100){
			printf("not nice\n");
		}
		else {
			printf("nice\n");
		}
	}
	return 0;
}