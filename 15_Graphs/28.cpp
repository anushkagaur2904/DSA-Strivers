//Network Delay Time 
//https://leetcode.com/problems/network-delay-time/description/

/*
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        // Build adjacency list: node -> list of {neighbor, weight}
        unordered_map<int, vector<pair<int, int>>> adj;
        for (auto &vec : times) {
            int u = vec[0];
            int v = vec[1];
            int w = vec[2];
            adj[u].push_back({v, w});
        }

        // Min-heap priority queue: stores {distance, node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // 1-based indexing for n nodes (1 to n)
        vector<int> result(n + 1, INT_MAX);

        result[k] = 0;
        pq.push({0, k});

        while (!pq.empty()) {
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for (auto &vec : adj[node]) {
                int adjNode = vec.first;
                int dist = vec.second;

                if (d + dist < result[adjNode]) {
                    result[adjNode] = d + dist;
                    pq.push({d + dist, adjNode});
                }
            }
        }

        // Find max time taken among all reachable nodes
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (result[i] == INT_MAX)
                return -1; // Node was unreachable
            ans = max(ans, result[i]);
        }

        return ans;
    }
};
*/