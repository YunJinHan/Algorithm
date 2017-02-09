#include <stdio.h>
 
int N;
long long M, tree[1000000];
int check(int n) {
    long long total = 0;
    for (int i = 0; i < N; i++)
        if (tree[i] > n)
            total += tree[i] - n;
    return total >= M;
}
 
int main(void) {
    long long left = 1, right = 0, mid, ans = 0;
    scanf("%d %lld", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &tree[i]);
        if (tree[i] > right)
            right = tree[i];
    }
    while (left <= right) {
        mid = (right + left) / 2;
        if (check(mid)) {
            if (ans < mid)
                ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    printf("%lld\n", ans);
    return 0;
}