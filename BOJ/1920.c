#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int num[100000];
int size;
int size2;

int main(void){
	int i,j,k=1,num2;
	int low,high,mid;
	scanf("%d",&size);
	for (i=0;i<size;i++) scanf("%d",&num[i]);
	sort(num,num+size);
	scanf("%d",&size2);
	for (i=0;i<size2;i++){
		scanf("%d",&num2);
		low = 0;
		high = size - 1;
		while (low <= high){
			mid = (low+high)/2;
			if (num[mid]>num2) high = mid - 1;
			else if (num[mid]<num2) low = mid + 1;
			else if (num[mid] == num2){
				printf("1\n");
				k=0;
				break;
			}

		}
		if (k) printf("0\n");
		k=1;
	}
	return 0;
}