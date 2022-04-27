#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *ptr;

void print(struct Node *Head)
{
    int i = 0;
    while (Head != NULL)
    {
        printf("%d ", Head->data);
        Head = Head->next;
        i++;
    }
    // printf("\n%d",i);
    printf("\n");
}
void add_last(struct Node *Head)
{
    struct Node *new_Node = (struct Node *)malloc(sizeof(struct Node));
    new_Node->data = 40;
    new_Node->next = NULL;
    while (Head->next != NULL)
    {
        Head = Head->next;
    }
    Head->next = new_Node;
    printf("\n");
};

void add_first(struct Node** Head,int data)  // & is refrencing opperator and * is derefrencing opperator
{
    struct Node* new_Node = (struct Node *)malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = *Head; // see ex. practical
    *Head = new_Node;
}

void add_betw(struct Node** Head,int index,int data){

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
 
    if(index == 0){
        add_first(Head,data);  // here ** Head stores &head we can say Head = &head
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
void delete(struct Node** Head, int index){
    struct Node* prt = *Head;
    struct Node* Q;
    int i = 1;
    if(index == 1){
        *Head = prt->next;
        free(prt);
    }
    else{

        while(i < index-1){
            prt = prt->next;
        }
        Q = prt->next;
        prt->next = Q->next;
        free(prt);
    }
}

int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node *tail = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    sec->data = 20;
    tail->data = 30;

    head->next = sec; // here head sec and tail all stores the base address and all Node has linked* which points the other Node
    sec->next = tail; // read notes i have made for this;
    tail->next = NULL;

    print(head);
    add_last(head);
    print(head);
   add_first(&head,5); // here we have use pass by refrence so we have to pass address of head pointer this is because
                    // we want to add new NODE at front and reples first with with new node so by pass by refrence only we can do changes in actuall function 
    add_betw(&head,0,15);
    print(head);
    delete(head,1);
    print(head);
}