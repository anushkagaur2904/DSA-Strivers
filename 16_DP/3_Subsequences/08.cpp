//Target Sum
//https://leetcode.com/problems/target-sum/description/

//Recursion
/*
class Solution {
public:

    int solve(vector<int>& nums, int target,int i, int currSum){
        if(i==nums.size()){
            if(currSum==target){
                return 1;//we found one way to reach target
            }
            else{
                return 0;
            }
        }

        int plus = solve(nums,target,i+1,currSum+nums[i]);
        int minus = solve(nums,target,i+1,currSum-nums[i]);

        return plus+minus;//total ways to reach target
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(nums,target,0,0);
    }
};
*/

//Memoization Approach 1
/*
class Solution {
public:

    int solve(vector<int>& nums, int target,int i, int currSum,unordered_map<string,int>& mp){
        if(i==nums.size()){
            if(currSum==target){
                return 1;//we found one way to reach target
            }
            else{
                return 0;
            }
        }

        string key = to_string(i) + "_" + to_string(currSum);

        if(mp.count(key)){
            return mp[key];//key mil gyi
        }

        int plus = solve(nums,target,i+1,currSum+nums[i],mp);
        int minus = solve(nums,target,i+1,currSum-nums[i],mp);

        return mp[key]=plus+minus;//total ways to reach target
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int> mp;
        return solve(nums,target,0,0,mp);
    }
};
*/

//Memoization Approach 2
/*
class Solution {
public:
    int S;
    int solve(vector<int>& nums, int target,int i, int currSum,vector<vector<int>>& t){
        if(i==nums.size()){
            if(currSum==target){
                return 1;//we found one way to reach target
            }
            else{
                return 0;
            }
        }

       if(t[i][currSum+S]!=-1){
            return t[i][currSum+S];
       }

        int plus = solve(nums,target,i+1,currSum+nums[i],t);
        int minus = solve(nums,target,i+1,currSum-nums[i],t);

        return t[i][currSum+S]=plus+minus;//total ways to reach target
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        S = accumulate(begin(nums),end(nums),0);//total sum stored in S
        vector<vector<int>> t(n+1,vector<int>(2*S+1,-1));
        return solve(nums,target,0,0,t);
    }
};
*/