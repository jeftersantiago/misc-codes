#include<iostream>
#include<bits/stdc++.h>

const int MAX_NODES = 1e5;
std::vector<int> adjList[MAX_NODES];
std::vector<bool> visited(MAX_NODES, false);
std::vector<int> par[MAX_NODES];

void dfs(int vertex, int parent){
    if(visited[vertex]) return;
    visited[vertex] = true;

    par[vertex].push_back(parent);
    /*
      Acho que o erro ta aqui.
    for(auto i = adjList[vertex].begin(); i != adjList[vertex].end(); i++){
        dfs(*i, vertex, n);
        std::cout << *i << std::endl;
    }
    */
}

int main () {
    int vertices, edges, src, dest;
    std::cin >> vertices >> edges >> src >> dest;
    for(int i = 0; i < edges; i++){
        int src_node, dest_node;
        std:: cin >> src_node >> dest_node;
        adjList[src_node].push_back(dest_node);
    }
    
    dfs(src,dest);
    par.pop(src);
    
    std:: cout << "------------\n" << std::endl;
    for(auto l : par){
        for(auto i : l){
            std::cout << i << std::endl;
        }
    }
    return 0 ;
}
