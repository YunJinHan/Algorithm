#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max(a,b) ((a)>(b) ? (a):(b))

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;

Node* newNode(int data) {
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}

int getHeight(Node* root) {
	return (root == NULL ? -1 : 1 + max(getHeight(root->right),getHeight(root->left)));
}

void printLevel(Node * root,int level) {
	if (root != NULL) {
		if (level == 0) {
			printf("%d ",root->data);
		}
		else {
			printLevel(root->left, level - 1);
			printLevel(root->right, level - 1);
		}
	}
}

void levelOrder(Node* root) {
	int height = getHeight(root);
	if (root != NULL) {
		for (int i = 0; i < height + 1; i ++) {
			printLevel(root, i);
		}
	}
}

Node* insert(Node* root,int data) {
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}

int main(void) {
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}