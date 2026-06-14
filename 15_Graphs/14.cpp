//Course Schedule
//https://leetcode.com/problems/course-schedule/description/

/*
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int N = numCourses;

        vector<int> adj[N];
        vector<int> indegree(N, 0);

        // Build graph
        for(auto it : prerequisites) {

            int course = it[0];
            int prereq = it[1];

            // prereq -> course
            adj[prereq].push_back(course);

            indegree[course]++;
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
        return (count == N);
    }
};
*/