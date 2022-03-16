#include <iostream>
#include "DirectedUnweightedGraph.h"
using namespace std;
int main() {
    DirectedUnweightedGraph g(7);
    g.addEdge({0,1});
    g.addEdge({0,2});
    g.addEdge({0,3});
    g.addEdge({1,4});
    g.addEdge({4,5});
    g.addEdge({2,6});
    g.BFS(0);
    g.DFS(0);




    return 0;
}
