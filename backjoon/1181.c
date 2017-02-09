#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *a[]);
void swap(char **p,char **q);

int count;
int i,j,k;

int main(void){
	char *a[20000];
	scanf("%d",&count);
	for (i=0;i<count;i++){
		*(a+i) = (char *)malloc(sizeof(char)*54);
		scanf("%s",a[i]);
	}
	sort(a);

	for (i=0;i<count;i++){
		if (i && strcmp(a[i],a[i-1])==0){
			continue;
		}
		else {
			printf("%s\n",a[i]);
		}
	}

	return 0;
}

void sort(char *a[]){
	for (i=0;i<count-1;i++){
		k=i;
		for (j=i+1;j<count;j++){
			if (strlen(a[k]) > strlen(a[j])){
				k=j;
			}
			else if (strlen(a[k]) == strlen(a[j])){
				if (strcmp(a[k],a[j])>0){
					k=j;
				}
			}
		}
		swap(&a[k],&a[i]);
	}
}

void swap(char **p,char **q){
	char *temp;
	temp = *p;
	*p = *q;
	*q = temp;
}