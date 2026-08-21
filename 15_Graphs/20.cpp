//Kruskal Algo
//TC => O(E logE)

/*
class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    // Find function with path compression
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    // Union function by rank
    void Union(int x, int y) {
        int x_parent = find(x);
        int y_parent = find(y);

        if (x_parent == y_parent)
            return;

        if (rank[x_parent] < rank[y_parent]) {
            parent[x_parent] = y_parent;
        } else if (rank[x_parent] > rank[y_parent]) {
            parent[y_parent] = x_parent;
        } else {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
    }

    // Kruskal's algorithm implementation
    int Kruskal(vector<vector<int>> &vec) {
        int sum = 0;
        for (auto &temp : vec) {
            int u = temp[0];
            int v = temp[1];
            int wt = temp[2];

            int parent_u = find(u);
            int parent_v = find(v);

            if (parent_u != parent_v) {
                Union(u, v);
                sum += wt;
            }
        }
        return sum;
    }

    // Function to find sum of weights of edges of the Minimum Spanning Tree
    int spanningTree(int V, vector<vector<int>> adj[]) {
        parent.resize(V);
        rank.resize(V, 0);

        for (int i = 0; i < V; i++) {
            parent[i] = i;
        }

        // Convert adjacency list to edge list {u, v, wt}
        vector<vector<int>> vec;

        for (int u = 0; u < V; u++) {
            for (auto &temp : adj[u]) {
                int v = temp[0];
                int wt = temp[1];

                vec.push_back({u, v, wt});
            }
        }

        // Custom comparator to sort edges by weight in ascending order
        auto comparator = [](vector<int>& vec1, vector<int>& vec2) {
            return vec1[2] < vec2[2];
        };

        sort(vec.begin(), vec.end(), comparator);

        return Kruskal(vec);
    }
};
*/