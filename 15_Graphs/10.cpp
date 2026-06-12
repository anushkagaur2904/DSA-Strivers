//Detect cycle in a directed graph using DFS
//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

/*
class Solution {
  public:

    bool dfsCheck(int node,
                  vector<int> adj[],
                  vector<int>& vis,
                  vector<int>& pathVis) {

        vis[node] = 1;
        pathVis[node] = 1;

        for(auto it : adj[node]) {

            if(!vis[it]) {

                if(dfsCheck(it, adj, vis, pathVis))
                    return true;
            }
            else if(pathVis[it]) {

                return true;
            }
        }

        pathVis[node] = 0;

        return false;
    }

    bool isCyclic(int V, vector<vector<int>> &edges) {

        vector<int> adj[V];

        // Convert edge list -> adjacency list
        for(auto &e : edges) {

            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
        }

        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {

                if(dfsCheck(i, adj, vis, pathVis))
                    return true;
            }
        }

        return false;
    }
};
*/