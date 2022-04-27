#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node* create(){
    struct Node *p;
    char x;
    printf("Enter data(n for no nod) ");
    scanf("%c",&x);
    fflush(stdin);

    if(x=='n'){
        return NULL;
    }
    
    p = (struct Node*)malloc(sizeof(struct Node));
    p->data = x;
    printf("Enter left child of %c \n", x);
    p->left = create();
    printf("Enter right child of %c \n", x);
    p->right = create();
return p;
};

void preorder(struct Node *temp){
    if(temp != NULL){
        printf(" %c",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

int main(){
    struct Node *root;
    root = create();
    preorder(root);
    return 0;
}