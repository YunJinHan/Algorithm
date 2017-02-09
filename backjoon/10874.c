#include <cstdio>

int cache[10];

int main(void){
	int n,t;
	scanf("%d",&n);
	for (int j=1;j<=n;j++){
		t = 1;
		for (int i=0;i<10;i++) scanf("%d",&cache[i]);
		for (int i=0;i<10;i++){
			if (cache[i]!=(i)%5+1){
				t = 0;
				break;
			}
		}
		if (t) {
			printf("%d\n",j);
		}
	}
	return 0;
}