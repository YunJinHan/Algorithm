#include <cstdio>
using namespace std;

char n[31];
int b;
unsigned long long result;

int main(void){
	scanf("%s %d",n,&b);
	for (int i=0;n[i];i++){
		result = result*b + (n[i]>='A'?n[i]-'A'+10:n[i]-'0');
	}
	printf("%lld\n",result);
	return 0;
}