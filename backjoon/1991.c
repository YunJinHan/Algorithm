#include <stdio.h>

char tree[26][3];
int count;

void preorder(int a);
void inorder(int a);
void postorder(int a);

int main(void){
	char t,space;
	int i,j;
	scanf("%d",&count);
	scanf("%c",&space);
	for (i=0;i<count;i++){
		scanf("%c",&t);
		tree[t-65][0] = 48;
		scanf("%c",&space);
		scanf("%c",&tree[t-65][1]);
		scanf("%c",&space);
		scanf("%c",&tree[t-65][2]);
		scanf("%c",&space);
	}
	preorder(0);
	putchar('\n');
	inorder(0);
	putchar('\n');
	postorder(0);
	putchar('\n');
	return 0;
}

void preorder(int a){
	if (tree[a][0] == 48){
		printf("%c",a+65);
		if (tree[a][1]-65 != '.') preorder(tree[a][1]-65);
		if (tree[a][2]-65 != '.') preorder(tree[a][2]-65);
	}
}

void inorder(int a){
	if (tree[a][0] == 48){
		if (tree[a][1]-65 != '.') inorder(tree[a][1]-65);
		printf("%c",a+65);
		if (tree[a][2]-65 != '.') inorder(tree[a][2]-65);
	}
}

void postorder(int a){
	if (tree[a][0] == 48){
		if (tree[a][1]-65 != '.') postorder(tree[a][1]-65);
		if (tree[a][2]-65 != '.') postorder(tree[a][2]-65);
		printf("%c",a+65);
	}
}