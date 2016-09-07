#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int cache[32002];
vector <int> v[32002];
priority_queue < int,vector<int>,greater<int> > q;
int N,M;

int main(void){
	int a,b,size,front,next,i;
	scanf("%d %d",&N,&M);
	for (i=1;i<=M;i++){
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		cache[b]++;
	}
	for (i=1;i<=N;i++){
		if (cache[i]==0){
			q.push(i);
		}
	}
	while (!q.empty()){
		front = q.top();
		q.pop();
		printf("%d ",front);
		size = v[front].size();
		for (i=0;i<size;i++){
			next = v[front][i];
			cache[next]--;
			if (cache[next]==0){
				q.push(next);
			}
		}
	}
	putchar('\n');
	return 0;
}