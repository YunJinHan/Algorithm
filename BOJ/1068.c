#include <stdio.h>

int tree[51][4]= {0,};
int count;

void remove_node(int a);

int main(void){
	int i,j,num,del,sum=0;
	scanf("%d",&count);
	for (i=0;i<count;i++) {
		for (j=1;j<=2;j++) tree[i][j] = -1;
	}
	for (i=0;i<count;i++){
		tree[i][0] = 1;
		scanf("%d",&num);
		tree[i][3]=num;
		if (num != -1){
			if (tree[num][1] == -1) tree[num][1] = i;
			else {
				tree[num][2] = i;
			}
		}
	}
	scanf("%d",&del);
	remove_node(del);
	for (i=0;i<count;i++){
		if (tree[i][0] != 0){
			if (tree[i][1] == -1 && tree[i][2] == -1) sum++;
			else if (tree[tree[i][1]][0] == 0 && tree[i][2] == -1) sum++;
			else if (tree[tree[i][1]][0] == 0 && tree[tree[i][2]][0] == -1) sum++;
		}
	}
	if (tree[del][3] == -1) sum = 0;
	printf("%d\n",sum);
	return 0;
}

void remove_node(int a){
	tree[a][0] = 0;
	if (tree[a][1] != -1) remove_node(tree[a][1]);
	if (tree[a][2] != -1) remove_node(tree[a][2]);
}