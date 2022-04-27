#include<stdio.h>

// int main(){

//     int array[5] = {1,2,3,4,5};
//     # int *p = &array[0];
//      int *p = &array;

//     printf("%d",*(p+2));

// }

// int main(){

//     int a[5] = {1,2,3,4,5};
//     int *p = &a;

//     // for(int i = 0 ; i < 5; i++){
//     //     p = &a[i];
//     //     printf("%d ",*p);
//     // }

//     // for(int i = 0 ; i < 5; i++){
//     //     printf("%d ",*(p+i));
//     // }

//     for(p = &a[0]; p <= &a[4]; p++){
//         printf("%d ", *p);
//     }
// }

// Name of the array can be use as the pointer to the first element:
//  Because name of the array is the base address of array

int main(){
    // int a[4]; // empty array
    // *a = 10;  // Here a represents the base address of array a and  dereferencing of a means 
    //           // *a means showing the value at a address [ a = &a and *a = value at address a]
    //           // so &a[i] = a and a[i] = *(a+i)
    // *(a+1) = 20;
    // *(a+2) = 30;
    // *(a+3) = 40;

    // for(int i =0; i < 4; i++){
    //     printf("%d ",*(a+i));
    // }

    // or
    int a[4] = {1,2,3,4};
    int sum = 0;
    for(int i = 0; i < 4; i++){
        printf("%d ", *(a+i));
        sum = sum + (*(a+i));
    }
    printf("%d",sum);
}