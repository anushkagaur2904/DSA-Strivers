//TOPO SORT DFS
//https://www.geeksforgeeks.org/problems/topological-sort/1

/*
class Solution {
  public:
    void dfs(int node,int vis[], stack<int> &st, vector<vector<int>> &edges){
        vis[node]=1;
        for(auto it: edges[node]){
            if(!vis[it]){
                dfs(it,vis,st,edges);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        int vis[V]={0};
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,st,edges);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
*/


//GFG
/*
class Solution {
  public:

    void dfs(int node,
             vector<int>& vis,
             stack<int>& st,
             vector<int> adj[]) {

        vis[node] = 1;

        // Visit all neighbours
        for(auto it : adj[node]) {

            if(!vis[it]) {
                dfs(it, vis, st, adj);
            }
        }

        // Push after visiting all neighbours
        st.push(node);
    }

    vector<int> topoSort(int V, vector<vector<int>>& edges) {

        // Build adjacency list from edge list
        vector<int> adj[V];

        for(auto it : edges) {

            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
        }

        vector<int> vis(V, 0);

        stack<int> st;

        // DFS for all components
        for(int i = 0; i < V; i++) {

            if(!vis[i]) {
                dfs(i, vis, st, adj);
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
*/