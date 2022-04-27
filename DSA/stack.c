#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int* arr;
};

void initially(struct Stack* s, int size){
    s->top = -1;
    s->size = size;
    s->arr = (int*)malloc(sizeof(int)*size);
}

int isFull(struct Stack* s){
    if(s->top == s->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct Stack* s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

void push(struct Stack* s, int element){
    if(isFull(s)){
        printf("Stack Overflow!\n");
        return;
    }
    s->top +=1;
    s->arr[s->top] = element;
}
void pop(struct Stack* s){
    if(isEmpty(s)){
        printf("struct Underflow!\n");
        return;
    }

    s->arr[s->top] = NULL;
    s->top -=1;
}

void access(struct Stack* s){
    if(s->top == -1){
        printf("Stack is Empty\n");
        return;
    }
    printf("%d",s->arr[s->top]);
} 

int main(){
    struct Stack s;
    initially(&s,5);
    push(&s,1);
    push(&s,2);
    push(&s,3);
    push(&s,4);
    push(&s,5);
    push(&s,6);
    
    pop(&s);
    pop(&s);
    access(&s);
    return 0;
}