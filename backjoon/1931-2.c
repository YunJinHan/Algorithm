#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int i,n,A,B,s,count=1;
	vector<pair<int,int> > v;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d",&A,&B);
		v.push_back(make_pair(B,A));
	}
	sort(v.begin(),v.end());

	s=v[0].first;
	for (i=1;i<n;i++){
		if (v[i].second>=s){
			count++;
			s=v[i].first;
		}
	}
	printf("%d\n",count);
	return 0;
}