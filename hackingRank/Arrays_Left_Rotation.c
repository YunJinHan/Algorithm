#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k; 
    scanf("%d %d",&n,&k);
    int *a = (int *)malloc(sizeof(int) * n);
    int *b = (int *)malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for (int i = 0; i < n; i ++) {
        int tmp = (i < k) ? (n + (i - k)) : (i - k);
        b[tmp] = a[i];
    }
    for (int i = 0; i < n; i ++) {
        printf("%d ",b[i]);
    }
    return 0;
}
