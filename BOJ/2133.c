#include <stdio.h>
 
int main(void){
    int d[31] = {0};
    int num;
    scanf("%d",&num);
    if (num%2==0){
        d[0] = 1;
        d[2] = 3;
        if (num==2){
            printf("%d\n",d[2]);
        }
        else {
            for(int i=4;i<=num;i+=2){
                d[i]=3*d[i-2];
                for(int j=4;j<=i;j+=2){
                  d[i]+=2*d[i-j];
                }
            }
            printf("%d\n",d[num]);  
        }
    }
    else {
        printf("%d\n",0);
    }
    return 0;
}