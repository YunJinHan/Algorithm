#include <stdio.h>

int main(void){
  int num,a,b,count = 0;
  scanf("%d",&num);    
  int c = num;
  while(1){
        a = num/10;         
        b = num%10;  
        num = b*10 + (a+b) % 10;
        count++;
        if (c == num){
       		printf("%d\n",count);
     	  	break;
      	}
  }
  return 0;
}