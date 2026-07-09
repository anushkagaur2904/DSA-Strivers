// 0/1 Knapsack Memoization
//https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

/*
class Solution {
public:

    int solve(int n, int W, vector<int> &val, vector<int> &wt,
              vector<vector<int>> &dp) {

        // Base Case
        if(n == 0 || W == 0)
            return 0;

        // Already computed
        if(dp[n][W] != -1)
            return dp[n][W];

        // Pick or Not Pick
        if(wt[n-1] <= W) {

            return dp[n][W] = max(
                val[n-1] + solve(n-1, W-wt[n-1], val, wt, dp),
                solve(n-1, W, val, wt, dp)
            );
        }

        // Cannot pick
        return dp[n][W] = solve(n-1, W, val, wt, dp);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        int n = wt.size();

        vector<vector<int>> dp(n+1, vector<int>(W+1, -1));

        return solve(n, W, val, wt, dp);
    }
};
*/