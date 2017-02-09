#include <stdio.h>
#include <string.h>

int a[11][11];
int check[11];
int c,count,n,m,num1,num2;

void f(void){
	int i;
	int p=-1;
	for (i=0;i<n;i++){
		if (check[i]==0){
			p=i;
			check[i]++;
			break;
		}
	}
	if (p==-1){
		count++;
		return;
	}
	for (i=0;i<n;i++){
		if (a[p][i]==1 && check[i]==0){
			check[i]++;
			f();
			check[i]--;
		}
	}
	check[p]--;
}


int main(void){
	int i,j;
	scanf("%d",&c);
	while(c--){
		scanf("%d %d",&n,&m);
		memset(a,0,sizeof(a));
		memset(check,0,sizeof(check));
		for (i=0;i<m;i++){
			scanf("%d %d",&num1,&num2);
			a[num1][num2]=1;
			a[num2][num1]=1;
		}
		count=0;
		f();
		printf("%d\n",count);
	}
	return 0;
}