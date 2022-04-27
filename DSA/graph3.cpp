#include<iostream>
using namespace std;

class Graph {
    int numOfVerts;
    bool** adjMatrix;

    public:
        Graph(int numOfVerts){
            this->numOfVerts = numOfVerts;

            adjMatrix = new bool* [numOfVerts];
            for (int i = 0; i < numOfVerts; i++)
            {
                adjMatrix[i] = new bool[numOfVerts];
            }
        }

        void addEdge(int src, int dst) {
            adjMatrix[src][dst] = true;
            adjMatrix[dst][src] = true;
        }
      
        void print(){
            cout << " | ";
            for (int i = 0; i < numOfVerts; i++)
            {
                cout << i << " ";
            }
            cout << endl << "-+-";
            for (int i = 0; i < numOfVerts; i++)
            {
                cout << "--";
            }
            cout << endl;
            
            for(int i = 0; i < numOfVerts; i++){
                cout << i << "| ";
                for(int j = 0; j < numOfVerts; j++){
                    cout << adjMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(0,2);
    g.addEdge(3,0);
    g.addEdge(4,1);

    g.print();
    return 0;
}

