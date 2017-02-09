#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
    int i,N,C,low,high,mid,count,now;
    int a[200001];
    scanf("%d%d",&N,&C);
    for(i=0;i<N;i++) scanf("%d",&a[i]);
    sort(a,a+N);

    low = 1;
    high = a[N-1];

    while(low<=high){

        mid = (low + high)/2;
        count=1;
        now = a[0];

        for(i=1;i<N;i++){
            if((a[i] - now) >= mid){
                now = a[i];
                count++;
            }
        }
        if(count >= C){
            low = mid + 1;
        }
        else if (C > count){
            high = mid - 1;
        }
    }
    printf("%d\n",high);
    return 0;
}