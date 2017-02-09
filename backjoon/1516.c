#include <stdio.h>
#include <queue>
#include <vector>
#define max(a,b) ((a)>(b) ? (a):(b))
using namespace std;

int N;
int tim[502];
int cache[502];
int dp[502];
queue <int> q;
vector <int> v[502];


int main(void){
	int prev,top,size,next;
	scanf("%d",&N);
	for (int i=1;i<=N;i++){
		scanf("%d",&tim[i]);
		while (scanf("%d",&prev)){
			if (prev == -1){
				break;
			}
			cache[i]++;
			v[prev].push_back(i);
		}
		if (cache[i]==0){
			dp[i] = tim[i];
			q.push(i);
		}
	}
	for (int i=1;i<=N;i++){
		top = q.front();
		q.pop();
		size = v[top].size();
		for (int j=0;j<size;j++){
			next = v[top][j];
			cache[next]--;
			dp[next] = max(dp[next],dp[top]+tim[next]);
			if (cache[next]==0){
				q.push(next);
			}
		}
	}
	for (int i=1;i<=N;i++){
		printf("%d\n",dp[i]);
	}
	return 0;
}