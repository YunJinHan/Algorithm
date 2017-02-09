#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define max(a,b) ((a)>(b)?(a):(b))

int main(void){
    int arr[6][6];
    int ans = -100;
    for(int arr_i = 0; arr_i < 6; arr_i++){
       	for(int arr_j = 0; arr_j < 6; arr_j++){
          	scanf("%d",&arr[arr_i][arr_j]);
          	if (arr_i >= 2 && arr_j >= 2) {
          		ans = max(ans,( (arr[arr_i - 2][arr_j - 2] + arr[arr_i - 2][arr_j - 1] + arr[arr_i - 2][arr_j]) +
          			  			(arr[arr_i - 1][arr_j - 1]) +
          			  			(arr[arr_i][arr_j - 2] + arr[arr_i][arr_j - 1] + arr[arr_i][arr_j]) ));
          	}
       	}
    }
    printf("%d\n",ans);
    return 0;
}
