//Triangle
//https://leetcode.com/problems/triangle/description/

//Recursion
/*
class Solution {
public:
    int n;
    int solve(vector<vector<int>>& triangle,int row,int col){
        if(row==n-1){
            return triangle[row][col];
        }
        int minPathSum = triangle[row][col] + min(solve(triangle,row+1,col),solve(triangle,row+1,col+1));

        return minPathSum;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        n = triangle.size();
        return solve(triangle,0,0);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int t[201][201];
    int n;
    int solve(vector<vector<int>>& triangle, int row, int col) {
        if (row == n-1)
            return triangle[row][col];

        if(t[row][col] != INT_MAX)
            return t[row][col];
        
        int minPath = triangle[row][col] + 
                      min(solve(triangle, row + 1, col),
                          solve(triangle, row + 1, col + 1));

        return t[row][col] = minPath;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        n = triangle.size();
       
        for (int i = 0; i < 201; i++) {
            for (int j = 0; j < 201; j++) {
                t[i][j] = INT_MAX;
            }
        }
        return solve(triangle, 0, 0);
    }
};
*/

//BOTTOM UP
/*
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> t = triangle;
        //t[i][j] = min path sum from [i][j] to bottom

        for(int row=n-2;row>=0;row--){
            for(int col=0;col<=row;col++){
                t[row][col] = t[row][col] + min(t[row+1][col],t[row+1][col+1]);
            }
        }
        return t[0][0];
    }
};
*/

//OPTIMISED BOTTOM UP
/*
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> t = triangle[n-1]; //SC=> O(N)

        for(int row=n-2;row>=0;row--){
            for(int col=0;col<=row;col++){
                t[col] = triangle[row][col] + min(t[col],t[col+1]);
            }
        }
        return t[0];
    }
};
*/

//Approach 4
/*
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        for(int row=1;row<n;row++){
            for(int col=0;col<=row;col++){
                int prev_row_up = triangle[row-1][min(col,(int)triangle[row-1].size()-1)];

                int prev_row_left = triangle[row-1][max(col-1,0)];

                triangle[row][col] = triangle[row][col] + min(prev_row_up,prev_row_left);
            }
        }
        return *min_element(begin(triangle[n-1]),end(triangle[n-1]));
        //last row mein sbse minimum element
    }
};
*/
