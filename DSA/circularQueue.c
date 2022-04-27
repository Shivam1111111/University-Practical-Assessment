#include<stdio.h>
#include<stdlib.h>

struct Queue {
    int rear, front, size;
    int* array;
};

void initial(struct Queue* q, int size){
    q->rear = -1;
    q->front = -1; 
    q->size = size; 
    q->array = (int*)malloc(sizeof(int)*size);  
}

int isFull(struct Queue* q){
    if( ((q->front+1) % q->size) == q->rear){
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue* q){
    if(q->front == -1 && q->rear == -1){
        return 1;
    }
    return 0;
}

void enQueue(struct Queue* q, int element){
    if(isFull(q)){
        printf("Queue is full !\n");
        return;
    }
    if(q->rear == -1){
        q->rear = 0;
    }
    q->front = ((q->front + 1) % q->size);
    q->array[q->front] = element;
}

int dequeue(struct Queue* q){
    if(isEmpty(q)){
        printf("Queue is empty!\n");
        return -1;
    }
    int temp = q->array[q->rear];
    q->array[q->rear] = NULL;
    if(q->rear == q->front){
        q->front = -1;
        q->rear = -1;
    } else {
        q->rear = ((q->rear + 1) % q->size);
    }
    return temp;
}

void print(struct Queue* s){
    if(isEmpty(s)){
        printf("Queue is empty!\n");
        return;
    }



    for (int i = s->rear; i != s->front; i = (i+1) % s->size)
    {
        printf("%d ", s->array[i]);
    }
    printf("%d ", s->array[s->front]);



    printf("\n");
}

int main(){
    struct Queue Q;
    initial(&Q,5);
    enQueue(&Q,1);
    enQueue(&Q,2);
    enQueue(&Q,3);
    enQueue(&Q,4);
    enQueue(&Q,5);

    print(&Q);

    dequeue(&Q);
    dequeue(&Q);
    dequeue(&Q);
    enQueue(&Q,6);
    // dequeue(&Q);
    // dequeue(&Q);
    // enQueue(&Q,10);
    // enQueue(&Q,6);
    
    print(&Q);



    return 0;
}