/* linked list is used as array but...
    in array we can add element on any index like a[10] = 8.. and can easily access by printf("%d",a[10])... by bigO = O(1)..
    but to deleat or increase size of any array it is difficult and its bigO is O(N)((worst condition)).

    in Linkedlist it is eassy to add or increase size of any element or to remove any element but...
    it is difficult to print or assess any element because in linked list if we want to assess 3th element it hase to start 
    from 0th element and it is called traverson.

    there are Nords in linkedlist which are initilly not releted as there addresses are not in linear formet ... therefore 
    if we want any lement from linked lis then we have to traverse from head.
    mean node1 has address 1002 , node2 has address 2030 and so on....
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a =10;
    int* p;
    p = &a;
    int** add_p;
    add_p = &p;

    printf("%d\n",&a);
    printf("%d\n",p);

    printf("%d\n",*add_p); //print value of p or &a as * single dereferanceing of add_p  
    printf("%d\n",*p);
    printf("%d\n",**add_p); //print value of a as ** double dereferanceing of add_p  
    
    printf("%d\n",&p);
    printf("%d\n",add_p);






    // int arr[5];
    // int* prt = (int*)calloc(3,sizeof(int));

    // // printf("%d\n",prt);
    // // printf("%d\n",prt+1);
    // // printf("%d\n",prt+2);

    // for(int i = 0; i<3; i++){
    //     scanf("%d", &prt[i]);
    // }

    // for(int i = 0;i<3;i++){
    //     printf("%d\n", prt[i]);
    //     // printf("%d\n",&prt[i]);
    // }

    // //printf("%d\n",&p);

    // printf("%d",p);

    return 0;
}
