#include <cstdio>

int main(void){
	int n,i,count=1,start,end;
	scanf("%d",&n);
	for (i=1;;i+=count){
		if (n<=i) {
			end = i;
			start = end - count + 1;
			break;
		}
		count++;
	}
	int t = 1;
	int b = count;
	for (int i = 0;i<n-start;i++){
		t++;
		b--;
	}
	if (count%2==0) printf("%d/%d\n",t,b);
	else printf("%d/%d\n",b,t);
	return 0;
}