#include <cstdio>
#include <vector>
using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	vector <int> v(n+1);
	v[1] = 5;
	for (int i=2;i<=n;i++){
		v[i] = v[i-1] + (i+1)*3-2;
		v[i] %= 45678;
	}
	printf("%d\n",v[n]);
	return 0;
}