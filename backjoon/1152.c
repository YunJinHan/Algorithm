#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int word_cnt(char *s);

int main(void){
	int num;
	char *s = (char *)malloc(sizeof(char)*1000004);
	gets(s);
	num = word_cnt(s);
	printf("%d\n",num);
	free(s);
	return 0;
}

int word_cnt(char *s){
	int cnt = 0;
	while(*s!='\0'){
		while(isspace(*s)){
			s++;
		}
		if (*s != '\0'){
			cnt++;
			while (!isspace(*s) && *s !='\0'){
				s++;
			}
		}
	}
	return cnt;
}