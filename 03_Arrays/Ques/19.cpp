//Search in 2D matrix
//https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

/*
class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int i=0;
        int j=m-1;
        
        while(i<n && j>=0){
            if(mat[i][j]==x){
                return true;
            }
            if(mat[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
*/

//https://leetcode.com/problems/search-a-2d-matrix/description/

/*
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;

        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = (n*m)-1;

        while(low<=high){
            int mid = (low + (high-low)/2);
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};
*/