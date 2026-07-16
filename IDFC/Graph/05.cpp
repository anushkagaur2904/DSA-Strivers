//Detect a Cycle in an Undirected Graph using BFS 
//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

/*
class Solution {
  public:

    bool detect(int src, vector<int> adj[], vector<int>& vis) {

        vis[src] = 1;

        queue<pair<int,int>> q;
        q.push({src, -1});

        while(!q.empty()) {

            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for(auto adjacentNode : adj[node]) {

                if(!vis[adjacentNode]) {

                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                else if(adjacentNode != parent) {

                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {

        vector<int> adj[V];

        // Convert edge list to adjacency list
        for(auto &e : edges) {

            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);

        for(int i = 0; i < V; i++) {

            if(!vis[i]) {

                if(detect(i, adj, vis))
                    return true;
            }
        }

        return false;
    }
};
*/

//IF ADJACENCY LIST GIVEN
/*
class Solution {
  public:

    bool detect(int src, vector<vector<int>>& adj, vector<int>& vis) {

        vis[src] = 1;

        queue<pair<int, int>> q;
        q.push({src, -1});

        while (!q.empty()) {

            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto adjacentNode : adj[node]) {

                if (!vis[adjacentNode]) {

                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                else if (adjacentNode != parent) {

                    return true;
                }
            }
        }

        return false;
    }

    bool isCycle(int V, vector<vector<int>>& adj) {

        vector<int> vis(V, 0);

        for (int i = 0; i < V; i++) {

            if (!vis[i]) {

                if (detect(i, adj, vis))
                    return true;
            }
        }

        return false;
    }
};
*/