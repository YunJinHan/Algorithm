#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b));

char word1[1002];
char word2[1002];
int cache[1002][1002];

int main(void){
	scanf("%s %s",word1,word2);
	int size1 = strlen(word1);
	int size2 = strlen(word2);

	for (int i=0;i<size1;i++){
		for (int j=0;j<size2;j++){
			if (word1[i] == word2[j]){
				cache[i+1][j+1] = cache[i][j] + 1;
			} else {
				cache[i+1][j+1] = max(cache[i][j+1],cache[i+1][j]);
			}
		}
	}

	printf("%d\n",cache[size1][size2]);
	return 0;
}