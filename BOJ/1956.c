#include <cstdio>
#define min(a,b) ((a)>(b)?(b):(a))
#define INF 1e9
using namespace std;

int floyd[501][501];

int main(void){
	int V,E,a,b,c,ans=INF;
	scanf("%d %d",&V,&E);
	for (int i=0;i<V;i++){
		for (int j=0;j<V;j++){
			floyd[i][j] = INF;
		}
	}
	for (int i=0;i<E;i++){
		scanf("%d %d %d",&a,&b,&c);
		floyd[a-1][b-1] = c;
	}
	for (int k=0;k<V;k++){
		for (int i=0;i<V;i++){
			for (int j=0;j<V;j++){
				if (floyd[i][j] > floyd[i][k] + floyd[k][j]){
					floyd[i][j] = floyd[i][k] + floyd[k][j];
				}
			}
		}
	}
	for (int i=0;i<V;i++){
		ans = min(ans,floyd[i][i]);
	}
	if (ans==INF){
		printf("%d\n",-1);
	} else {
		printf("%d\n",ans);
	}
	return 0;
}