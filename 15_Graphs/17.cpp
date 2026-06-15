//Floyd Warshall Algo
//https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1

/*
class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {

        int n = dist.size();

        // Convert -1 to INF
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < n; j++) {

                if(dist[i][j] == -1)
                    dist[i][j] = 1e9;

                if(i == j)
                    dist[i][j] = 0;
            }
        }

        // Floyd Warshall
        for(int via = 0; via < n; via++) {

            for(int i = 0; i < n; i++) {

                for(int j = 0; j < n; j++) {

                    if(dist[i][via] != 1e9 &&
                       dist[via][j] != 1e9) {

                        dist[i][j] = min(
                            dist[i][j],
                            dist[i][via] + dist[via][j]
                        );
                    }
                }
            }
        }

        // Convert INF back to -1
        for(int i = 0; i < n; i++) {

            for(int j = 0; j < n; j++) {

                if(dist[i][j] == 1e9)
                    dist[i][j] = -1;
            }
        }
    }
};
*/