//Number of provinces
//https://leetcode.com/problems/number-of-provinces/description/


//DFS
/*
class Solution {
public:
    int n;

    void dfs( unordered_map<int,vector<int>> &adj, int u, vector<bool> &visited){
        visited[u]=true;
        for(int &v: adj[u]){
            if(!visited[v]){
                dfs(adj,v,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();

        vector<bool> visited(n,false);

        //make graph
        unordered_map<int,vector<int>> adj;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int count =0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};
*/

//DFS without making adjacency list
/*
class Solution {
public:
    int n;

    void dfs(vector<vector<int>>& isConnected, int u, vector<bool> &visited){
        visited[u]=true;

        for(int v=0;v<n;v++){
            if(!visited[v] && isConnected[u][v]==1){
                dfs(isConnected,v,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();

        vector<bool> visited(n,false);

        int count =0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(isConnected,i,visited);
                count++;
            }
        }
        return count;
    }
};
*/

//BFS
/*
class Solution {
public:
    int n;

    void bfs( unordered_map<int,vector<int>> &adj, int u, vector<bool> &visited){
        queue<int> q;
        q.push(u);
        visited[u]=true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(int &v : adj[curr]){
                if(!visited[v]){
                    bfs(adj,v,visited);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();

        vector<bool> visited(n,false);

        //make graph
        unordered_map<int,vector<int>> adj;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int count =0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(adj,i,visited);
                count++;
            }
        }
        return count;
    }
};
*/

//BFS without making adjacency list
/*
class Solution {
public:
    int n;

    void bfs(vector<vector<int>>& isConnected, int u, vector<bool> &visited){
        queue<int> q;
        q.push(u);
        visited[u]=true;

        while(!q.empty()){
            int curr = q.front();
            q.pop();

            for(int v=0;v<n;v++){
                if(!visited[v] && isConnected[u][v]==1){
                    bfs(isConnected,v,visited);
                }
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();

        vector<bool> visited(n,false);

        int count =0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bfs(isConnected,i,visited);
                count++;
            }
        }
        return count;
    }
};
*/