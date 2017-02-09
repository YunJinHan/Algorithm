#include <stdio.h>
#include <vector>
#include <queue>
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;
 
int tim[10002];
int cache[10002];
int dp[10002];
vector <int> v[10002];
queue <int> q;
int N;
 
int main(void){
    int prev,cnt,pres,next,size,ans=0;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        scanf("%d %d",&tim[i],&cnt);
        for (int j=0;j<cnt;j++){
            scanf("%d",&prev);
            v[prev].push_back(i);
            cache[i]++;
        }
    }
    for (int i=1;i<=N;i++){
        if (cache[i]==0){
            dp[i] = tim[i];
            q.push(i);
        }
    }
    for (int k=0; k<N; k++) {
        int x = q.front();
        q.pop();
        for (int i=0; i<v[x].size(); i++) {
            int y = v[x][i];
            cache[y] -= 1;
            if (dp[y] < dp[x]+tim[y]) {
                dp[y] = dp[x]+tim[y];
            }
            if (cache[y] == 0) {
                q.push(y);
            }
        }
    }
 
    for (int i=1;i<=N;i++){
        ans = max(ans,dp[i]);
    }
    printf("%d\n",ans);
    return 0;
}