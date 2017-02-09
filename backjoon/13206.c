#include <stdio.h>
#define mod 1000000007

long long gcd(long long x,long long y){
	if (y==0) return x;
	else return gcd(y,x%y);
}

long long lcm(long long x,long long y,long long tmp){
	return ((x*y)%mod)/tmp;
}

long long cache[1000001];

int main(void){
	int t,cnt;
	long long tmp,tmp2;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&cnt);		
		for (int i=0;i<cnt;i++){
			scanf("%lld",&cache[i]);
		}
		for (int i=0;i<cnt-1;i++){
			tmp = gcd(cache[i],cache[i+1]);
			tmp2 = lcm(cache[i],cache[i+1],tmp);
			cache[i] = tmp%mod;
			cache[i+1] = tmp2%mod;
		}
		printf("%lld\n",cache[cnt-1]);
	}
	return 0;
}