#include <stdio.h>
#define max(a,b) ((a)>(b) ? (a) : (b))
 
int num[1004]={0,};
int dp[1004]={0,};
int count;
 
 
int main(void){
    int i,j;
    scanf("%d",&count);
    for (i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    int len = 0;
    for (i=1;i<count;i++){
        for (j=i-1;j>=0;j--){
            if (num[i] < num[j]){
                if (dp[j]==0){
                    len = 1;
                    dp[i] = max(len,dp[i]);
                }
                else {
                    len = dp[j] + 1;
                    dp[i] = max(len,dp[i]);
                }
 
            }
        }
    }
    int max=0;
    for (i=0;i<count;i++){
        if (dp[i]>=max){
            max=dp[i];
        }
    }
    printf("%d\n",max+1);
    return 0;
}