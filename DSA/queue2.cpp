#include<iostream>
using namespace std;
#define SIZE 5

class Queue{
    private :
    int front;
    int back;
    
    int array[SIZE];
    public:

    Queue(){
        front = -1;
        back = -1;
        for(int i = 0;i<SIZE;i++){
            array[i]=0;
        }
    }
    bool is_full(){
        if(front==SIZE-1){
            return true;
        }else
            return false;
    }
    bool is_empty(){
        if(front<=SIZE-1){
            return true;
        }else
            return false;
    }

    void fill(int a){
        if(is_empty()){
        front++;
        array[front] = a;
        }
        else
            cout<<"QUEUE is full"<<endl;
    }
    void empty(){
        back++;
        array[back] = NULL;  
    
    }
    void display(){
        for(int i = 0;i<SIZE;i++){
            cout<<array[i]<<endl;
        }
        cout<<endl;
    }
};
int main(){
    Queue T;
    T.fill(2);
    T.fill(4);
    // T.fill(6);
    // T.fill(8);
   
    // T.fill(10);
    T.fill(12);

    T.display();
    T.empty();
    T.fill(3);
    T.display();
}