#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

struct lecture
{
	int start;
	int end;
};

int compare(const void *a,const void *b){
	struct lecture *ptrA = (struct lecture*)a;
	struct lecture *ptrB = (struct lecture*)b;
	if (ptrA->end < ptrB->end) return -1;
	else if (ptrA->end > ptrB->end) return 1;
	else if(ptrA->end == ptrB->end) {
        if(ptrA->start < ptrB->start) return -1;
        else if(ptrA->start > ptrB->start) return 1;
        else{
            return 0;
        }
    }
}

int main(void){
	struct lecture a[100001];
	int i,n,A,B,s,count=1;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d",&A,&B);
		a[i].start = A;
		a[i].end = B;
	}
	qsort(a,n,sizeof(struct lecture),compare);

	s=a[0].end;
	for (i=1;i<n;i++){
		if (a[i].start >= s){
			count++;
			s=a[i].end;
		}
	}
	printf("%d\n",count);
	return 0;
}