#include <stdio.h>

int T;

int main(void){
	int p,m,f,c;
	int a = 0, b = 0;
	int ac = 0,bc = 0;
	scanf("%d",&T);
	while (T--){
		scanf("%d %d %d %d",&p,&m,&f,&c);
 		a = m/p;
 		b = a;
 		ac = (m/p)*c;
 		bc = ac;
  		while (ac>=f){
 			ac -= f;
 			ac += c;
 			a ++;
 		}
 		while (bc>=f){
 			bc -= f;
 			b ++;
 		}
 		printf("%d\n",a-b);
	}
	return 0;
}