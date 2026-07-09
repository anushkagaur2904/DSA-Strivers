//Coin Change I
//https://leetcode.com/problems/coin-change/description/

//RECURSIVE
/*
class Solution {
public:
    int solve(int index,int amount,vector<int> &coins){
        //Base Case
        if(index==0){
            //if amount can be formed using only coins[0]
            if(amount%coins[0]==0){
                return amount/coins[0];
            }
            return 1e9;//impossible
        }
        //dont take current coin
        int notTake = solve(index-1,amount,coins);
        //take current coin
        int take = 1e9;
        if(coins[index]<=amount){
            take = 1 + solve(index,amount-coins[index],coins);
        }
        return min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int ans = solve(n-1,amount,coins);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};
*/

//MEMOIZATION
/*
class Solution {
public:
    int solve(int index,int amount,vector<int> &coins,vector<vector<int>> &t){
        //Base Case
        if(index==0){
            //if amount can be formed using only coins[0]
            if(amount%coins[0]==0){
                return amount/coins[0];
            }
            return 1e9;//impossible
        }
        if(t[index][amount]!=-1){
            return t[index][amount];
        }
        //dont take current coin
        int notTake = solve(index-1,amount,coins,t);

        //take current coin
        int take = 1e9;
        if(coins[index]<=amount){
            take = 1 + solve(index,amount-coins[index],coins,t);
        }
        return t[index][amount]= min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> t(n,vector<int>(amount+1,-1));
        int ans = solve(n-1,amount,coins,t);
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
};
*/

//BOTTOM UP TABULATION
/*
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();

        vector<vector<int>> dp(n, vector<int>(amount + 1, 0));

        // Base Case
        for (int T = 0; T <= amount; T++) {

            if (T % coins[0] == 0)
                dp[0][T] = T / coins[0];
            else
                dp[0][T] = 1e9;   // Impossible
        }

        // Fill the DP table
        for (int ind = 1; ind < n; ind++) {

            for (int T = 0; T <= amount; T++) {

                // Don't take current coin
                int notTake = dp[ind - 1][T];

                // Take current coin
                int take = 1e9;

                if (coins[ind] <= T)
                    take = 1 + dp[ind][T - coins[ind]];

                dp[ind][T] = min(take, notTake);
            }
        }

        int ans = dp[n - 1][amount];

        if (ans >= 1e9)
            return -1;

        return ans;
    }
};
*/