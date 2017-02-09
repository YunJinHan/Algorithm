#include <cstdio>
#include <cstring>
using namespace std;

int num[26];

int main(void){
	char word[101];
	scanf("%s",word);
	for (int i=0;i<strlen(word);i++) num[word[i]-97]++;
	for (int i=0;i<26;i++) printf("%d ",num[i]);
	putchar('\n');
	return 0;
}