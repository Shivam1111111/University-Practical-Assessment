#include <stdio.h>
#include <stdlib.h>

struct Exemple
{
    int id;
    char name[10];
    float sal; // i had write after 2th point
};

int main()
{

    struct Exemple *prt = (struct Exemple *)malloc(sizeof(struct Exemple));

    // This prt has data type struct Exe.. bz prt store address of variables of exe..Structure NOT SURE

    // Sizeof(struct Ex...) bz malloc gives space for int id and char name and int require 4 bits and cahr equire 1 bit so it varis 
    // thus total space 4+1*10=14bits (at 32 bit compiler) but if compiler is 16 bit the int require 2 and char require 1 so total 12 bits
    // so whole structure size is based on compiler and we can not write sizeof directly 14 or 12.
    // thus we write whole struct Ex... and further confusion watch video of NARESH IT
    //                                                                             ________________
    // It is 32 bits compiler and malloc functon allocat 14 in attached blick like |____|____|____| first 4 bit block for int and sec
    // for char array and 4 bits for 3th for float.                                 1000  1004 1014

    // malloc function return type is base address (address of first block i.e. 1000) but it return it into void* pointer form.
    // A void pointer is a pointer that has no associated data type with it.
    //  A void pointer can hold address of any type and can be typecasted to any type.
    //  Then it converted into struct Ex...* and stored into prt
    if(prt==NULL){
        printf("Out of Memory");
    }
    else{
        printf("Enter id ");
        scanf("%d",&prt->id);
        printf("Enter name ");
        scanf("%s",prt->name);
        printf("Enter salary ");
        scanf("%f",&prt->sal);
    }
    printf("The id is %d , name is %s and salary is %f",prt->id,prt->name,prt->sal);
}