#include <stdio.h>

int main(void){
	int i,n,n2,tmp,lenN = 0;
	scanf("%d",&n);
	n2 = n;
	while (n2>0){
		n2/=10;
		lenN++;
	}
	n2 = n - lenN*9;
	for (i = n2 ; i<=n ; i++){
		tmp = i;
		for (n2 = i;n2;n2/=10){
			tmp += n2%10;
		}
		if (tmp==n) break;
	}
	if (tmp==n){
		printf("%d\n",i);
	}
	else {
		printf("%d\n",0);
	}

	return 0;
}