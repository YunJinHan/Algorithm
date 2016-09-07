#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

vector <pair <int,int> > v[10001];
priority_queue <pair <int,int> > q;
bool cache[10001] = {true,true,};

int main(void){
	int V,E,A,B,C,result=0;
	pair <int,int> tmp;
	scanf("%d %d",&V,&E);
	for (int i=0;i<E;i++){
		scanf("%d %d %d",&A,&B,&C);
		v[A].push_back(make_pair(B,C));
		v[B].push_back(make_pair(A,C));
	}
	for (int i=0;i<v[1].size();i++){
		q.push(make_pair(-v[1][i].second,v[1][i].first));
	}
	while(!q.empty()){
		tmp = q.top();
		q.pop();
		if (!cache[tmp.second]){
			cache[tmp.second]=true;
			result += -tmp.first;
			for (int i=0;i<v[tmp.second].size();i++){
				q.push(make_pair(-v[tmp.second][i].second,v[tmp.second][i].first));
			}
		}
	}
	printf("%d\n",result);
	return 0;
}