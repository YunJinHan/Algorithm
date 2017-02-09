#include <stdio.h>
#include <string.h>

int T;
int wrong[1002];
char st[1002][82];

int main(void){
	int size;
	scanf("%d",&T);
	for (int i=1;i<=T;i++){
		scanf("%d %s",&wrong[i],st[i]);
		size = strlen(st[i]);
		for (int j=wrong[i];j<size;j++){
			st[i][j-1] = st[i][j];
		}
		st[i][size-1]=NULL;
	}
	for (int i=1;i<=T;i++){
		printf("%s\n",st[i]);
	}

	return 0;
}