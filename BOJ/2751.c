#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int size;
int num[1000000] = {0,};

int main(void){
	int i;
	scanf("%d",&size);
	for (i=0;i<size;i++) scanf("%d",&num[i]);
	sort(num,num+size);
	for (i=0;i<size;i++) printf("%d\n",num[i]);
	return 0;
}
