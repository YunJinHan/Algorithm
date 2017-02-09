#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
	int num[8] = {0};
	int num2[8] = {0};
	int num3[8] = {0};
	int i,j,k=0,sum=0;
	for (i=0;i<8;i++){
		scanf("%d",&num[i]);
		num2[i]=num[i];
	}
	sort(num,num+8);
	for (i=7;i>=3;i--){
		sum+=num[i];
		for (j=0;j<8;j++){
			if (num[i]==num2[j]){
				num3[k]=j;
				k++;
			}
		}
	}
	printf("%d\n",sum);
	sort(num3,num3+8);
	for (i=0;i<8;i++){
		if (num3[i]!=0){
			printf("%d ",num3[i]+1);
		}
	}
	putchar('\n');
	return 0;
}