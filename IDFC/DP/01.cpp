//Grid Unique Paths
//https://leetcode.com/problems/unique-paths/description/

//RECURSIVE
/*
class Solution {
public:
    int solve(int i, int j, int m, int n){
        if(i==m-1 && j==n-1){
            return 1; //we found 1 path to reach [m-1][n-1]
        }
        if(i<0 || i>=m || j<0 || j>=n){
            return 0;
        }
        int right = solve(i,j+1,m,n);
        int down = solve(i+1,j,m,n);

        return right+down;
    }
    int uniquePaths(int m, int n) {
        return solve(0,0,m,n);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int solve(int i, int j, int m, int n, vector<vector<int>> &t){
        if(i==m-1 && j==n-1){
            return 1; //we found 1 path to reach [m-1][n-1]
        }
        if(i<0 || i>=m || j<0 || j>=n){
            return 0;
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }
        int right = solve(i,j+1,m,n,t);
        int down = solve(i+1,j,m,n,t);

        return t[i][j]=right+down;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> t(m+1,vector<int>(n+1,-1));
        return solve(0,0,m,n,t);
    }
};
*/

//BOTTOM UP
/*
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> t(m,vector<int>(n));
        //t[i][j] = total no. of ways to reach [i][j] from [0][0]

        t[0][0]=1;//total ways to reach 0,0 from 0,0

        //Fill 0th row
        for(int col=1;col<n;col++){
            t[0][col]=1;
        }
        //Fill 0th col
        for(int row=1;row<m;row++){
            t[row][0]=1;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                t[i][j]=t[i-1][j] + t[i][j-1];
            }
        }
        return t[m-1][n-1];
    }
};
*/