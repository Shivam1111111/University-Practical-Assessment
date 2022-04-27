#include<stdio.h>

void swap(int  &p, int &q){
    int temp = p;
    p = q;
    q = temp;
}

void sort(int array[], int size){
    int i,j,min;
    for(i = 0; i < size-1; i++){
         min = i;
        for(j = i+1; j < size; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
            swap(array[i], array[min]);
    }
}


void print(int array[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ",array[i]);
    }
}

int main(){
    int array[] = {6,12,0,18,11,99,55,45,34,2};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array,size);

    print(array,size);
}

// int main(){
//     int array[] = {6,12,0,18,11,99,55,45,34,2};
//     int size = sizeof(array) / sizeof(array[0]);
//     int i,j,min;
//     for(i = 0; i < size-1; i++){ // here i = size-1 because we no need to compare last element
//         min = i;
//         for(j = i+1; j < size; j++){
//             if(array[min] > array[j]){
//                 min = j;
//             }
//         }
//         if(min != i){
//             int temp = array[i];
//             array[i] = array[min];
//             array[min] = temp;
//         }
//     }
//     for(int a = 0; a < size; a++){
//         printf("%d ",array[a]);
//     }
// }
// int main() {
//    int arr[10]={6,12,0,18,11,99,55,45,34,2};
//    int n=10;
//    int i, j, position, swap;
//    for (i = 0; i < (n - 1); i++) {
//       position = i;
//       for (j = i + 1; j < n; j++) {
//          if (arr[position] > arr[j])
//             position = j;
//       }
//       if (position != i) {
//          swap = arr[i];
//          arr[i] = arr[position];
//          arr[position] = swap;
//       }
//    }
//    for (i = 0; i < n; i++)
//       printf("%d\t", arr[i]);
//    return 0;
// }