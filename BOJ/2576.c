#include <stdio.h>

int main(void){
	int num[7];
	int num2[7];
	int temp,i,j,k,count=0,sum=0;
	for (i=0;i<7;i++){
		scanf("%d",&num[i]);
		if (num[i]%2==1){
			sum+=num[i];
			num2[count] = num[i];
			count++;
		}
	}
	for (i=0;i<count-1;i++){
		k=i;
		for (j=i+1;j<count;j++){
			if (num2[k] > num2[j]){
				k=j;
			}
		}
		temp = num2[k];
		num2[k] = num2[i];
		num2[i] = temp;
	}
    if (sum==0){
        printf("%d\n",-1);
    }
    else {
	    printf("%d\n%d\n",sum,num2[0]);
    }
    return 0;
}
