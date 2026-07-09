//Kruskal Algo
//https://www.geeksforgeeks.org/problems/minimum-spanning-tree-kruskals-algorithm/1

/*
class DisjointSet {
    vector<int> parent, size;

public:
    DisjointSet(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v)
            return;

        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution {
public:
    int kruskalsMST(int V, vector<vector<int>> &edges) {

        // Sort edges according to weight
        // Edge format = {u, v, wt}
        sort(edges.begin(), edges.end(),
             [](vector<int> &a, vector<int> &b) {
                 return a[2] < b[2];
             });

        DisjointSet ds(V);

        int mstWt = 0;

        for (auto &it : edges) {

            int u = it[0];
            int v = it[1];
            int wt = it[2];

            // Include edge only if it doesn't form a cycle
            if (ds.findUPar(u) != ds.findUPar(v)) {

                mstWt += wt;

                ds.unionBySize(u, v);
            }
        }

        return mstWt;
    }
};
*/