//TOPO SORT DFS
//https://www.geeksforgeeks.org/problems/topological-sort/1

/*
class Solution {
  public:
    void DFS(vector<vector<int>> &adj,int u,vector<bool> &visited, stack<int> &st){
        visited[u]=true;
        
        //pehle mere ('u' ke node ke) baccho ko daalo
        for(int &v :adj[u]){
            if(!visited[v]){
                DFS(adj,v,visited,st);
            }
        }
        //ab mujhe daalo stack mein
        st.push(u);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<bool> visited(V,false);
        stack<int> st;
        
        vector<vector<int>> adj(V);
        
        for(auto &edge :edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
        }
        for(int i=0;i<V;i++){
            if(!visited[i]){
                DFS(adj,i,visited,st);
            }
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
    }
};
*/