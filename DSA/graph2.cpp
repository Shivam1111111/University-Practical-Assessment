#include<iostream>
#include<list>
#include<queue>
using namespace std;

class Graph {
    private:
        int numOfVerts;
        list<int>* adjLists;

    public:
        Graph(int numOfVerts){
            this->numOfVerts = numOfVerts;
            adjLists = new list<int>[numOfVerts];
        }

        void addEdge(int src, int dst){
            adjLists[src].push_front(dst);
        }

        void BFS(){
            bool* visited = new bool[numOfVerts];
            queue<int> q;
            q.push(0);
            visited[0] = true;

            while(!q.empty()){
                int currVert = q.front();
                q.pop();
                cout << currVert << " ";

                for (int i : adjLists[currVert])
                {
                    if( visited[i] == false ) {

                        visited[i] = true;
                        q.push(i);
                    }
                }
            }
            delete[] visited;
            cout << endl;
        }
        
        void bfs(){
            int *visited = new int[numOfVerts];
            queue<int> q;
            
        }

        void print(){
        for(int i = 0; i < numOfVerts; i++){ 
            cout<<i << ": ";
            for (int item : adjLists[i]) {
                cout << item << " ";
            }
            cout << endl;
        }    
    }
};

int main(){
    Graph g(5);
    g.addEdge(0, 3);
    g.addEdge(0, 1);
    g.addEdge(0, 2);

    g.addEdge(1, 0);
    g.addEdge(1, 2);

    g.addEdge(2, 0);
    g.addEdge(2, 1);
    g.addEdge(2, 4);

    g.addEdge(3, 1);

    g.addEdge(4, 2);

    g.print();
    g.bfs();
    return 0;
}