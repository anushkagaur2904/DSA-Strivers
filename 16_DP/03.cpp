//Coin Change II
//https://leetcode.com/problems/coin-change-ii/description/

//RECURSIVE
/*
class Solution {
public:
    int n;
    int solve(int i,vector<int> &coins,int amount){
        if(amount==0){
            return 1;
        }
        if(i==n){
            return 0;
        }
        if(coins[i]>amount){
            return solve(i+1,coins,amount);
        }
        int take = solve(i,coins,amount-coins[i]);
        int skip = solve(i+1,coins,amount);

        return take+skip;
    }
    int change(int amount, vector<int>& coins) {
        n = coins.size();
        return solve(0,coins,amount);
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int n;
    int t[301][5001];
    int solve(int i,vector<int> &coins,int amount){
        if(amount==0){
            return 1;
        }
        if(i==n){
            return 0;
        }
        if(t[i][amount]!=-1){
            return t[i][amount];
        }
        if(coins[i]>amount){
            return t[i][amount]=solve(i+1,coins,amount);
        }
        int take = solve(i,coins,amount-coins[i]);
        int skip = solve(i+1,coins,amount);

        return t[i][amount]=take+skip;
    }
    int change(int amount, vector<int>& coins) {
        n = coins.size();
        memset(t,-1,sizeof(t));
        return solve(0,coins,amount);
    }
};
*/

//BOTTOM UP
/*
class Solution {
public:
    int change(int amount, vector<int>& coins) {

        int n = coins.size();

        // dp[i][j] = Number of ways to make amount j
        // using coins from index i to n-1
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

        // Base Case:
        // Amount 0 can always be made by choosing no coins
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        // Fill table from bottom to top
        for (int i = n - 1; i >= 0; i--) {

            for (int j = 1; j <= amount; j++) {

                int skip = dp[i + 1][j];

                int take = 0;

                if (coins[i] <= j) {
                    take = dp[i][j - coins[i]];
                }

                dp[i][j] = take + skip;
            }
        }

        return dp[0][amount];
    }
};
*/