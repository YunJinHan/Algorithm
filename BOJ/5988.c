#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n;
	char *num = (char *)malloc(sizeof(char)*65);
	scanf("%d",&n);
	while (n--){
		scanf("%s",num);
		int size = strlen(num);
		char *a = (num+size-1);
		int EorO = (atoi(a)%2==0 ? 1:0);
		if (EorO){
			printf("even\n");
		} else {
			printf("odd\n");
		}
		num[0] = '\0';
	}
	return 0;
}