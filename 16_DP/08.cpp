//Matrix Chain Multiplication(MCM)
//https://www.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1

//Recursive
/*
class Solution {
  public:
    int solve(vector<int> &arr,int i,int j){
        //Base Case : only one matrix or no elements
        if(i>=j){
            return 0;
        }
        int mn = INT_MAX;
        
        //try every possible partition
        for(int k=i;k<=j-1;k++){
            int temp = solve(arr,i,k) 
                       + solve(arr,k+1,j) 
                       + arr[i-1] * arr[k] * arr[j];
            mn = min(mn,temp);
        }
        return mn;
    }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n = arr.size();
        return solve(arr,1,n-1);
        //i = 1 , j = n-1
    }
};
*/

//Memoization
/*
class Solution {
  public:
    int t[101][101];
    
    int solve(vector<int> &arr,int i,int j){
        //Base Case : only one matrix or no elements
        if(i>=j){
            return 0;
        }
        
        if(t[i][j]!=-1){
            return t[i][j];
        }
        
        int mn = INT_MAX;
        
        //try every possible partition
        for(int k=i;k<=j-1;k++){
            int temp = solve(arr,i,k) 
                       + solve(arr,k+1,j) 
                       + arr[i-1] * arr[k] * arr[j];
            mn = min(mn,temp);
        }
        return t[i][j]=mn;
    }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        memset(t,-1,sizeof(t));
        int n = arr.size();
        return solve(arr,1,n-1);
        //i = 1 , j = n-1
    }
};
*/

