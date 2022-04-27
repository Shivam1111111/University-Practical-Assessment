#include<iostream>
using namespace std;

int main(){

    int arr[] = {9, 4, 3, 6, 2, 1, 11};
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 1; i < len; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
    
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
    
    return 0;
}