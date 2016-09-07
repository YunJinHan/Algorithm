#include <stdio.h>

int main(void){
	int i,num[3];
	char a[3];	
	for (i=0;i<3;i++) scanf("%d",&num[i]);
	int max = ((num[0] > num[1]) ? ((num[0]>num[2]) ? num[0] : num[2]) : ((num[1]>num[2]) ? num[1] : num[2]));
	int min = ((num[0] < num[1]) ? ((num[0]<num[2]) ? num[0] : num[2]) : ((num[1]<num[2]) ? num[1] : num[2]));
	int mid = ((num[0] > num[1]) ? ((num[0]>num[2]) ? num[2] : num[0]) : ((num[1]>num[2]) ? num[2] : num[1]));
	for (i=0;i<3;i++) {
		scanf("%c",&a[i]);
		if (a[i]=='\n' || a[i]==' ') i--;
	}
	if (a[0]=='A' && a[1]=='B' && a[2]=='C'){
		printf("%d %d %d\n",min,mid,max);
	}
	else if (a[0]=='A' && a[1]=='C' && a[2]=='B'){
		printf("%d %d %d\n",min,max,mid);
	}
	else if (a[0]=='B' && a[1]=='A' && a[2]=='C'){
		printf("%d %d %d\n",mid,min,max);
	}
	else if (a[0]=='B' && a[1]=='C' && a[2]=='A'){
		printf("%d %d %d\n",mid,max,min);
	}
	else if (a[0]=='C' && a[1]=='A' && a[2]=='B'){
		printf("%d %d %d\n",max,min,mid);
	}
	else if (a[0]=='C' && a[1]=='B' && a[2]=='A'){
		printf("%d %d %d\n",max,mid,min);
	}

	return 0;
}