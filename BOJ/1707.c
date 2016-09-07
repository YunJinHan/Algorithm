#include <stdio.h>
#include <vector>
using namespace std;

vector<int> a[20001];
int check[20001],V,E,ans = 1;
 
void init() {
    for (int i = 0; i <= V; i++) {
        check[i] = 0; 
        a[i].clear();
    }
    ans = 1;
}

void dfs(int node, int c) {
    check[node] = c;
    for (int i = 0; i < a[node].size(); i++) {
        int next = a[node][i];
        if (check[next] == 0) {
            dfs(next, 3 - c);
        }
    }
}

int main() {
    int T, i,next;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &V, &E);
        for (i = 0; i < E; i++) {
            int u, v;
            scanf("%d %d", &u, &v);
            a[u].push_back(v); 
            a[v].push_back(u);
        }
        for (i = 1; i <= V; i++) {
            if (check[i] == 0) {
                dfs(i, 1);
            }
        }
        for (i = 1; i <= V; i++) {
            for (int j = 0; j < a[i].size(); j++) {
                next = a[i][j];
                if (check[i] == check[next]) {
                    ans = 0;
                }
            }
        }
        if (ans == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        init();
    }
}