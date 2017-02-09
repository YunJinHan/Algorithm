#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
	int i,n,sum=0,men[1004]={0,};
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&men[i]);
	sort(men,men+n);
	for (i=0;i<n;i++) sum+=(n-i)*men[i];
	printf("%d\n",sum);
	return 0;
}