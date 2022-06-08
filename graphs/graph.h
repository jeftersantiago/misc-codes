#include<list>
#include<vector>
class Graph{
    int numVertices;
    std::list<int>* adjList;
    std::vector<std::vector<int>>* adjMatrix;
public:
    /* Params:
       int vertices: quantity of vertices
       int typeInput: 0 for ajdList, 1 for adjMatrix
     */
    Graph(int vertices, int typeInput);
    void addEdge(int src, int dest);
    int getVertices(){return numVertices;};
    std::list<int> getVertex(int i){ return adjList[i];};
};


