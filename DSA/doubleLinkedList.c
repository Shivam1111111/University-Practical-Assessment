#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* previous;
    struct Node* next;
};
void printRight(struct Node* Head){
    struct Node* prt = Head;
    while(prt != NULL){
        printf("%d\n",prt->data);
        prt = prt->next;
    }
}

void printReverse(struct Node* Tail){
    struct Node* prt = Tail;
   
    while(prt != NULL){
        printf("%d\n",prt->data);
        prt = prt->previous;
    }   
}

void insertFirst(struct Node** head, int element){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->next = *head;
    newNode->previous = NULL;

    newNode->data = element;
    (*head)->previous = newNode;

    
    *head = newNode;
}

void insertBetween(struct Node** head, int element, int index){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = element;
    struct Node *prt = *head; // Here *Head mean derefrencing Of Head it is equal to Head see ex...
    
    if(index == 0){
        insertFirst(head,element);
        return;
    }
    else
        for(int i = 1; i<index; i++){
            prt = prt->next;      // see code with harry   
        }
    newNode->next = prt->next;
    prt->next = newNode;
    newNode->previous = prt;
    (prt->next)->previous = newNode;
}

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node));
    struct Node* tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = sec;
    head->previous = NULL;

    sec->data = 20;
    sec->next = tail;
    sec->previous = head;

    tail->data = 30;
    tail->next = NULL;
    tail->previous = sec;

    printRight(head);
    printf("\n");
    // printReverse(tail);
    insertFirst(&head,5);
        printRight(head);

    insertBetween(&head,50,0);
    printRight(head);
}