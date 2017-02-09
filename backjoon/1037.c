#include <stdio.h>
#include <stdlib.h>

void sort(int *a);
void swap(int *q,int *p);

int n;

int main(void){
    int *a = (int *)malloc(sizeof(int)*50);
    int result;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",(a+i));
    }
    if (n==1){
        result = *a**a;
    }
    else if (n==2){
        result = *a**(a+1);
    }
    else {
        sort(a);
        result = *a**(a+n-1);
    }
    printf("%d\n",result);
    free(a);
    return 0;
}

void sort(int *a){
    int k;
    for (int i = 0;i<n-1;i++){
        k=i;
        for (int j=i+1;j<n;j++){
            if (*(a+k) > *(a+j)){
                k=j;
            }
        }
        swap(a+k,a+i);
    }
}

void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
