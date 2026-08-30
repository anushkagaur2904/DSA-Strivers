//Count Subsets with Sum K
//https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1

//Recursion
/*
class Solution {
  public:
    int solve(int n,int target,vector<int>& arr){
        if(n==0){//{1,2,0,0,0} target=3 aisi type ki arrays
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        int skip = solve(n-1,target,arr);
        
        int take = 0;
        if(arr[n-1]<=target){
            take = solve(n-1,target-arr[n-1],arr);
        }
        return take+skip;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        return solve(n,target,arr);
    }
};
*/

//Memoization
/*
class Solution {
  public:
    int t[1001][1001];
    int solve(int n,int target,vector<int>& arr){
        if(n==0){//{1,2,0,0,0} target=3 aisi type ki arrays
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        if(t[n][target]!=-1){
            return t[n][target];
        }
        
        int skip = solve(n-1,target,arr);
        
        int take = 0;
        if(arr[n-1]<=target){
            take = solve(n-1,target-arr[n-1],arr);
        }
        return t[n][target]=take+skip;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        memset(t,-1,sizeof(t));
        
        return solve(n,target,arr);
    }
};
*/

//BOTTOM UP
/*
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        vector<vector<int>> t(n+1,vector<int>(target+1,0));
        
        t[0][0]=1; //0 element se 0 sum ban hi jayega
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<=target;j++){
                int skip = t[i-1][j];
                
                int take = 0;
                if(arr[i-1]<=j){
                    take = t[i-1][j-arr[i-1]];
                }
                
                t[i][j] = take+skip;
            }
        }
        
        return t[n][target];
    }
};
*/

//Space Optimised 
/*
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        vector<int> curr(target+1,0);//t[i]
        vector<int> prev(target+1,0);//t[i-1]
        
        prev[0]=1; //0 element se 0 sum ban hi jayega
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<=target;j++){
                int skip = prev[j];
                
                int take = 0;
                if(arr[i-1]<=j){
                    take = prev[j-arr[i-1]];
                }
                
                curr[j] = take+skip;
            }
            prev=curr;
        }
        
        return prev[target];
    }
};
*/