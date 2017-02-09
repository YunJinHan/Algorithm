#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **p,char **q);
void sort(char *a);

int size;

int main(void){
	int i,j=0,count;
	scanf("%d",&count);
	while (count--){
		char *a = (char *)malloc(sizeof(char)*104);
		char *k = a;
		scanf("%s",a);
		char *b[50];
		char *c[50];
		for (i=0;i<50;i++){
			*(b+i) = (char *)malloc(sizeof(char)*104);
			*(c+i) = (char *)malloc(sizeof(char)*104);
		}
		scanf("%d",&size);
		for (i=0;i<size;i++){
			scanf("%s",*(b+i));
			char *d = *(b+i);
			int judge = 1;

			

			if (judge){
				*(c+j)=*(b+i);
				j++;
			}
		}

		// sort 후 출력 //

		j=0;
		free(a);
		for (i=0;i<50;i++){
			free(b+i);
			free(c+i);
		}
	}
	return 0;
}

void sort(char *a){
	int i,j,k;
	for (i=0;i<size-1;i++){
		k=i;
		for (j=i+1;j<size;j++){
			if (strcmp(a+k,a+j)>0){
				k=j;
			}
		}
		swap((a+k),(a+i));
	}
}


void swap(char **p,char **q){
	char *temp = *p;
	*p = *q;
	*q = temp;
}