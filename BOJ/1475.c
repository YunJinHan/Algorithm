#include <stdio.h>
#include <string.h>
#define max(a,b) ((a)>(b)?(a):(b))

char cache[7];
int num[10];

int main(void){
	scanf("%s",cache);
	int size = strlen(cache);
	for (int i=0;i<size;i++){
		if (cache[i]=='6' || cache[i]=='9'){
			num[6]++;
		} else {
			num[cache[i]-48]++;
		}
	}
	if (num[6]%2==0){
		num[6]/=2;
	} else {
		num[6] = num[6]/2 + 1;
	}
	int ans = 0;
	for (int i=0;i<10;i++){
		ans = max(ans,num[i]);
	}
	printf("%d\n",ans);
	return 0;
}