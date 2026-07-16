//Longest Increasing Subsequence
//https://leetcode.com/problems/longest-increasing-subsequence/

//RECURSIVE
/*
class Solution {
public:
    int n;
    int solve(vector<int>& nums,int i,int prev){
        if(i>=n){
            return 0;
        }
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
            take = 1 + solve(nums,i+1,i);
        }
        int skip = solve(nums,i+1,prev);
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        return solve(nums,0,-1);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int n;
    int t[2501][2501];
    int solve(vector<int>& nums,int i,int prev){
        if(i>=n){
            return 0;
        }
        if(prev!=-1 && t[i][prev]!=-1){
            return t[i][prev];
        }
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
            take = 1 + solve(nums,i+1,i);
        }
        int skip = solve(nums,i+1,prev);
        if(prev!=-1){
            t[i][prev]= max(take,skip);
        }
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        memset(t,-1,sizeof(t));
        return solve(nums,0,-1);
    }
};
*/

//BOTTOM UP
/*
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size();

        // t[i] = Length of LIS ending at index i
        vector<int> t(n, 1);

        int maxLIS = 1;

        // Try making every element the ending element of LIS
        for (int i = 0; i < n; i++) {

            // Check all previous elements
            for (int j = 0; j < i; j++) {

                // If nums[i] can extend the LIS ending at j
                if (nums[j] < nums[i]) {

                    t[i] = max(t[i], t[j] + 1);
                }
            }

            // Update the overall maximum LIS length
            maxLIS = max(maxLIS, t[i]);
        }

        return maxLIS;
    }
};
*/

//PATIENCE SORTING(LAZY SORTING)
/*
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int> sorted;

        for (int i = 0; i < nums.size(); i++) {

            // Find the first element >= nums[i]
            auto it = lower_bound(sorted.begin(), sorted.end(), nums[i]);

            // If nums[i] is greater than every element,
            // extend the LIS
            if (it == sorted.end()) {
                sorted.push_back(nums[i]);
            }
            // Otherwise replace the first element >= nums[i]
            else {
                *it = nums[i];
            }
        }

        return sorted.size();
    }
};
*/