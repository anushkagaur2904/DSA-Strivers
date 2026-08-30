//Find Eventual Safe States
//https://leetcode.com/problems/find-eventual-safe-states/description/

//DFS
/*
class Solution {
public:

    bool isCycleDFS(vector<vector<int>>& graph,int u,vector<bool>& visited,vector<bool>& inRecursion){
        visited[u]=true;
        inRecursion[u]=true;

        for(int &v: graph[u]){
            //if not visited then we check for cycle in DFS
            if(visited[v]==false && isCycleDFS(graph,v,visited,inRecursion)){
                return true;
            }
            else if(inRecursion[v]==true){
                return true;
            }
        }
        inRecursion[u]=false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();

        vector<bool> visited(V,false);
        vector<bool> inRecursion(V,false);

        for(int i=0;i<V;i++){
            if(!visited[i]){
                isCycleDFS(graph,i,visited,inRecursion);
            }
        }
        vector<int> safeNodes;
        for(int i=0;i<V;i++){
            if(inRecursion[i]==false){
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};
*/

//BFS
/*
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V = graph.size();

        vector<vector<int>> adj(V);
        vector<int> indegree(V,0);

        for(int u=0;u<V;u++){
            for(int &v: graph[u]){
                adj[v].push_back(u);//reverse graph
                indegree[u]++;
            }
        }

        queue<int> que;

        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                que.push(i);
            }
        }

        vector<bool> isSafe(V,false);
        while(!que.empty()){
            int u = que.front();
            que.pop();
            isSafe[u]=true;

            for(int &v:adj[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    que.push(v);
                }
            }
        }
        vector<int> safeNodes;
        for(int i=0;i<V;i++){
            if(isSafe[i]==true){
                safeNodes.push_back(i);
            }
        }
        return safeNodes;
    }
};
*/