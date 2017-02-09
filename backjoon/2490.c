#include <stdio.h>

int main(void){
	int cnt,w=0;
	for (int i=0;i<3;i++){
		for (int j=0;j<4;j++){
			scanf("%d",&cnt);
			if (cnt==1) w++;
		}
		printf("%c\n",w==2 ? 'B' : (w==3 ? 'A' : (w==4 ? 'E' : (w==1 ? 'C' : 'D'))));
		w=0;
	}
	return 0;
}