#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *a = (char *)malloc(sizeof(char)*104);
	char *b = a;
	scanf("%s",a);
	while(*a){
		if (*a>='A' && *a<='Z'){
			*a+=32;
		}
		else {
			*a-=32;
		}
		a++;
	}
	while(*b){
		printf("%c",*b);
		b++;
	}
	putchar('\n');
	return 0;
}