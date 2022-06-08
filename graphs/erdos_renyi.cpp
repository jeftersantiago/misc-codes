/*
  Jefter Santiago
  Email: jefterrsantiago@gmail.com
  Github: https://github.com/jeftersantiago
*/
#include<list>
#include<random>
#include<iostream>

class Erdos_Renyi_Graph{
public:
    std::vector<std::vector<bool>> adjMatrix;
    /*
      Generates an Erdos-Renyi random undirected graph.
      Param:
       int n = number of vertices.
       double p = given probability.
     */
    std::vector<std::vector<bool>> gnpGraph(int n, double p){

        std::random_device rd;  // Will be used to obtain a seed for the random number engine.
        std::mt19937 mt(rd()); 
        /*
          Generates a distribution of random probabilities in [0, 1.0] that'll be used
          to compare the given probability p.
         */
        std::uniform_real_distribution<double> random_dist(0, 1.0);

        /*
          std::cout << "Probability = " << p << std::endl;
          std::cout << "Random Distribution = " << random_dist(mt) << std::endl;
        */

        std::vector<std::vector<bool>> adjMatrix(n, std::vector<bool>(n,false));
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                adjMatrix[i][j] = adjMatrix[j][i] = random_dist(mt) < p;
            }
        }
        return adjMatrix;
    }
    void printMatrix(std::vector<std::vector<bool>> M){
    	for (auto l : M) {
    		for (auto el : l) {
                std::cout << el << " ";
    		}
            std::cout << std::endl;
    	}
        std::cout << std::endl;
    }
    Erdos_Renyi_Graph(int n, double p){
        adjMatrix = gnpGraph(n, p);            
        printMatrix(adjMatrix);
    }
};
int main(){
    int n;
    double p;
    std::cin >> n >> p;
    Erdos_Renyi_Graph er(n, p);
    return 0;
}
