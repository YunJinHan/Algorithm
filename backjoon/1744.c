#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void){
	int num[10001]={0,};
	int n,i,sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&num[i]);
	sort(num,num+n);
	for (i=0;i<n;i++){
		if (i<n-1 && num[i]<0 && num[i+1]<=0){
			sum+=num[i]*num[i+1];i++;
		}
		else if (num[i]<=1) sum+=num[i];
		else{
			break;
		}
	}
	for (i=n-1;i>=0;i--){
		if (i>0 && num[i]>1 && num[i-1]>1){
			sum+=num[i]*num[i-1];i--;
		}
		else if (num[i]>1) sum+=num[i];
		else {
			break;
		}
	}
	printf("%d\n",sum);
	return 0;
}