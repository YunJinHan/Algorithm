#include <stdio.h>
#include <string.h>

int n;
char name[104];

int main(void){
	char tmp;
	int start;
	scanf("%d",&n);
	scanf("%c",&tmp);
	while (n--){
		gets(name);
		int size = strlen(name);
		for (int i=0;i<size;i++){
			if (name[i]==' '){
				start = i + 1;
				break;
			}
		}
		printf("god");
		for (int i=start;i<size;i++){
			if (name[i]==' '){

			}else {
				printf("%c",name[i]);
			}
		}
		putchar('\n');
	}
	return 0;
}