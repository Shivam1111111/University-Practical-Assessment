#include<stdio.h>

int main(){

    int arr[] = {10, 9, 6, 7, 4, 3, 1, 2};
    int len = sizeof(arr)/sizeof(arr[0]);

    int j;
    for (int i = 1; i < len; i++)
    {
        int key = arr[i];
        j = i-1;
        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}