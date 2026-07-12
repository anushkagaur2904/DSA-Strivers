//M Coloring Problem
//https://www.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1

/*
class Solution {
public:

    // Check whether current color can be assigned to node
    bool isSafe(int node, vector<int> &color,
                vector<vector<int>> &adj, int col) {

        // Check all adjacent vertices
        for (int neighbour : adj[node]) {

            // If neighbour already has the same color
            if (color[neighbour] == col)
                return false;
        }

        return true;
    }

    // Backtracking function
    bool solve(int node, vector<int> &color,
               vector<vector<int>> &adj,
               int m, int V) {

        // All vertices are colored
        if (node == V)
            return true;

        // Try every color
        for (int col = 1; col <= m; col++) {

            // If it is safe to color this node
            if (isSafe(node, color, adj, col)) {

                // Assign color
                color[node] = col;

                // Color next node
                if (solve(node + 1, color, adj, m, V))
                    return true;

                // Backtrack
                color[node] = 0;
            }
        }

        return false;
    }

    bool graphColoring(int V, vector<vector<int>> &edges, int m) {

        // Adjacency List
        vector<vector<int>> adj(V);

        // Build graph
        for (auto &edge : edges) {

            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // 0 means no color assigned
        vector<int> color(V, 0);

        return solve(0, color, adj, m, V);
    }
};
*/