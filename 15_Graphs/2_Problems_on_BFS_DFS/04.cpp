//Detect a Cycle in an Undirected Graph using BFS 
//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


/*
class Solution {
  public:
    
    bool isCycleBFS(vector<vector<int>>& adj,int u,vector<bool> &visited){
        queue<pair<int,int>> que;
        que.push({u,-1});
        visited[u]=true;
        
        while(!que.empty()){
            pair<int,int> P = que.front();
            que.pop();
            
            int source = P.first;
            int parent = P.second;
            
            for(int &v: adj[source]){
                if(visited[v]==false){
                    visited[v]=true;
                    que.push({v,source});
                }
                else if(v!=parent){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<bool> visited(V,false);
        
        vector<vector<int>> adj(V);

        // Build adjacency list
        for(auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<V;i++){
            if(!visited[i] && isCycleBFS(adj,i,visited)){
                //visited nhi hai pr cycle mil gya
                return true;
            }
        }
        return false;
    }
};
*/