#include "graph.h"

Graph::Graph(int vertices, int typeInput){
    numVertices = vertices;
    if(typeInput == 0)
        adjList = new std::list<int>[vertices];
    else if (typeInput == 1)
        adjMatrix = new std::vector<std::vector<int>>[vertices];
}
void Graph::addEdge(int src, int dest){
    adjList[src].push_back(dest);
    adjList[dest].push_back(src);
}
