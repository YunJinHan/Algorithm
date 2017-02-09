#include <stdio.h>
#include <string.h>

int k,cnt;
char word[24];

int main(void){
	scanf("%d",&k);
	while (k--){
		scanf("%d",&cnt);
		scanf("%s",word);
		for (int i=0;i<strlen(word);i++){
			for (int j=0;j<cnt;j++){
				printf("%c",word[i]);
			}
		}
		putchar('\n');
		word[0] = '\0';
	}
	return 0;
}