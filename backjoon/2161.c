#include <cstdio>
#include <queue>
using namespace std;

queue <int> q;

int main(void){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) q.push(i);
	while (!q.empty()){
		printf("%d ",q.front());
		q.pop();
		int a = q.front();
		q.pop();
		q.push(a);
	}
	putchar('\n');
	return 0;
}