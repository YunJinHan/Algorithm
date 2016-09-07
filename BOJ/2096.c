#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int colmax[3],colmin[3],tmpmax[3],tmpmin[3];

int main(void){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=0;j<3;j++){
			scanf("%d",&tmpmax[j]);
			tmpmin[j] = tmpmax[j];
			tmpmax[j] += max(colmax[1],(j==1)?max(colmax[0],colmax[2]):colmax[j]);
			tmpmin[j] += min(colmin[1],(j==1)?min(colmin[0],colmin[2]):colmin[j]);
		}
		memcpy(colmax,tmpmax,sizeof(int)*3);
		memcpy(colmin,tmpmin,sizeof(int)*3);
	}
	sort(colmax,colmax+3);
	sort(colmin,colmin+3);
	printf("%d %d\n",colmax[2],colmin[0]);
	return 0;
}