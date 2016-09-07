#include <cstdio>
#define min(a,b) ((a)>(b)?(b):(a))

int main(void){
	int a1,o1,a2,o2;
	scanf("%d %d %d %d",&a1,&o1,&a2,&o2);
	printf("%d\n",min((a1+o2),(a2+o1)));
	return 0;
}