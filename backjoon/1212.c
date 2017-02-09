#include <stdio.h>

char input[333334];
char ans[1000000];
int main() {
	int octa;
	char *ptr;
	int i,j;
	
	int index=0;
	int cnt;

	scanf("%s", input);
	if(input[0] == '0'){
		printf("0\n");
		return 0;
	}

	ptr = input;

	while(*ptr++) {
		int remain;
		char swap;
		cnt = 0;
		remain = *(ptr-1) - 48;
		
		while(remain){
			int tmp;
			tmp = remain % 2;
			remain /= 2;
			if(tmp==0)
				ans[index] = '0';
			else
				ans[index] = '1';
			
			index++;
			cnt++;
		}
		for(i=cnt; i<3; i++){
			ans[index++] = '0';
		}
		swap = ans[index-3];
		ans[index-3] = ans[index-1];
		ans[index-1] = swap;
		
	}

	ans[index] = '\0';
	
	for(i=0; i<index; i++) {
		if(i==0 && ans[i]=='0')
			continue;
		if(ans[0]=='0' && i==1 && ans[i]=='0')
			continue;
			printf("%c",ans[i]);
	}
	printf("\n");

  return 0;
}