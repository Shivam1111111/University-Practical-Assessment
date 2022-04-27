#include<stdio.h>
#include<stdlib.h>

int binary(int arr[], int len, int element){
    int low = 0;
    int high = len-1;

    while(low <= high){
        int mid = (high+low)/2;

        if(arr[mid] == element){
            return mid;
        }
        else if(element > arr[mid]){
            low = mid+1;
        } else {
            high = mid-1;
        }
    }

    return -1;
}

int main(){
    int arr[10] = {2,4,6,7,9,10,12,14,16,18};

    int index = binary(arr, 10, 2);
    printf("%d\n", index);
}