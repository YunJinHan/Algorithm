#include <stdio.h>

int preorder[1002];
int inorder[1002];
int T,N,a=1;

void post(int start,int end,int k){
	int temp = start;
	for (;start<end;start++){
		if (inorder[start]==preorder[k]){
			post(temp,start,k+1);
			post(start+1,end,k+start-temp+1);
			printf("%d ",preorder[k]);
			return ;
		}
	}
}

int main(void){
	int i;
	scanf("%d",&T);
	while (T--){
		scanf("%d",&N);
		for (i=0;i<N;i++) scanf("%d",&preorder[i]);
		for (i=0;i<N;i++) scanf("%d",&inorder[i]);
		post(0,N,0);
		putchar('\n');
	}
	return 0;
}