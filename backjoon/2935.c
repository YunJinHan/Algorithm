#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char a[104];
	char b[104];
	char c;
	int size_a,size_b,i;
	size_a = strlen(gets(a));
	gets(&c);
	size_b = strlen(gets(b));
	if(c=='*'){
		for(i=0;i<size_a+size_b-1;i++){
			putchar(48+!i);
		}
	}
 	else if (c=='+') {
 		for(i=0;i<size_a||i<size_b;i++){
 			putchar(48+!i+(i==abs(size_a - size_b)));
 		}
 	}
 	putchar('\n');
	return 0;
}