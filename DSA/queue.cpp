#include<iostream>

using namespace std;

class Queue{
    private :
    int front;
    int back;
    int queue[5];

    public :
    Queue(){
        int front = -1;
        int back = -1;
    }

    // bool is_full(){
    //     if(front==4){
    //         return true;
    //     }else
    //         return false;
    // }
    // // bool is_empty(){
    //     if(front==-1){
    //         return true;
    //     }else
    //         return false;
    // }

    void filling(int a){
            cout<<front<<endl;
            front++;
            // cout<<front<<endl;
            queue[front]=a;
    }
    void removing(){
            back++;
            int x = queue[back];
            queue[back] = NULL;
    }
    void display(){
        for(int i = 0; i<5; i++){
            cout<<queue[i]<<" ";
        }
    }
};
int main(){
    Queue Q;

    Q.filling(2);
    Q.filling(4);
    Q.filling(6);
    Q.filling(8);

    Q.display();
}