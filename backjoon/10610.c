#include <stdio.h>
#include <string.h>
#include <functional>
#include <algorithm>
using namespace std;

int main(void){
	char num[100004];
	int i,j=0,zero=0,sum=0;
	scanf("%s",num);
	for (i=0;i<strlen(num);i++){
		if (num[i]=='0') zero=1;
		else {
			sum+=num[i];
		}
	}
	if (zero && sum%3==0){
		sort(num,num+strlen(num),greater<int>());
		printf("%s\n",num);
	}
	else {
		printf("%d\n",-1);
	}
	return 0;
}