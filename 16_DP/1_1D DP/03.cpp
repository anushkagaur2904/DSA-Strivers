//Maximum Sum of Non-Adjacent Elements
//House Robber
//https://leetcode.com/problems/house-robber/description/

//RECURSION
/*
class Solution {
public:
    int f(int index,vector<int>& nums){
        if(index==0) return nums[index];
        if(index<0) return 0;

        int pick = nums[index] + f(index-2,nums);
        int notPick = 0 + f(index-1,nums);

        return max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        return f(n-1,nums);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int f(int index,vector<int>& nums,vector<int> &dp){
        if(index==0) return nums[index];
        if(index<0) return 0;
        if(dp[index]!=-1) return dp[index];
        
        int pick = nums[index] + f(index-2,nums,dp);
        int notPick = 0 + f(index-1,nums,dp);

        return dp[index]= max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return f(n-1,nums,dp);
    }
};
*/

//TABULATION
/*
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,0);
        dp[0]=nums[0];

        for(int i=1;i<n;i++){
            int take = nums[i];
            if(i>1){
                take+=dp[i-2];
            }
            int notTake = 0 + dp[i-1];
            dp[i] = max(take,notTake);
        }
        return dp[n-1];
    }
};
*/

//SPACE OPTIMIZATION
/*
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev1 = nums[0]; //i-1
        int prev2=0; //i-2

        for(int i=1;i<n;i++){
            int take = nums[i];
            if(i>1){
                take+=prev2;
            }
            int notTake = 0 + prev1;
            int curr = max(take,notTake);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};
*/