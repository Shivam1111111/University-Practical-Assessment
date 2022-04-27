#include<stdio.h>
#include<stdlib.h>

struct Node{
    char data;
    struct Node *left;
    struct Node *right;
};


// void insert(struct Node *root , char data){
//     struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;
//     struct Node* parent = root;
//     if(root == NULL){
//     root = temp;
//     }
//     else{
//         struct Node* p  = root;
//         while(p){                // here p gives p->next so it gives some value so it gives '1' but when p become NULL the while loop break;
//             parent = p;          // parent value update ultill NULL so at last parent value will be prior to NULL(p)
//             if(temp->data > p->data){
//                 p = p->right;
//             }
//             else if(temp->data < p->data){
//                 p = p->left;
//             }
//         }
//         if(temp->data > parent->data){
//             parent->right = temp;
//         }
//         else 
//             parent->left = temp;
//     }
// }

struct Node* newNode(char data){
    struct Node *temp = (struct node*)malloc(sizeof(struct Node));

    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void insert(struct Node *root,char data){
    if(root == NULL){
        newNode(data);
    }
    else if(data > root->data){
        root->right = insert(root,'B'); 
    }
}

void preorder(struct Node *temp){
    if(temp != NULL){
        printf(" %c",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}


int main(){
    struct Node *root = (struct Node*) malloc(sizeof(struct Node));
    
    preorder(root);
}