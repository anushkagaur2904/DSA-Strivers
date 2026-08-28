//Course Schedule I
//https://leetcode.com/problems/course-schedule/description/


//BFS 
/*
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int N = numCourses;

        vector<int> adj[N];
        vector<int> indegree(N, 0);

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
                    q.push(it);
                }
            }
        }

        // If all courses processed, no cycle exists
        if(count==N){
            return true;
        }
        return false;
    }
};
*/

//DFS
/*
class Solution {
public:
    bool isCycleDFS(vector<vector<int>> &adj,int u,vector<bool> &visited, vector<bool> &inRecursion){
        visited[u]=true;
        inRecursion[u]=true;
        
        for(int &v : adj[u]){
            //if not visited then we check for cycle in DFS
            if(visited[v]==false && isCycleDFS(adj,v,visited,inRecursion)){
                return true;
            }
            else if(inRecursion[v]==true){
                return true;
            }
        }
        inRecursion[u]=false;
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int N = numCourses;

        vector<vector<int>> adj(N);

        // Build graph
        for(auto it : prerequisites) {

            int a = it[0];
            int b = it[1];

            // b->a
            adj[b].push_back(a);

        }
        vector<bool> visited(N,false);
        vector<bool> inRecursion(N,false);

        for(int i=0;i<N;i++){
            if(!visited[i] && isCycleDFS(adj,i,visited,inRecursion)){
                return false;//cant complete course cuz cycle exists
            }
        }
        return true;//cycle does not exist mtlb kr skte hai course
    }
};

*/