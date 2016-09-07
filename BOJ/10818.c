#include <stdio.h>

int main(void){
    int num[1000000]={0};
    int i,count,max=0,min;
    scanf("%d",&count);
    for (i=0;i<count;i++){
        scanf("%d",&num[i]);
    }
    min = num[0];
    for (i=0;i<count;i++){
        if (num[i]>max){
            max=num[i];
        }
        if (num[i] < min){
            min=num[i];
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}
