//Number of Ways to Arrive at Destination
//https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/

/*
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        int MOD = 1e9 + 7;
        
        // Build adjacency list: node -> {neighbor, time}
        vector<vector<pair<int, int>>> adj(n);
        for (auto& road : roads) {
            int u = road[0], v = road[1], time = road[2];
            adj[u].push_back({v, time});
            adj[v].push_back({u, time});
        }

        // Min-heap storing {distance, node}
        priority_queue<pair<long long, int>, 
                       vector<pair<long long, int>>, 
                       greater<pair<long long, int>>> pq;

        vector<long long> dist(n, LLONG_MAX);
        vector<int> ways(n, 0);

        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});

        while (!pq.empty()) {
            auto [currTime, u] = pq.top();
            pq.pop();

            // Skip processing if we already found a shorter path to u
            if (currTime > dist[u]) continue;

            for (auto& [v, time] : adj[u]) {
                // Found a shorter path to neighbor v
                if (currTime + time < dist[v]) {
                    dist[v] = currTime + time;
                    ways[v] = ways[u];
                    pq.push({dist[v], v});
                } 
                // Found an additional shortest path to neighbor v
                else if (currTime + time == dist[v]) {
                    ways[v] = (ways[v] + ways[u]) % MOD;
                }
            }
        }

        return ways[n - 1];
    }
};
*/