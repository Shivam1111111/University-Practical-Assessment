 #include<stdio.h>
 #include<stdlib.h>

 struct Stack{
    int size;
    int top;
    int *array;
 };

 void initial(struct Stack *s, int size){
    s->top = -1;
    s->size = size;
    s->array = (int* )malloc(size*sizeof(int));
 }

 int isFull(struct Stack* s){
    if(s->top == s->size-1){
        return 1;
    }
    return 0;
 }

 int isEmpty(struct Stack* s){
     if(s->top == 0){
         return 1;
     }
     return 0;
 }

 void push(struct Stack* s, int value){
     if(isFull(s)){
         printf("Stack is full!\n");
         return;
     }
     s->top += 1;
     s->array[s->top] = value;
 }

 void pop(struct Stack* s){
     if(isEmpty(s)){
         printf("Stack is empty!\n");
         return;
     }
     s->array[s->top] = NULL;
     s->top -= 1;
 }

 void print(struct Stack* s){
    if(isEmpty(s)){
         printf("Stack is empty!\n");
         return;
     }
     printf("%d\n",s->array[s->top]);
 }

 void peep(struct Stack* s, int i){
    if(isEmpty(s)){
        printf("Stack is empty!\n");
        return;
    }
    printf("%d\n",s->array[s->top - i + 1]);
 }

void change(struct Stack* s, int i, int value){
    if(isEmpty(s)){
        printf("Stack is empty!\n");
        return;
    }
    s->array[s->top - i + 1] = value;
}

int main(){
    struct Stack s;
    initial(&s,5);

    push(&s,1);
    push(&s,2);
    push(&s,3);
    push(&s,4);
    push(&s,5);

    peep(&s,4);
    change(&s,4,10);
    peep(&s,4);
    print(&s);
}
