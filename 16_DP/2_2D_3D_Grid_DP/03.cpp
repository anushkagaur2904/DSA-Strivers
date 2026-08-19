//Unique Paths II
//https://leetcode.com/problems/unique-paths-ii/description/

//RECURSIVE
/*
class Solution {
public:
    int m,n;

    int solve(int i,int j,vector<vector<int>>& obstacleGrid){
        if(i==m-1 && j==n-1){
            return 1; //we found 1 path to reach [m-1][n-1]
        }
        if(i<0 || i>=m || j<0 || j>=n || obstacleGrid[i][j]==1){
            return 0;
        }
        int right = solve(i,j+1,obstacleGrid);
        int down = solve(i+1,j,obstacleGrid);

        return right+down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();

        return solve(0,0,obstacleGrid);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int m, n;
    int t[101][101];
    
    int solve(vector<vector<int>>& obstacleGrid, int i, int j) {
        
        if(i < 0 || i >= m || j < 0 || j >= n || obstacleGrid[i][j] != 0) {
            return 0;
        }
        
        if(t[i][j] != -1)
            return t[i][j];
        
        if(i == m-1 && j == n-1)
            return 1;
        
        //Why we are not making [i][j] visited ?
        //Because robot can only move down or right so it will never visit any visited cell again
        //int temp = obstacleGrid[i][j];
        //obstacleGrid[i][j] = -1;
        
        int right = solve(obstacleGrid, i, j+1);
        int down  = solve(obstacleGrid, i+1, j);
        
        //obstacleGrid[i][j] = temp;
        
        return t[i][j] = right + down;
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();
        
        memset(t, -1, sizeof(t));
        
        return solve(obstacleGrid, 0, 0);
    }
};
*/

//TABULATION
/*
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> t(m,vector<int>(n,0));

        //fill first row
        for(int col=0;col<n;col++){
            if(col>=1 && grid[0][col-1]==1){
                t[0][col]=0;
                grid[0][col]=1;//jisse aage vale ko bhi pta chle ki ye unreachable hai
            }
            else if(grid[0][col]==1){
                t[0][col]=0;
            }
            else{
                t[0][col]=1;
            }
        }

        //fill first column
        for(int row=0;row<m;row++){
            if(row>0 && grid[row-1][0]==1){
                t[row][0]=0;
                grid[row][0]=1;
            }
            else if(grid[row][0]==1){
                t[row][0]=0;
            }
            else{
                t[row][0]=1;
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(grid[i][j]==1){
                    t[i][j]=0;
                }
                else{
                    t[i][j] = t[i-1][j] + t[i][j-1];
                }
            }
        }

        return t[m-1][n-1];
    }
};
*/