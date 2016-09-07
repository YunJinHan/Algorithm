#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *a = (char *)malloc(sizeof(char)*104);
	int i = 0;
	scanf("%s",a);
	while(*a){
		if (i!=0 && i%10==0){
			putchar('\n');
		}
		printf("%c",*a);
		i++;
		a++;
	}
	putchar('\n');
	return 0;
}