#include <stdio.h>
#include <math.h>

int count,k=0,max,total=0,max_index;
int num[3] = {0,};

int main(void){
	scanf("%d",&count);
	while (count--){
		k++;
		max = 0;
		max_index = 0;
		for (int i=0;i<3;i++){
			scanf("%d",&num[i]);
			if (num[i]>max){
				max = num[i];
				max_index = i;
			}
		}
		max = pow(max,2);
		if (max_index==0){
			total = pow(num[1],2)+pow(num[2],2);
		}
		else if (max_index==1){
			total = pow(num[0],2)+pow(num[2],2);
		}
		else if (max_index==2){
			total = pow(num[1],2)+pow(num[0],2);
		}
		if (max==total){
			printf("Scenario #%d:\nyes\n\n",k);
		}
		else {
			printf("Scenario #%d:\nno\n\n",k);
		}

	}
	return 0;
}	