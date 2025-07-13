#ifndef MIN_COST_MAX_FLOW_HPP
#define MIN_COST_MAX_FLOW_HPP

#include <bits/stdc++.h>
#include <vector>
#include <utility>

namespace MinCostMaxFlow {
    struct Edge {
        int to;       // destination vertex
        int rev;      // index of reverse edge in 'to' adj list
        int capacity; // remaining capacity
        int cost;     // cost per unit of flow
    };

    class Solver {
    public:
        explicit Solver(int N);
        // Add directed edge u -> v
        void addEdge(int u, int v, int cap, int cost);
        // Compute max flow of at most 'maxFlow' from s to t, returning pair(flow, cost)
        std::pair<int, int> minCostMaxFlow(int s, int t, int maxFlow = INT_MAX);

    private:
        int N;
        std::vector<std::vector<Edge>> G;
        std::vector<int> dist, potential, parentV, parentE;

        // Run Dijkstra with potentials to find shortest augmenting path
        void dijkstra(int s);
    };
}

#endif // MIN_COST_MAX_FLOW_HPP