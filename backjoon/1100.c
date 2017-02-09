#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a=1,i,total=0,k=1;
	char chess[10];
	while (k!=9){
		for (i=1;i<=8;i++){
			a=1;
			scanf("%c",&chess[i]);
			if (chess[i]=='\n'){
				i--;
				a=0;
			}
			if (a && k%2==1 && i%2==1 && chess[i]=='F'){
				total++;
			}
			else if (a && k%2==0 && i%2==0 && chess[i]=='F'){
				total++;
			}
		}
		k++;
	}
	printf("%d\n",total);
	return 0;
}