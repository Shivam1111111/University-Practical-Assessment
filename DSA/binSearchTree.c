#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* newNode(int data){
    struct Node *node = (struct node*)malloc(sizeof(struct Node));

    node->data = data;
    node->left = node->right = NULL;
    return node;
}

void insert(struct Node* root, int data){

    if(root==NULL){
        root = newNode(data);
        return;
    }
    else if(data < root->data){
        if(root->left == NULL){
            root->left = newNode(data);
            return;
        }
        insert(root->left, data);
    }
    else if(data > root->data){
        if(root->right == NULL){
            root->right = newNode(data);
            return;
        }
        insert(root->right,data);
    }
}

void search(struct Node* root,int data){
    if(root == NULL){
        printf("No value found");
        return ;
    }
    else if(root->data == data){
        printf("\n%d is present in tree ",root->data);
        return;
    }
    else if(root->data < data){
        search(root->right,data);
        return;
    }
    else if(root->data > data){
        search(root->left,data);
        return;
    }
    
}
// struct Node* insert(struct Node* root, int data){

//     if(root==NULL){
//         return newNode(data);
        
//     }
//     if(data > root->data){
//         if(root->left == NULL){
//             root->left = newNode(data);
            
//         }
//         return insert(root->left, data);
//     }
//     if(data < root->data){
//         if(root->right == NULL){
//             root->right = newNode(data);
//         }
//         return insert(root->right,data);
//     }
//     return root;
// }

// struct Node* search(struct Node* root,int data){
//     if(root == NULL){
//         printf("No value found");
//         return NULL;
//     }
//     if(root->data == data){
//         return root->data;
//     }
//     if(root->data < data){
//         return search(root->right,data);
//     }
//     if(root->data > data){
//         return search(root->left,data);
//     }
// }
int count = 0;
int leaf_count(struct Node *root){

    if (root != NULL){
        if(root->left == NULL && root->right == NULL){
            count ++;
            return count;
        }
    }
    else {
        if(root->left != NULL){
            leaf_count(root->left);
        }
        if(root->right != NULL){
            leaf_count(root->right);
        }
    }
}

void inOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // if (root->left != NULL)
    // {
        inOrder(root->left);
    // }
        printf("%d\n", root->data);

    // if (root->right != NULL)
    // {
        inOrder(root->right);
    }
// }

int main(){
    struct Node* root = newNode(20);
    // struct Node* root;
    insert(root,10);
    insert(root,30);
    insert(root,25);
    insert(root,5);
    inOrder(root);

    // printf("/n%d is present in tree",search(root,30));
    search(root,30);
    printf("\nNo. of nodes : %d",leaf_count(root));
}