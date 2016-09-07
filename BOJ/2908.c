#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *str){
	int len = strlen(str);
	char tmp;
	for (int i=0;i<len/2;i++){
		tmp = *(str+i);
		*(str+i) = *(str+len-i-1);
		*(str+len-i-1) = tmp;
	}
}

int main(void){
	char *frist = (char *)malloc(sizeof(char)*100);
	char *second = (char *)malloc(sizeof(char)*100);
	scanf("%s %s",frist,second);
	reverse(frist);
	reverse(second);
	int fristInt = atoi(frist);
	int secondInt = atoi(second);
	if (fristInt>secondInt){
		printf("%d\n",fristInt);
	}
	else {
		printf("%d\n",secondInt);
	}

	return 0;
}