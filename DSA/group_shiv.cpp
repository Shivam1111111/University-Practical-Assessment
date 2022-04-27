#include<iostream>

using namespace std;

class Node{

    public :

    int data;
    struct Node* next;

    struct Node(){
        this->data = NULL;
        this->next = NULL;
    }

    struct Node* create_node(int data){
        struct Node* new_node = new Node();
        new_node -> data = data;

        return new_node;
    }

    struct Node

};