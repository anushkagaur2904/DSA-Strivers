//Maximum Sum Increasing Subsequence
//https://www.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

//Recursive
/*
class Solution {
public:
    int n;

    int solve(vector<int>& arr, int i, int prev) {

        if (i >= n)
            return 0;

        int take = 0;

        if (prev == -1 || arr[i] > arr[prev]) {
            take = arr[i] + solve(arr, i + 1, i);
        }

        int skip = solve(arr, i + 1, prev);

        return max(take, skip);
    }

    int maxSumIS(vector<int>& arr) {
        n = arr.size();
        return solve(arr, 0, -1);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;
    int dp[1001][1002];

    int solve(vector<int>& arr, int i, int prev) {

        if (i == n)
            return 0;

        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        int take = 0;

        if (prev == -1 || arr[i] > arr[prev]) {
            take = arr[i] + solve(arr, i + 1, i);
        }

        int skip = solve(arr, i + 1, prev);

        return dp[i][prev + 1] = max(take, skip);
    }

    int maxSumIS(vector<int>& arr) {
        n = arr.size();
        memset(dp, -1, sizeof(dp));
        return solve(arr, 0, -1);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int maxSumIS(vector<int>& arr) {

        int n = arr.size();

        vector<int> dp(n);

        int ans = 0;

        for (int i = 0; i < n; i++) {

            dp[i] = arr[i];

            for (int j = 0; j < i; j++) {

                if (arr[j] < arr[i]) {
                    dp[i] = max(dp[i], dp[j] + arr[i]);
                }
            }

            ans = max(ans, dp[i]);
        }

        return ans;
    }
};
*/