#include <stdio.h>

int count = 0;
int E;
int S;
int M;

void day(int e,int s,int m){
	if (e>15) e=1;
	if (s>28) s=1;
	if (m>19) m=1;
	count++;
	if (e==E && s==S && m==M){
		printf("%d\n",count);
		return ;
	}
	day(++e,++s,++m);
}


int main(void){
	scanf("%d %d %d",&E,&S,&M);
	day(1,1,1);
	return 0;
}