//Floyd Warshall Algo
//https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1

/*
class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n = dist.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][j]==-1){//agar nodes ke beech edges hai
                    dist[i][j]=100000;
                }
            }
        }
        
        for(int via=0;via<n;via++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dist[i][j] = min(dist[i][j],dist[i][via]+dist[via][j]);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][j]==100000){//vapas edges theek krdo
                    dist[i][j]=-1;
                }
            }
        }
        
    }
};
*/

/*
class Solution {
public:
    void floydWarshall(vector<vector<int>>& dist) {
        int n = dist.size();

        const int INF = 1e8;

        for(int via = 0; via < n; via++) {
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {

                    // Only update if both paths actually exist
                    if(dist[i][via] != INF &&
                       dist[via][j] != INF) {

                        dist[i][j] = min(
                            dist[i][j],
                            dist[i][via] + dist[via][j]
                        );
                    }
                }
            }
        }
    }
};
*/

//TC -> O(N^3)