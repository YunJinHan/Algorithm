#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m,q,count;
    scanf("%d",&n);
   	char *word[n],tmp[1004];
   	for (int i = 0; i < n; i ++) {
   		scanf("%s",tmp);
   		word[i] = (char *)malloc(sizeof(tmp) + 1);
   		strcpy(word[i],tmp);
   	}
   	scanf("%d",&m);
   	for (int i = 0; i < m; i ++) {
   		count = 0;
   		scanf("%s",tmp);
   		for (int j = 0; j < n; j ++) {
   			if (!strcmp(tmp,word[j])) {
   				count ++;
   			}
   		}
   		printf("%d\n",count);
   	}
    return 0;
}
