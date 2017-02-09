#include <cstdio>
#include <algorithm>
using namespace std;

int cache[100001];

int main(void){
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&cache[i]);
	sort(cache,cache+n);
	printf("%d ",cache[0]);
	for (int i=1;i<n;i++){
		if (cache[i-1]!=cache[i]) printf("%d ",cache[i]);
	}
	putchar('\n');
	return 0;
}