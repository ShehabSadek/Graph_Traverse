
#ifndef BFS_DIRECTEDUNWEIGHTEDGRAPH_H
#define BFS_DIRECTEDUNWEIGHTEDGRAPH_H
#include<vector>
#include "queue"
#include "vector"
#include "iostream"
using namespace std;
class DirectedUnweightedGraph {
private:
    class Edge{
    public:
        int src, dest;
    };
    int numOfVertices;
    vector<vector<int>> aList{};
public:
    explicit DirectedUnweightedGraph(int count);
    void addEdge(Edge edge);
    void BFS(int start);  //Adjacency list
    void DFS(int start);  //Stack

};


#endif //BFS_DIRECTEDUNWEIGHTEDGRAPH_H
