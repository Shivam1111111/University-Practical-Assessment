#include<iostream>

using namespace std;

class Stack2{
    private :
    int i;
    int array[5];

    public :

    Stack2(){
        i = -1;
    }

    void fill(){
        int a;
        for(i=0; i<5; i++){
            cout<<"Enter value ";
            cin>>a;
            array[i]=a;
        }
        cout<<endl;
    }
    void pick(){
        
        if(i>=0){
            i--;
            cout<<i<<endl;
            int value = array[i];
            array[i] = 0;
        }
        else 
            cout<<"Stack is empty ";
    }
    void display(){
        for(int j=4; j>=0; j--){
            cout<<array[j]<<endl;
        }
        cout<<endl;
    }
};
int main(){
    Stack2 S;
    int option;

    do{
        cout<<"Enter 1 for filling stack"<<endl;
        cout<<"Enter 2 to remove element stack"<<endl;
        cout<<"Enter 3 to display the stack"<<endl;

        cin>>option;
        cout<<endl;
    
        switch (option)
        {
        case 1 :
            S.fill();
            break;
        
        case 2 :
            S.pick();
            break;

        case 3 :
            S.display();
            break;
        
        default:
            break;
        }
    }
    while(option!=0); 
}