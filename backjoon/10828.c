#include <stdio.h>
#include <stdlib.h>

int size;
char order[10];

typedef struct node{
	int data;
	struct node *next;
}N;

N *first = NULL;
N *rear = NULL;

void push(int data){
	N *newnode = (N *)malloc(sizeof(N));
	newnode -> data = data;
	newnode -> next = NULL;
	if (first==NULL){
		first = newnode;
		rear = newnode;
		first -> next = rear;
	} else {
		newnode -> next = first;
		first = newnode;
	}
	size++;
}

void pop(void){
	if (first==NULL){
		printf("%d\n",-1);
	} else if (first==rear){
		printf("%d\n",first->data);
		first = NULL;
		rear = NULL;
		size--;
	} else {
		N *del = first;
		first = first -> next;
		printf("%d\n",del->data);
		free(del);
		size--;
	}
}

int main(void){
	int n,num;
	scanf("%d",&n);
	while (n--){
		scanf("%s",order);
		if (order[0]=='p'){
			if (order[1]=='u'){
				scanf("%d",&num);
				push(num);
			} else if (order[1]=='o'){
				pop();
			}
		} else if (order[0]=='s'){
			printf("%d\n",size);
		} else if (order[0]=='e'){
			printf("%d\n",(size==0)?1:0);
		} else if (order[0]=='t'){
			printf("%d\n",(first==NULL)?-1:first->data);
		}
	}
	return 0;
}