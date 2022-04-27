#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int rear;
    int front;
    int size;
    int *array;
};

void initial(struct Queue *q, int size)
{
    q->rear = -1;
    q->front = -1;
    q->size = size;
    q->array = (int *)malloc(size * sizeof(int));
}

int isFull(struct Queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Queue *q)
{
    if (q->rear == -1 && q->front == -1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full!");
    }
    if (q->front == -1)
    {
        q->front++;
    }
    q->rear += 1;
    q->array[q->rear] = value;
}

int dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is Empty!");
    }
    int temp = q->array[q->front];
    q->array[q->front] = NULL;

    if (q->front == q->rear)
    {
        q->rear = -1;
        q->front = -1;
    }
    else
    {
        q->front += 1;
    }
    return temp;
}

void print(struct Queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d\n", q->array[i]);
    }
}

int main()
{
    struct Queue Q;
    initial(&Q, 5);
    enqueue(&Q, 1);
    enqueue(&Q, 2);
    enqueue(&Q, 3);
    enqueue(&Q, 4);
    enqueue(&Q, 5);

    dequeue(&Q);
    
    print(&Q);
}
