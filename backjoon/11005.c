#include <cstdio>
using namespace std;

char result[31];
unsigned long long n;
int b,t,len;

int main(void){
	scanf("%lld %d",&n,&b);
	while (n>=b){
		t = n%b;
		if (t>9){
			result[len] = t + 'A' - 10;
		} else {
			result[len] = t +'0';
		}
		len++;
		n/=b;
	}
	if (n>9) {
		result[len] = n + 'A' - 10;
	} else {
		result[len] = n + '0';
	}
	len++;
	for (int i=len-1;i>=0;i--){
		printf("%c",result[i]);
	}
	putchar('\n');
	return 0;
}