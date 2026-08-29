//Minimum Path Sum in Grid
//https://leetcode.com/problems/minimum-path-sum/description/

//Recursion
/*
class Solution {
public:
    int solve(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }

        if(i==m-1){//can only go right
            return grid[i][j] + solve(grid,i,j+1,m,n);
        }
        else if(j==n-1){//can only go down
            return grid[i][j] + solve(grid,i+1,j,m,n);
        }
        else{
            return grid[i][j] + min(solve(grid,i,j+1,m,n),solve(grid,i+1,j,m,n));
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        return solve(grid,0,0,m,n);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int t[201][201];
    int solve(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }

        if(t[i][j]!=-1){
            return t[i][j];
        }

        if(i==m-1){//can only go right
            return t[i][j] = grid[i][j] + solve(grid,i,j+1,m,n);
        }
        else if(j==n-1){//can only go down
            return t[i][j] = grid[i][j] + solve(grid,i+1,j,m,n);
        }
        else{
            return t[i][j] = grid[i][j] + min(solve(grid,i,j+1,m,n),solve(grid,i+1,j,m,n));
        }
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        memset(t,-1,sizeof(t));
        return solve(grid,0,0,m,n);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> t(m,vector<int>(n));

        //t[i][j] min path sum to reach [i][j] from [0][0]

        t[0][0] = grid[0][0];

        //fill 1st row
        for(int col=1;col<n;col++){
            t[0][col] = grid[0][col] + t[0][col-1];
        }

        //fill 1st col
        for(int row=1;row<m;row++){
            t[row][0] = grid[row][0] + t[row-1][0];
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                t[i][j] = grid[i][j] + min(t[i-1][j],t[i][j-1]);
            }
        }
        return t[m-1][n-1];
    }
};
*/