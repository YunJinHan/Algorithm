#include <stdio.h>
unsigned int queue[10000];
char mem[6];
int output = 0, input = 0;


int main() {
	int N,a,temp;
	scanf("%d", &N);
	for (a = 0; a < N; a++) {
		scanf("%s", mem);
		switch (mem[1]) {
			case 'u' :
				scanf("%d", &temp);
				queue[input++] = temp;
				break;
			case 'o' :
				if (input - output == 0)
					printf("-1\n");
				else
					printf("%d\n", queue[output++]);
				break;
			case 'i' : 
					printf("%d\n",input - output);
				break;
			case 'm' :
				if (input - output == 0)
					printf("1\n");
				else
					printf("0\n");
				break;
			case 'r' :
				if (input - output == 0)
					printf("-1\n");
				else 
					printf("%d\n", queue[output]);				
				break;
			case 'a' :
				if (input - output == 0)
					printf("-1\n");
				else
					printf("%d\n",queue[input - 1]);
				break;
		}
	}
	return 0;
}