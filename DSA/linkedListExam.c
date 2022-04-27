#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void print(struct Node* Head){

    struct Node* temp = Head;

    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void add_last(struct Node *Head, int data){
    
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = Head;
    new_node->data = data;
    new_node->next = NULL;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

// struct Node *add_first(struct Node *Head, int data){

//     struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    
//     new_node->next = Head;
//     new_node->data = data;

//     return new_node;
// }

void add_first(struct Node **Head, int data){

    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = data;
    new_node->next = *Head;  // SEE therry_linkedlist.c

    *Head = new_node; // now head pointer stores the address of new_node; (Head is pointing to new node)
}

// struct Node* add_between(struct Node *Head, int index , int data){

//     struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
//     struct Node *temp = Head;
    
//     if(index == 0){
//         add_first(Head,data);
//         return 1;
//     }
//     else
//     for(int i = 1; i<index; i++){
//         temp = temp->next;
//     }
//     new_node->data = data;
//     new_node->next = temp->next;
//     temp->next = new_node;

//     return Head;
// }
void add_between(struct Node** Head,int data,int index){

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
 
    if(index == 0){
        add_first(Head,data);  // here ** Head stores &head we can say Head = &head
        return;
    }
    else{
        struct Node *prt = *Head; // Here *Head mean derefrencing Of Head it is equal to Head see ex...
        for(int i = 1; i<index; i++){
            prt = prt->next;      // see code with harry   
        }

        temp->next = prt->next;
        prt->next = temp;

    }
}
int main(){

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node));
    struct Node* tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    sec->data = 20;
    tail->data = 30;

    head->next = sec;
    sec->next = tail;
    tail->next = NULL;

    add_last(head,40);
    // head = add_first(head,5);
    add_first(&head,5);
    // head = add_between(head,1,7);
    add_between(&head,7,0);
    print(head);
}