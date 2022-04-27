#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *array = new int[n];
    for(int i = 0; i<n; i++){
        cin>>array[i];
    }
    int i,j,min,temp;
    for(i = 0; i < n-1; i++){
        min = i;
        for(j = i+1; j < n; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }

    for(int k = 0; k < n; k++){
        cout<<array[k]<<"\n";
    }
}