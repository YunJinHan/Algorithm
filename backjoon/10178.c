#include <cstdio>

int main(void){
	int n;
	scanf("%d",&n);
	while (n--){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n",a/b,a%b);
	}
	return 0;
}