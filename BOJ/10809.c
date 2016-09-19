#include <stdio.h>
#include <string.h>

char word[104];
int cnt[26];

int main(void){
	int i,j;
	memset(cnt,-1,sizeof(cnt));
	scanf("%s",word);
	for (i=0;i<26;i++){
		for (j=0;j<strlen(word);j++){
			if (word[j]==i+97){
				cnt[i] = j;
				break;
			}
		}
	}
	for (i=0;i<26;i++){
		printf("%d ",cnt[i]);
	}
	putchar('\n');
	return 0;
}