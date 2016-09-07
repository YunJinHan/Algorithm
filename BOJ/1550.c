#include <stdio.h>

int main(void){
	int num;
	scanf("%x",&num);
	printf("%d\n",num);
	return 0;
}

/*

#include <stdio.h>
#include <math.h>

int change(int a);

int main(void){
	char num[6];
	long long int sum = 0;
	int i,count=0;
	for (i=0;i<6;i++){
		scanf("%c",&num[i]);
		if (num[i]=='\n'){
			break;
		}
		num[i] = change(num[i]);
		count++;
	}
	for (i=0;i<count;i++){
		sum+=pow(16,count-i-1)*num[i];
	}
	printf("%lld\n",sum);
	return 0;
}

int change(int a){
	if (a=='A'){
		a=10;
	}
	else if (a=='B'){
		a=11;
	}
	else if (a=='C'){
		a=12;
	}
	else if (a=='D'){
		a=13;
	}
	else if (a=='E'){
		a=14;
	}
	else if (a=='F'){
		a=15;
	}
	else {
		a-=48;
	}
	return a;
}

*/