// 0/1 Knapsack
//https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

//Recursion
/*
class Solution {
public:

    int solve(int i, int W, vector<int> &val, vector<int> &wt) {

        // No items left
        if (i == 0) {
            if (wt[0] <= W)
                return val[0];
            return 0;
        }

        int take = 0;

        if (wt[i] <= W) {
            take = val[i] + solve(i - 1, W - wt[i], val, wt);
        }

        int skip = solve(i - 1, W, val, wt);

        return max(take, skip);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        int n = val.size();

        return solve(n - 1, W, val, wt);
    }
};
*/

//Memoization
/*
class Solution {
public:

    int dp[1001][1001];

    int solve(int i, int W, vector<int> &val, vector<int> &wt) {

        if (i == 0) {
            if (wt[0] <= W)
                return val[0];
            return 0;
        }

        if (dp[i][W] != -1)
            return dp[i][W];

        int take = 0;

        if (wt[i] <= W) {
            take = val[i] + solve(i - 1, W - wt[i], val, wt);
        }

        int skip = solve(i - 1, W, val, wt);

        return dp[i][W] = max(take, skip);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        memset(dp, -1, sizeof(dp));

        int n = val.size();

        return solve(n - 1, W, val, wt);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        int n = val.size();

        vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= W; j++) {

                int take = 0;

                if (wt[i - 1] <= j) {
                    take = val[i - 1] + dp[i - 1][j - wt[i - 1]];
                }

                int skip = dp[i - 1][j];

                dp[i][j] = max(take, skip);
            }
        }

        return dp[n][W];
    }
};
*/

//Space Optimised DP
/*
class Solution {
public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        int n = val.size();

        // prev -> dp[i-1][...]
        // curr -> dp[i][...]
        vector<int> prev(W + 1, 0);
        vector<int> curr(W + 1, 0);

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= W; j++) {

                int take = 0;
                int skip = 0;

                // Take current item
                if (wt[i - 1] <= j) {
                    take = val[i - 1] + prev[j - wt[i - 1]];
                }

                // Skip current item
                skip = prev[j];

                curr[j] = max(take, skip);
            }

            // Move current row to previous row
            prev = curr;
        }

        return prev[W];
    }
};
*/