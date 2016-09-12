#include <stdio.h>

int main(void){
	int i,k,n,cnt,score[1001];
	double avg;
	scanf("%d",&k);
	while (k--){
		cnt=0,avg=0;
		scanf("%d",&n);
		for (i=0;i<n;i++){
			scanf("%d",&score[i]);
			avg += score[i];
		}
		avg /= n;
		for (i=0;i<n;i++){
			if (score[i] > avg) cnt++;
		}
		printf("%.3f",float(cnt)/n*100);
		putchar('%');
		putchar('\n');
	}
	return 0;
}