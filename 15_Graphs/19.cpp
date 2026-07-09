//Disjoint Set
//Union By Rank

/*
class DisjointSet {
    vector<int> rank, parent;

public:
    // Constructor
    DisjointSet(int n) {

        // Initially every node has rank 0
        rank.resize(n + 1, 0);

        // Parent array
        parent.resize(n + 1);

        // Every node is its own parent initially
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    // Find Ultimate Parent with Path Compression
    int findUPar(int node) {

        // If node is its own parent, return it
        if (node == parent[node])
            return node;

        // Path Compression
        return parent[node] = findUPar(parent[node]);
    }

    // Union By Rank
    void unionByRank(int u, int v) {

        // Find ultimate parents
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // Already in same component
        if (ulp_u == ulp_v)
            return;

        // Attach smaller rank tree under larger rank tree
        if (rank[ulp_u] < rank[ulp_v]) {

            parent[ulp_u] = ulp_v;
        }

        else if (rank[ulp_v] < rank[ulp_u]) {

            parent[ulp_v] = ulp_u;
        }

        // If both ranks are equal
        else {

            parent[ulp_v] = ulp_u;

            // Increase rank since height increases
            rank[ulp_u]++;
        }
    }
};
*/