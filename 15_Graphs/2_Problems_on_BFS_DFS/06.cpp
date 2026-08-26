//Detect a Cycle in an Undirected Graph using DFS 
//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

/*
class Solution {
  public:
    
    bool isCycleDFS(vector<vector<int>>& adj,int u,vector<bool> &visited,int parent){
        visited[u]=true;
        
        for(int &v: adj[u]){
            if(v==parent) continue;
            
            if(visited[v]){
                return true;
            }
            
            if(isCycleDFS(adj,v,visited,u)){
                return true;
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
            if(!visited[i] && isCycleDFS(adj,i,visited,-1)){
                //visited nhi hai pr cycle mil gya
                return true;
            }
        }
        return false;
    }
};
*/

/*
Complexity

If the graph has V vertices and E edges:

Time: O(V + E)
Space: O(V) for visited + recursion stack

If you include the adjacency list itself:

Total auxiliary + graph storage: O(V + E)
*/