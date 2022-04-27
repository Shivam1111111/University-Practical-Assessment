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
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = 40;
    new->next = NULL;
    while (Head->next != NULL)
    {
        Head = Head->next;
    }
    Head->next = new;
    printf("\n");
}
struct Node *add_first(struct Node *Head, int data)
{

    struct Node *new = (struct Node *)malloc(sizeof(struct Node)); // here we are creating new HEAD
    new->data = data;
    new->next = Head;
    return new; // a new head is returned; then we have to update it in main function
}

// 0  |_____|____|  1   |_____|____|  2  |_____|____|  3   |_____|____|       the numbers are the index
//          1                   2               3               4

struct Node *add_between(struct Node *Head, int index, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *prt = Head;

    int i = 0;

    while (i != index - 1)
    {
        prt = prt->next;
        i++;
    }
    temp->data = data;
        temp->next = prt->next;
    prt->next = temp;

    return Head;
}

// void delete(struct Node** Head, int index){
//     struct Node* prt = *Head;
//     struct Node* Q;
//     int i = 1;
//     if(index == 1){
//         *Head = prt->next;
//         free(prt);
//     }
//     else{

//         while(i < index-1){
//             prt = prt->next;
//             i++;
//         }
//         Q = prt->next;
//         prt->next = Q->next;
//         free(prt);
//     }
// }
struct Node *delete (struct Node* Head,int index)
{
    struct Node *prt = Head;
    struct Node *Q;
    int i = 1;
    if (index == 1)
    {
        Head = prt->next;
        free(prt);
    }
    else
    {
        while (i < index - 1)
        {
            prt = prt->next;
        }
        Q = prt->next;
        prt->next = Q->next;
        free(Q);
    }
    return Head;
};
int main(){
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

    head = add_first(head, 5); // We have replaced old head with new head without using concept of double pointer
    head = add_between(head,0, 15);
    print(head);
    head = delete(head,3);
    print(head);

}