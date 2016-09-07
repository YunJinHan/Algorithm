#include <stdio.h>

int main(void){
	int n,r,c1=0,c2=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		r = i;
		while (r%2==0 || r%5==0){
			if (r%2==0){
				r/=2;
				c1++;
			}
			if (r%5==0){
				r/=5;
				c2++;
			}
		}
	}
	printf("%d\n",(c1>c2)?c2:c1);
	return 0;
}