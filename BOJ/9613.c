#include <stdio.h>

int num[101];
int T;

int gcd(int a,int b){
	return b ? gcd(b,a%b):a;
}

int main(void){
	int n,sum;
	scanf("%d",&T);
	while (T--){
		scanf("%d",&n);
		sum = 0;
		for (int i=0;i<n;i++) scanf("%d",&num[i]);
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				sum += gcd(num[i],num[j]);
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}