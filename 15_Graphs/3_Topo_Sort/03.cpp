//Detect cycle in directed graph using BFS
//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

/*
class Solution {
  public:
 
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        queue<int> que;
        vector<int> indegree(V,0);
        

        // Build adjacency list
        for(auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            indegree[v]++;
        }
        
        int count = 0;
        
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                que.push(i);
                count++;
            }
        }
        
        while(!que.empty()){
            int u = que.front();
            que.pop();
            
            for(int &v: adj[u]){
                indegree[v]--;
                
                if(indegree[v]==0){
                    que.push(v);
                    count++;
                }
            }
        }
        if(count==V){
            return false;
        }
        return true;
    }
};
*/