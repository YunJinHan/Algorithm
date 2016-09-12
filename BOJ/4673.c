#include <stdio.h>

int num[10001];

void self(int k){
	int result = k;
	int tmp = k;
	while (tmp){
		result += tmp%10;
		tmp /= 10;
	}
	if (result<=10000){
		num[result] = 0;
		self(result);
	}
}

int main(void){
	for (int i=1;i<=10000;i++){
		num[i] = i;
	}
	for (int i=1;i<=10000;i++){
		if (num[i]!=0){
			self(num[i]);
		}
	}
	for (int i=1;i<=10000;i++){
		if (num[i]!=0){
			printf("%d\n",num[i]);
		}
	}
	return 0;
}