#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strrev(char *a){
	int len = strlen(a);
	char tmp;
	for (int i=0;i<len/2;i++){
		tmp = *(a+i);
		*(a+i) = *(a+len-i-1);
		*(a+len-i-1) = tmp;
	}
}

int main(void){
	int size = 0;
	char *n1 = (char *)malloc(sizeof(char)*4);
	char *n2 = (char *)malloc(sizeof(char)*4);
	char *result = (char *)malloc(sizeof(char)*4);
	scanf("%s %s",n1,n2);
	strrev(n1);
	strrev(n2);
	int one = atoi(n1) + atoi(n2);
	int tw = one;
	while (one>0){
		one/=10;
		size++;
	}
	for (int i=1;i<=size;i++){
		*(result+i-1) = tw%10 + 48;
		tw /= 10;
	}
	printf("%d\n",atoi(result));
	return 0;
}