//Subset Sum
//https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

//Recursion
/*
class Solution {
  public:
    bool solve(int n,int sum,vector<int>& arr){
        if(sum==0){
            return true;
        }
        if(n==0){
            return false;
        }
        bool skip = solve(n-1,sum,arr);
        bool take = false;
        
        if(arr[n-1] <=sum){
            take = solve(n-1,sum-arr[n-1],arr);
        }
        return skip || take;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        return solve(n,sum,arr);
    }
};
*/

//Memoization
/*
class Solution {
  public:
    int t[201][10001];
    bool solve(int n,int sum,vector<int>& arr){
        if(sum==0){
            return true;
        }
        if(n==0){
            return false;
        }
        if(t[n][sum]!=-1){
            return t[n][sum];
        }
        bool skip = solve(n-1,sum,arr);
        bool take = false;
        
        if(arr[n-1] <=sum){
            take = solve(n-1,sum-arr[n-1],arr);
        }
        return t[n][sum]=skip || take;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        memset(t,-1,sizeof(t));
        return solve(n,sum,arr);
    }
};
*/

//Bottom Up
/*
class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        
        vector<vector<bool>> t(n+1, vector<bool>(sum+1,false));
        
        for(int i=0;i<n+1;i++){
            t[i][0] = true;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                bool skip = t[i-1][j];
                bool take = false;
                if(arr[i-1]<=j){
                    take = t[i-1][j-arr[i-1]];
                }
                t[i][j] = take || skip;
            }
        }
        return t[n][sum];
    }

};
*/

//Space Optimised DP
/*
class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        
        vector<bool> prev(sum+1,false);//t[i-1]
        vector<bool> curr(sum+1,false);//t[i]
        
        prev[0] = true;
        curr[0] = true;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                bool skip = prev[j];
                bool take = false;
                if(arr[i-1]<=j){
                    take = prev[j-arr[i-1]];
                }
                curr[j] = take || skip;
            }
            prev=curr;
        }
        return prev[sum];
    }

};
*/