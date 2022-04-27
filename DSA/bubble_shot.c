#include<stdio.h>


void sort(int array[], int size){
    int swapped;
    for(int i = 0; i < size-1; i++){
        swapped = 0;
        for(int j = 0; j < size - i-1; j++){

            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
}
void print(int array[],int size){
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int array[] = {10,9,8,7,6,5,4,3,2,1};

    int size = sizeof(array) / sizeof(array[0]);

    sort(array,size);
    print(array,size);
}
