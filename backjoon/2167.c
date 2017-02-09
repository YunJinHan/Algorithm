#include <stdio.h>
 
int main(void){
    int array[300][300]={0};
    int i,j,k,n,m,count,a,b,c,d,sum=0;
    scanf("%d %d",&n,&m);
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&array[i][j]);
        }
    }
    scanf("%d",&count);
    for (i=0;i<count;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
         
        if (a==c && b==d){
            sum = array[a-1][b-1];
        }
        else if (a==c){
            if (b>d){
                for (j=d;j<=b;j++){
                    sum+=array[a-1][j-1];
                }
            }   
            else {
                for (j=b;j<=d;j++){
                    sum+=array[a-1][j-1];
                }
            }
        }
        else if (b==d){
            if (a>c){
                for (j=c;j<=a;j++){
                    sum+=array[j-1][b-1];
                }
            }   
            else {
                for (j=a;j<=c;j++){
                    sum+=array[j-1][b-1];
                }
            }
        }
        else {
            for (j=a;j<=c;j++){
                for (k=b;k<=d;k++){
                    sum+=array[j-1][k-1];
                }
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}