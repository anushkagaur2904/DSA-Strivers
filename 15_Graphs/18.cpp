//MST using Prim's Algo
//https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1

/*
class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>pq;
        vector<int> vis(V,0);
        //{wt,node}
        pq.push({0,0});
        int sum=0;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int wt = it.first;
            
            if(vis[node]==1) continue;
            //add it to mst
            vis[node]=1;
            sum+=wt;
            for(auto it :edges[node]){
                int adjNode = it[0];
                int edgeWeight = it[1];
                if(!vis[adjNode]){
                    pq.push({edgeWeight,adjNode});
                }
            }
        }
        return sum;

    }
};
*/

/*
class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {

        vector<pair<int,int>> adj[V];

        // Convert edge list -> adjacency list
        for(auto &it : edges) {

            int u = it[0];
            int v = it[1];
            int wt = it[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt}); // undirected graph
        }

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        vector<int> vis(V, 0);

        pq.push({0, 0});

        int sum = 0;

        while(!pq.empty()) {

            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if(vis[node])
                continue;

            vis[node] = 1;
            sum += wt;

            for(auto it : adj[node]) {

                int adjNode = it.first;
                int edgeWeight = it.second;

                if(!vis[adjNode]) {
                    pq.push({edgeWeight, adjNode});
                }
            }
        }

        return sum;
    }
};
*/