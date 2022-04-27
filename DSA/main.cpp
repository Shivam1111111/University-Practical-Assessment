#include<iostream>
#include<string>
using namespace std;

class Stack{
    private : 
    int top;
    int array[5];
public : 
    Stack(){
        top = -1;
        for(int i = 0; i < 5; i++){
            array[i] = 0;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;    
        }
        else
            return false;
    }
    bool isFull(){
        if(top==4){
            return true;
        }
        else
            return false;
    }

    void push(int num){
        if(isFull()){
            cout<<"The Stack Is Full"<<endl;
        }
        else
        top++;
        array[top]=num;
    }
    int pick(){
        if(isEmpty()){
            cout<<"The Stack Is Empty"<<endl;
            
        }
        else{
        int pickValue = array[top];
        array[top]= 0;
        top--;
        return pickValue;
        }
    }
    void show(){
        for(int i = 4; i>=0; i--){
            cout<< array[i];
            cout<< endl;
        }
    }
};
int main(){
    Stack S;

    int option,value;

do{
    cout<<"Enter 1 to add elements in Stack"<<endl;
    cout<<"Enter 2 to remove elements in Stack"<<endl;
    cout<<"Enter 3 to see elements in Stack"<<endl;
    cout<<"Enter 0 to exit"<<endl;
    
    cin>>option;

    switch (option)
    {
    case 0 :
        break;
    case 1 : 
    if(S.isFull())
        cout<<"Enter the number you want to add"<<endl;
        cin>>value;
        S.push(value);
        break;
    
    case 2 :
        S.pick();
        break;
    
    case 3 :
        S.show();
        break;

    default:
        cout<<"Enter proper number";
        break;
    }
    
    }while(option!=0);
}
