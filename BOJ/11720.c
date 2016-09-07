#include <stdio.h>

int main(void){
	char a[101];
	int i,num,sum=0;
	scanf("%d",&num);
	for (i=0;i<num;i++){
		scanf("%c",&a[i]);
		if (a[i]=='\n' || a[i] == ' '){
			i--;
		}
		else {
			sum+=a[i]-48;
		}
	}
	printf("%d\n",sum);
	return 0;
}