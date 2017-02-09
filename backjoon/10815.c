#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;
 
long long int num[500000] = {0,};
int coun;
int coun2;

int main(void){
    int i,j,k=1;
    int low,high,mid;
    long long int num2;
    scanf("%d",&coun);
    for (i=0;i<coun;i++){
        scanf("%lld",&num[i]);
    }
    sort(num,num+coun);
    scanf("%d",&coun2);

    for (i=0;i<coun2;i++){
        scanf("%lld",&num2);
        low = 0;
        high = coun - 1;

        while (low <= high){
            mid = (low+high) / 2;
            if (num[mid]>num2){
                high = mid - 1;
            }
            else if (num[mid]<num2){
                low = mid + 1;
            }
            else if (num[mid] == num2){
                printf("1 ");
                k=0;
                break;
            }
        }
        if (k){
            printf("0 ");
        }
        k=1;
    }
    putchar('\n');
    return 0;
}
