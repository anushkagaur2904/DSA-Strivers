//MST using Prim's Algo
//https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1

/*
class Solution {
  public:
    
    typedef pair<int,int> P;
    //function to find sum of weights of edges of MST
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        //use a dynamically sized adjacency list

        // Convert edge list -> adjacency list
        for(auto &it : edges) {

            int u = it[0];
            int v = it[1];
            int wt = it[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt}); // undirected graph
        }

        priority_queue<P,vector<P>,greater<P>> pq;
        //{wt,node}
        
        pq.push({0,0});
        vector<bool> inMST(V,false);//visited check krna
        int sum = 0;
        
        while(!pq.empty()){
            auto p = pq.top();
            pq.pop();
            
            int wt = p.first;
            int node = p.second;
            
            if(inMST[node]==true){
                continue;
            }
            
            inMST[node]=true;//added to our MST
            sum+=wt;
            
            for(auto &tmp: adj[node]){
                int neighbour = tmp.first;
                int neighbour_wt = tmp.second;
                
                if(inMST[neighbour]==false){
                    pq.push({neighbour_wt,neighbour});
                }
            }
        }
        return sum;
    }
};
*/