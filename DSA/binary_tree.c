#include<stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node * root = NULL;  

void insert(int data){
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    struct Node* parent = root;
    if(root == NULL){
    root = temp;
    }
    else{
        struct Node* p  = root;
        while(p){                // here p gives p->next so it gives some value so it gives '1' but when p become NULL the while loop break;
            parent = p;          // parent value update ultill NULL so at last parent value will be prior to NULL(p)
            if(temp->data > p->data){
                p = p->right;
            }
            else if(temp->data < p->data){
                p = p->left;
            }
        }
        if(temp->data > parent->data){
            parent->right = temp;
        }
        else 
            parent->left = temp;
    }
}

int main(){

    return 0;
}