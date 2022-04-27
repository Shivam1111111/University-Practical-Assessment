#include<stdio.h>

int b = 10;
int* p = &b;
void change(){
    *p = 20;
}
int main(){
    int a = 10;
    int* p = &a;
    int** prt = &p;
                    
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",prt);
    printf("%d\n",*prt);
    printf("%d\n",**prt);

    printf("%d\n",b);
    change();
    printf("%d",b);
}