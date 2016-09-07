#include <cstdio>
#include <string.h>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;

int dp[20001];
bool check[20001];
vector <pair <int,int> > v[20001];
priority_queue <pair <int,int> > q;

int main(void){
	int V,E,a,b,c,start;
	pair <int,int> tmp;
	scanf("%d %d %d",&V,&E,&start);
	for (int i=0;i<E;i++){
		scanf("%d %d %d",&a,&b,&c);
		v[a].push_back(make_pair(b,c));
	}
	for (int i=1;i<=V;i++) dp[i]=INF;
	dp[start] = 0;
	q.push(make_pair(0,start));

	while (!q.empty()){
		tmp = q.top();
		q.pop();
		if (!check[tmp.second]){
			check[tmp.second] = true;
			for (int i=0;i<v[tmp.second].size();i++){
				if (dp[v[tmp.second][i].first] > dp[tmp.second] + v[tmp.second][i].second){
					dp[v[tmp.second][i].first] = dp[tmp.second] + v[tmp.second][i].second;
					q.push(make_pair(-dp[v[tmp.second][i].first],v[tmp.second][i].first));
				}
			}
		}
	}
	for (int i=1;i<=V;i++){
		if (dp[i]==INF){
			printf("INF\n");
		}
		else {
			printf("%d\n",dp[i]);
		}
	}
	return 0;
}