#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;
 
vector<int> v;
set<int> s;

int main(){
    int n,p,m;
    scanf("%d %d",&n,&p);
 
    while(s.count(n)==0){
        v.push_back(n);
        s.insert(n);
        m=0;
        while(n){
            m+=(int)pow(n%10, p);
            n/=10;
        }
        n=m;
    }
    for(int i=0; i<v.size(); ++i){
        if(v[i]==n){
        	printf("%d\n",i);
        	break;
        }
    }
    return 0;
}