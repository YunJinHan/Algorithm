#include <stdio.h>
#include <stdlib.h>

int main(void){
	char *a = (char *)malloc(sizeof(char)*1000004);
	char *b = a;
	int i = 0;
	int count[26] = {0};
	scanf("%s",a);
	while(*b){
		if (*b>='a' && *b<='z'){
			*b-=32;
		}
		b++;
	}
	while(*a){
		count[(*a)-65]++;
		a++;
	}
	int max = 0;
	int max_index = -1;
	int same = 0;
	for (i=0;i<26;i++){
		if (count[i]>max){
			max = count[i];
			max_index = i;
			same = 0;
		}
		else if (count[i] == max){
			same = 1;
		}
	}
	if (same){
		printf("?\n");
	}
	else {
		printf("%c\n",max_index+65);
	}
	return 0;
}