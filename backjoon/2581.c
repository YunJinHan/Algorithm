#include <stdio.h>
#include <math.h>
using namespace std;
 
bool check(int n){
    int n2 = (int)sqrt((double)n);
    if (n<2) return false;
    for(int i=2; i<n2+1; i++){
    	if(n%i==0) return false;
    }
    return true;
}
 
int main(void){
    int M,N,sum=0,min;
    scanf("%d%d", &M,&N);
    min = N+1;
    for(int i=M; i<N+1; i++){
        if(check(i)){
            sum+= i;
            if(i < min) min = i;
        }
    }
    if(min==N+1) printf("%d\n", -1);
    else printf("%d\n%d\n",sum, min);
    return 0;
}