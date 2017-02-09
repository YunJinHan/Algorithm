#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *a = (char *)malloc(sizeof(char)*104);
	char *k = a;
	int dp[100]={0};
	scanf("%s",a);
	int i=0,j;
	while(*k){
		if (*(a+i) == '-'){
			dp[i]++;
		}	
		i++;
		k++;
	}
	printf("%c",*(a));
	for (j=0;j<i;j++){
		if (dp[j]!=0){
			printf("%c",*(a+j+1));
		}
	}
	putchar('\n');
	return 0;
}