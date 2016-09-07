#include <stdio.h>

int main(void){
	int h,m,e,tim;
	scanf("%d %d",&h,&m);
	if (h==0 && m<45){
		e = 45-m;
		h = 23;
		m = 59-e+1;
	}
	else {
		tim = h*60+m;
		tim-=45;
		h = tim/60;
		m = tim - 60*h;
	}
	printf("%d %d\n",h,m);
	return 0;
}