//TOPO SORT BFS (KAHN ALGO)
//https://www.geeksforgeeks.org/problems/topological-sort/1

/*
class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        queue<int> que;
        vector<int> indegree(V,0);
        
        vector<vector<int>> adj(V);
        
        for(auto &edge :edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            indegree[v]++;
        }
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                que.push(i);
            }
        }
        vector<int>result;
        while(!que.empty()){
            int u = que.front();
            result.push_back(u);
            que.pop();
            
            for(int &v: adj[u]){
                indegree[v]--;
                
                if(indegree[v]==0){
                    que.push(v);
                }
            }
        }
        return result;
    }
};
*/
//TC -> O(V+E)