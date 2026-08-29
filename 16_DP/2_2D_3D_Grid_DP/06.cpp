//Minimum Falling Path Sum
//https://leetcode.com/problems/minimum-falling-path-sum/description/

//Recursion
/*
class Solution {
public:
    int n;
    int solve(vector<vector<int>>& matrix,int row,int col){
        if(row==n-1){
            return matrix[row][col];
        }
        int sum = matrix[row][col];
        int minSum = INT_MAX;

        if(row+1<n && col-1>=0){
            minSum = min(minSum, sum + solve(matrix,row+1,col-1));
        }
        if(row+1<n){
            minSum = min(minSum, sum + solve(matrix,row+1,col));
        }
        if(row+1<n && col+1<n){
            minSum = min(minSum, sum + solve(matrix,row+1,col+1));
        }
        
        return minSum;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n = matrix.size();//n*n

        int row = 0;//first row ke har column se dekho
        int result = INT_MAX;

        for(int col=0;col<n;col++){
            result = min(result,solve(matrix,row,col));
        }
        return result;
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;
    int t[101][101];
    int solve(vector<vector<int>>& matrix,int row,int col){
        if(row==n-1){
            return matrix[row][col];
        }
        if(t[row][col]!=-1){
            return t[row][col];
        }
        int sum = matrix[row][col];
        int minSum = INT_MAX;

        if(row+1<n && col-1>=0){
            minSum = min(minSum, sum + solve(matrix,row+1,col-1));
        }
        if(row+1<n){
            minSum = min(minSum, sum + solve(matrix,row+1,col));
        }
        if(row+1<n && col+1<n){
            minSum = min(minSum, sum + solve(matrix,row+1,col+1));
        }
        
        return minSum;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n = matrix.size();//n*n
        memset(t,-1,sizeof(t));

        int row = 0;//first row ke har column se dekho
        int result = INT_MAX;

        for(int col=0;col<n;col++){
            result = min(result,solve(matrix,row,col));
        }
        return result;
    }
};
*/

//3 alag alag loop se bachne ki approach
/*
class Solution {
public:
    int n;
    int solve(vector<vector<int>>& matrix,int row,int col){
        if(row==n-1){
            return matrix[row][col];
        }
        int sum = matrix[row][col];
        int minSum = INT_MAX;

        //col -1 0 1 hi ja rha hai
        for(int shift =-1;shift<=1;shift++){
            if(row+1<n && col+shift<n && col+shift>=0){
                minSum = min(minSum, sum + solve(matrix,row+1,col+shift));
            }
        }
        
        return minSum;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        n = matrix.size();//n*n

        int row = 0;//first row ke har column se dekho
        int result = INT_MAX;

        for(int col=0;col<n;col++){
            result = min(result,solve(matrix,row,col));
        }
        return result;
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> t(n,vector<int>(n));

        //populate first row exactly as matrix
        for(int col=0;col<n;col++){
            t[0][col] = matrix[0][col];
        }

        for(int row=1;row<n;row++){
            for(int col=0;col<n;col++){
                /*
                t[row-1][col-1] out of bound jaega when col=0
                t[row-1][col] ye toh safe cuz row=1 se start hua
                t[row-1][col+1] out of bound jayega when col = n-1
                */
               /*
                int a = INT_MAX;
                int b = INT_MAX;

                if(col-1>=0){
                    a = t[row-1][col-1];
                }
                if(col+1<n){
                    b = t[row-1][col+1];
                }

                t[row][col] = matrix[row][col] + min({t[row-1][col],a,b});
            }
        }
        
        int result = INT_MAX;
        int lastRow = n-1;

        for(int col=0;col<n;col++){
            result = min(result,t[lastRow][col]);
        }
        return result;
    }
};
*/