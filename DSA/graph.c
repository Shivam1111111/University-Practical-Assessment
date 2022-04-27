#include<stdio.h>
#include<stdlib.h>


// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Graph {
//     int numOfVertices;
//     struct Node** adjLists;
// };

// struct Node* createNode(int data){
//     struct Node* newNode = (struct Node*) malloc(sizeof(struct Node*));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void insertAtFirst(struct Node** head, int data) {
//     struct Node* newNode = createNode(data);
//     newNode->next = *head;
//     *(head) = newNode;
// }


// void initGraph(struct Graph* g, int numOfVertices) {
//     g->numOfVertices = numOfVertices;
//     *(g->adjLists) = (struct Node *) malloc(sizeof(struct Node *) * numOfVertices);
//     for (int i = 0; i < numOfVertices; i++)
//     {
//         g->adjLists[i] = (struct Node*) malloc(sizeof(struct Node *));
//     }
// }

// void addEdge(struct Graph *g,int src, int dst) {
//     insertAtFirst(&g->adjLists[src], dst);
//     insertAtFirst(&g->adjLists[dst], src);
// }

// int main(){
//     struct Graph g;
//     initGraph(&g, 5);
    
//     addEdge(&g, 0, 2);
//     addEdge(&g, 1, 3);

//     return 0;
// }