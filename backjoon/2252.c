#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int cnt[32005];
vector <int> v[32005];
queue <int> q;
int main(){
	int n, m;
	int i, j, k;
	int f, s;
	int c = 0;
	scanf("%d %d",&n,&m);
	for(i = 1 ; i <= m ; i ++){
		scanf("%d %d",&f,&s);
		v[f].push_back(s);
		cnt[s] ++;
	}
	for(c = 1 ; c <= n ;){
		for(i = 1 ; i <= n ; i ++){
			if(cnt[i] == 0){
				q.push(i);
				c ++;
				cnt[i] --;
				for(j = 0 ; j < v[i].size() ; j ++){
					cnt[v[i][j]] --;
				}
			}
		}
	}

	for( i = 1 ; i <= n ; i ++){
		printf("%d ",q.front());
		q.pop();
	}
	return 0;
}