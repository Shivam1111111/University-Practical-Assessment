#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *root = NULL;

void add_node()
{

    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data in Node ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct Node *p = root;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}
void print()
{
    struct Node *Head = root;
    while (Head != NULL)
    {
        printf("%d ", Head->data);
        Head = Head->next;
    }
}
int length()
{
    struct Node *temp = root;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}
void add_first()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data of new Node ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->next = root;
        root = temp;
    }
}
void add_between()
{
    int a = 1;
    int index;
    printf("Enter index ");
    scanf("%d",&index);
    if(index > length()){
        printf("Invalid Number");
    }
    else if (index == 0){
        add_first();
    }
    else{

    //   |_____|____|    |_____|____|    |_____|____|    |_____|____|       
    //         1               2               3                4    

        struct Node* temp = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data of Node ");
        scanf("%d",&temp->data);

        struct Node* prt;
        prt = root;

        while(a < index){
            prt = prt->next;
            a++;
        }

        temp->next = prt->next;
        prt->next = temp;
    }
}
void delete_Node(){
    int index;
    int a=1;
    struct Node* temp;
    struct Node* q; // index Node


    printf("Enter index ");
    scanf("%d",&index);

    if(index > length()){
        printf("Invalid Index");
    }
    else if(index == 1){
        temp = root;
        root = temp->next;
        free(temp);
    }
    else {

        struct Node* prt = root;
        while(a < index-1){
            prt = prt->next;
            a++;
        }
        q = prt->next;
        prt->next = q->next;
        q->next = NULL;
        free(q);
    }
}

int main()
{
    add_node();
    add_node();
    add_node();
    add_node();
    add_node();
    add_first();
    add_between();
    delete_Node();
    print();
    length();


    return 0;
}