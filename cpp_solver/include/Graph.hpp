#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include "MinCostMaxFlow.hpp"

class Graph {
public:
    explicit Graph(int V);
    // Add directed edge u -> v with capacity and cost, and its reverse
    void addEdge(int u, int v, int capacity, int cost);
    // Access adjacency list
    const std::vector<std::vector<MinCostMaxFlow::Edge>>& adj() const;
    int numVertices() const;

private:
    int V;
    std::vector<std::vector<MinCostMaxFlow::Edge>> adjacency;
};

#endif // GRAPH_HPP