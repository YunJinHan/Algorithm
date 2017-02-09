#include <cstdio>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int n;
	scanf("%d",&n);
	vector <pair <int,int> > v(n);
	for (int i=0;i<n;i++){
		scanf("%d %d",&v[i].first,&v[i].second);
	}
	sort(v.begin(),v.end());
	for (int i=0;i<n;i++){
		printf("%d %d\n",v[i].first,v[i].second);
	}
	return 0;
}