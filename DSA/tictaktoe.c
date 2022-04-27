#include<stdio.h>
#include<time.h>
#include<stdlib.h>



char array[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
char user = 'X';
char cpu = 'O';


void initial(){

    printf("|-----|-----|-----|\n");
    printf("|0  %c |1  %c |2  %c |\n",array[0],array[1],array[2]);
    printf("|-----|-----|-----|\n");
    printf("|3  %c |4  %c |5  %c |\n",array[3],array[4],array[5]);
    printf("|-----|-----|-----|\n");
    printf("|6  %c |7  %c |8  %c |\n",array[6],array[7],array[8]);
    printf("|-----|-----|-----|\n\n");

}
void cpu_turn(){
    srand( time(NULL));  

    int num;
    num = (rand()%9);
    // printf("%d",num);
    
    while(array[num] != ' '){
        num = (rand()%9);
    }
    printf("\n\nCPU select %d index .\n\n",num);
    array[num] = cpu;
    initial();
}

void user_turn(){
    printf("on which index you want ");
    int index;
    scanf("%d",&index);
    while((index < 0) || (index > 8) || array[index] != ' '){
        printf("You should enter number between 0 and 8.\n You should select empty space ");
        scanf("%d",&index);
    }
    array[index] = user;
}


int equal(char a, char b, char c){
    if(a == b && b == c){
        return 1;
    } else {
        return 0;
    }
}



void condition(){
    equal(array[0] , array[1], array[2]);
    equal(array[3] , array[4], array[5]);
    equal(array[6] , array[7], array[8]);
    equal(array[0] , array[3], array[6]);
    equal(array[1] , array[4], array[7]);
    equal(array[2] , array[5], array[8]);
    equal(array[0] , array[4], array[8]);
    equal(array[2] , array[4], array[6]);
}

void clearScreen(){
    system("clear");
}

int main(){

    while(1){

    clearScreen();
    // initial();
    cpu_turn();
    user_turn();

    }
}
