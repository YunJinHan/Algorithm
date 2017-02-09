#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	int n;
	int number[8] = {1,2,3,4,5,6,7,8};
	scanf("%d",&n);
	do {
		for (int i=0;i<n;i++){
			printf("%d ",number[i]);
		}
		putchar('\n');
	} while (next_permutation(number,number+n));
	
	return 0;
}