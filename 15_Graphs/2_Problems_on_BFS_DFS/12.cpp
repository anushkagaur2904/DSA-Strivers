//Bipartite Graph (DFS)
//https://leetcode.com/problems/is-graph-bipartite/description/

/*
class Solution {
public:

    bool checkBipartiteDFS(vector<vector<int>>& graph,int curr,vector<int> &color,int currColor){
        color[curr]=currColor;

        //ab jaate hai adjacent nodes pr
        for(int &v: graph[curr]){
            if(color[v]==color[curr]){
                return false;
            }
            if(color[v]==-1){
                int colorOfV = 1 - currColor;
                if(checkBipartiteDFS(graph,v,color,colorOfV)==false){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {

        int V = graph.size();

        vector<int> color(V, -1);

        //red = 1
        //green = 0

        for(int i=0;i<V;i++){
            if(color[i]==-1){
                if(checkBipartiteDFS(graph,i,color,1)==false){
                    return false;
                }
            }
        }

        return true;
    }
};
*/