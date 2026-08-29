//Dijkstra's Algo
//https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

/*
class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>>& edges, int src) {

        vector<vector<pair<int, int>>> adj(V);

        // Build adjacency list
        for(auto& it : edges) {

            int u = it[0];
            int v = it[1];
            int wt = it[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt}); // remove for directed graph
        }

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        vector<int> result(V, INT_MAX);

        result[src] = 0;
        pq.push({0, src});

        while(!pq.empty()) {

            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Ignore outdated entry
            if(d > result[node])
                continue;

            for(auto& vec : adj[node]) {

                int adjNode = vec.first;
                int wt = vec.second;

                if(d + wt < result[adjNode]) {

                    result[adjNode] = d + wt;

                    pq.push({d + wt, adjNode});
                }
            }
        }

        return result;
    }
};
*/
//TC -> O(E log V)