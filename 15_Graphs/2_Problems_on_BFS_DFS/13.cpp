//Bipartite Graph (DFS)
//https://leetcode.com/problems/is-graph-bipartite/description/

/*
class Solution {
public:

    bool dfs(int node,
             int col,
             vector<int>& color,
             vector<vector<int>>& graph) {

        color[node] = col;

        for(auto it : graph[node]) {

            if(color[it] == -1) {

                if(!dfs(it, !col, color, graph))
                    return false;
            }
            else if(color[it] == col) {

                return false;
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {

        int V = graph.size();

        vector<int> color(V, -1);

        for(int start = 0; start < V; start++) {

            if(color[start] == -1) {

                if(!dfs(start, 0, color, graph))
                    return false;
            }
        }

        return true;
    }
};
*/