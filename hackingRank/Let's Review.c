#include <stdio.h>
#include <string.h>

int main(void) {

	int n,len;
	scanf("%d",&n);
	char word[n][10004];
	for (int i = 0; i < n; i ++) {
		scanf("%s",word[i]);
	}
	for (int i = 0; i < n; i ++) {
		len = strlen(word[i]);
		for (int j = 0; j < len; j ++) {
			if (!(j%2)) {
				printf("%c",word[i][j]);
			}
		}
		putchar(' ');
		for (int j = 0; j < len; j ++) {
			if ((j%2)) {
				printf("%c",word[i][j]);
			}
		}
		putchar('\n');
	}

	return 0;
}