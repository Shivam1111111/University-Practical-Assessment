#include<iostream>
using namespace std;


class Node {
    int data;
    Node* next;

    public:
        Node(){
            this->data = NULL;
            this->next = NULL;
        }
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        void insetAtFirst(int data){

            if(this->data == NULL){
                this->data = data;
                return;
            }

            Node* newNode = new Node(data);

            int tmp = this->data;
            this->data = data;
            newNode->data = tmp;

            newNode->next = this->next;
            this->next = newNode;
        }

        void printList() {
            Node* ptr = this;
            while(ptr != NULL){
                if(ptr->data == NULL){
                    ptr = ptr->next;
                    continue;
                }
                cout << ptr->data <<" ";
                ptr = ptr->next;
            }
            cout << endl;
        }
};

class Graph {
    private:
        int numOfVerts;
        Node** adjLists;

    public:
    Graph(int numOfVerts){
        this->numOfVerts = numOfVerts;
        adjLists = new Node* [numOfVerts];

        for (int i = 0; i < numOfVerts; i++)
        {
            adjLists[i] = new Node;
        }
    }

    void addEdge(int src, int dst){
        adjLists[src]->insetAtFirst(dst);
        adjLists[dst]->insetAtFirst(src);
    }

    void printAdjList(){
        cout << "AdjList: " << endl;

        for (int i = 0; i < numOfVerts; i++)
        {
            cout << i << ": ";
            adjLists[i]->printList();
        }
        
    }
};


int main(){
    Graph g(3);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(0, 2);

    g.printAdjList();

    return 0;
}