//Detect cycle in directed graph using BFS

/*
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        // Adjacency list
        vector<int> adj[V];

        // Indegree of every node
        vector<int> indegree(V, 0);

        // Build graph
        for(auto it : edges) {

            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);

            // Increase indegree of v
            indegree[v]++;
        }

        queue<int> q;

        // Push all nodes having indegree 0
        for(int i = 0; i < V; i++) {

            if(indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;

        while(!q.empty()) {

            int node = q.front();
            q.pop();

            topo.push_back(node);

            // Traverse neighbours
            for(auto it : adj[node]) {

                indegree[it]--;

                // If indegree becomes 0
                if(indegree[it] == 0) {
                    q.push(it);
                }
            }
        }
        if(topo.size()!=V) return false;
        return true;
    }
};
*/