#include "DirectedUnweightedGraph.h"
DirectedUnweightedGraph::DirectedUnweightedGraph(int count) {
    numOfVertices=count;
    aList.resize(count);
}

void DirectedUnweightedGraph::addEdge(DirectedUnweightedGraph::Edge edge) {
    if (edge.src >= 0 && edge.src < numOfVertices && edge.dest >=0 && edge.dest<numOfVertices)
        aList[edge.src].push_back(edge.dest);
}

void DirectedUnweightedGraph::BFS(int start) {
    if (numOfVertices==0){
        std::cerr<<"Empty graph!";
        return;
    }
    vector<bool> isVisited(numOfVertices,false);     //Can use lines (22~24) instead of 21
 /*bool* isVisited= new bool [numOfVertices];
 *  for(int i=0;i<numOfVertices;i++)
 *      isVisited[i]=false;
 * */
    queue<int> myQueue;
    myQueue.push(start);
    isVisited[start]=true;

    while (!myQueue.empty()){
        int vertex = myQueue.front();
        myQueue.pop();
        cout<<vertex <<" ";
        for (int i = 0; i < aList[vertex].size(); i++) {
            int dest = aList[vertex][i];
            if (!isVisited[dest]){ //isVisited[dest] == false
                myQueue.push(dest);
                isVisited[dest]=true;
            }
        }
    }
}

void DirectedUnweightedGraph::DFS(int start) {
    if (numOfVertices==0){
        std::cerr<<"Empty graph!";
        return;
    }
    vector<bool> isVisited(numOfVertices,false);
    vector<int> stack;
    stack.push_back(start);
    isVisited[start] = true;
    int j=0;
    while (j<= numOfVertices){
        while (!stack.empty()) {
            int vertex = stack.back();
            stack.pop_back();
            cout << vertex << " ";
            for (int i = 0; i < aList[vertex].size(); i++) {
                int dest = aList[vertex][i];
                if (!isVisited[dest]) {
                    stack.push_back(dest);
                    isVisited[dest] = true;
                }
            }
        }
            if (j< numOfVertices && !isVisited[j]){
                stack.push_back(j);
                isVisited[j]=true;
            }
            j++;


    }
}

