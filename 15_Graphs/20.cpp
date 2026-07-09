//Disjoint Set
//Union By Size

/*
#include <bits/stdc++.h>
using namespace std;

class DisjointSet {

    vector<int> parent, rank, size;

public:

    // Constructor
    DisjointSet(int n) {

        rank.resize(n + 1, 0);

        // Initially every component has size = 1
        size.resize(n + 1, 1);

        parent.resize(n + 1);

        // Every node is its own parent
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    // Find Ultimate Parent (Path Compression)
    int findUPar(int node) {

        if (node == parent[node])
            return node;

        return parent[node] = findUPar(parent[node]);
    }

    // ---------------- UNION BY RANK ----------------
    void unionByRank(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // Already in same component
        if (ulp_u == ulp_v)
            return;

        // Attach smaller rank tree below larger rank tree
        if (rank[ulp_u] < rank[ulp_v]) {

            parent[ulp_u] = ulp_v;
        }

        else if (rank[ulp_v] < rank[ulp_u]) {

            parent[ulp_v] = ulp_u;
        }

        else {

            parent[ulp_v] = ulp_u;

            // Increase rank
            rank[ulp_u]++;
        }
    }

    // ---------------- UNION BY SIZE ----------------
    void unionBySize(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // Already in same component
        if (ulp_u == ulp_v)
            return;

        // Attach smaller component to larger component
        if (size[ulp_u] < size[ulp_v]) {

            parent[ulp_u] = ulp_v;

            // Update size
            size[ulp_v] += size[ulp_u];
        }

        else {

            parent[ulp_v] = ulp_u;

            // Update size
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    DisjointSet ds(7);

    ds.unionBySize(1, 2);
    ds.unionBySize(2, 3);
    ds.unionBySize(4, 5);
    ds.unionBySize(6, 7);
    ds.unionBySize(5, 6);

    // Check if 3 and 7 belong to same component
    if (ds.findUPar(3) == ds.findUPar(7))
        cout << "Same Component\n";
    else
        cout << "Different Component\n";

    // Connect the two components
    ds.unionBySize(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7))
        cout << "Same Component\n";
    else
        cout << "Different Component\n";

    return 0;
}
*/