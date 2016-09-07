#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

vector <pair <int,int> > v[1005];
priority_queue <pair <int,int> > q;
bool cache[1005] = {true,true,};

int main(void){
	int N,M,a,b,c,result=0;
	pair <int,int> tmp;
	scanf("%d %d",&N,&M);
	for (int i=0;i<M;i++){
		scanf("%d %d %d",&a,&b,&c);
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	for (int i=0;i<v[1].size();i++){
		q.push(make_pair(-v[1][i].second,v[1][i].first));
	}
	while (!q.empty()){
		tmp = q.top();
		q.pop();
		if (!cache[tmp.second]){
			cache[tmp.second] = true;
			result += -tmp.first;
			for (int i=0;i<v[tmp.second].size();i++){
				q.push(make_pair(-v[tmp.second][i].second,v[tmp.second][i].first));
			}
		}
	}
	printf("%d\n",result);
	return 0;
}