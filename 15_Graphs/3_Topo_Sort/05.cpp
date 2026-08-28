//Course Schedule II
//https://leetcode.com/problems/course-schedule-ii/description/

//BFS
/*
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int N = numCourses;

        vector<int> adj[N];
        vector<int> indegree(N, 0);
        vector<int> result;

        // Build graph
        for(auto it : prerequisites) {

            int a = it[0];
            int b = it[1];

            // b->a
            adj[b].push_back(a);

            indegree[a]++;
        }

        queue<int> q;

        // Push all nodes with indegree 0
        for(int i = 0; i < N; i++) {
            if(indegree[i] == 0) {
                result.push_back(i);
                q.push(i);
            }
        }

        int count = 0;

        while(!q.empty()) {

            int node = q.front();
            q.pop();

            count++;

            for(auto it : adj[node]) {

                indegree[it]--;

                if(indegree[it] == 0) {
                    result.push_back(it);
                    q.push(it);
                }
            }
        }

        // If all courses processed, no cycle exists
        if(count==N){
            return result;
        }
        return {};
    
    }
};
*/

//DFS
//Mix of both topo sort and detect cycle using DFS
/*
class Solution {
public:
    bool hasCycle;

    void DFS(vector<vector<int>> &adj,int u,vector<bool> &visited,stack<int> &st,vector<int> &inRecursion){
        visited[u]=true;
        inRecursion[u]=true;

        for(int &v:adj[u]){
            if(inRecursion[v]==true){
                hasCycle = true;
                return;
            }
            if(!visited[v]){
                DFS(adj,v,visited,st,inRecursion);
            }
        }
        st.push(u);
        inRecursion[u]=false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int N = numCourses;

        vector<vector<int>> adj(N);
        vector<int> inRecursion(N,false);
        vector<bool> visited(N,false);

        // Build graph
        for(auto it : prerequisites) {

            int a = it[0];
            int b = it[1];

            // b->a
            adj[b].push_back(a);

        }

        stack<int> st;

        for(int i=0;i<N;i++){
            if(!visited[i]){
                DFS(adj,i,visited,st,inRecursion);
            }
        }
        if(hasCycle==true){
            return {};
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