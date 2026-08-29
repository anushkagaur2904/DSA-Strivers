//Number of Islands
//https://leetcode.com/problems/number-of-islands/description/

//Number of Distinct Islands
//https://leetcode.com/problems/number-of-islands/description/
//https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1

//++++++++GFG+++++++++
/*
class Solution {
public:

    void dfs(int row, int col,
             vector<vector<int>>& vis,
             vector<vector<int>>& grid,
             vector<pair<int,int>>& vec,
             int row0, int col0) {

        int n = grid.size();
        int m = grid[0].size();

        vis[row][col] = 1;

        vec.push_back({row - row0, col - col0});

        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, -1, 0, 1};

        for(int i = 0; i < 4; i++) {

            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if(nrow >= 0 && nrow < n &&
               ncol >= 0 && ncol < m &&
               !vis[nrow][ncol] &&
               grid[nrow][ncol] == 1) {

                dfs(nrow, ncol, vis, grid,
                    vec, row0, col0);
            }
        }
    }

    int countDistinctIslands(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        set<vector<pair<int,int>>> st;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(!vis[i][j] && grid[i][j] == 1) {

                    vector<pair<int,int>> vec;

                    dfs(i, j, vis, grid,
                        vec, i, j);

                    st.insert(vec);
                }
            }
        }

        return st.size();
    }
};
*/

//+++++++LEETCODE++++++
/*
class Solution {
public:
    int m,n;

    void dfs(vector<vector<char>>& grid,int i,int j){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]!='1'){
            return;
        }
        grid[i][j]='0';//mark visited

        dfs(grid,i+1,j);
        dfs(grid,i-1,j);
        dfs(grid,i,j+1);
        dfs(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int islands=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,i,j);
                    islands++;
                }
            }
        }
        return islands;
    }
};
*/