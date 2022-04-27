#include<iostream>

using namespace std;

int main(){
    int T,N;
    int a = 0;
    int b = 0;
    int *array;
    cin>>T;
    while(T--){
        cin>>N;
        array = new int[N];
        for(int i = 0; i < N ; i++){
            cin>>array[i];
        }
        for(int i=0;i<N;i+=2){    
            a = a+array[i];

        }
        for(int i = 1; i<N;i+=2){
            b = b+array[i]; 
        }
        if(a>b){
            cout<<a;
        }
        else cout<<b;
    }
}