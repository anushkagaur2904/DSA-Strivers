//Best time to buy and sell stock IV
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/

//Using Buy and sell stock III code
/*
class Solution {
public:
    int n;
    int maxProfit(int k, vector<int>& prices) {
        n = prices.size();
        vector<vector<int>> prev(2,vector<int>(k+1,0));
        vector<vector<int>> curr(2,vector<int>(k+1,0));

        for(int index = n-1;index >= 0;index--){
            for(int buy = 0 ;buy <= 1;buy++){
                for(int cap = 1;cap <= k;cap++){//cuz cap = 0 vala -1 ho jayega agar cap-1 krege toh
                    if(buy==1){
                        curr[buy][cap]=max(-prices[index] + prev[0][cap],0 + prev[1][cap]);
                    }
                    else{
                        curr[buy][cap]=max(prices[index] + prev[1][cap-1],0 + prev[0][cap]);
                    }
                }
            }
            prev=curr;
        }
        return curr[1][k];
    }
};
*/

//Recursion
/*
class Solution {
public:
    int n;

    int f(int index,int transactionNo, vector<int>& prices,int k){
        if(index==n || transactionNo == 2*k){
            return 0;
        }
        if(transactionNo % 2 == 0){
            //buy
            return max(-prices[index] + f(index+1,transactionNo+1,prices,k),
            0 + f(index+1,transactionNo,prices,k));
        }
        else{
            return max(prices[index] + f(index+1,transactionNo+1,prices,k), 0 + f(index+1,transactionNo,prices,k));
        }

    }
    int maxProfit(int k, vector<int>& prices) {
        n = prices.size();
        return f(0,0,prices,k);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;

    int f(int index,int transactionNo, vector<int>& prices,int k,vector<vector<int>>& dp){
        if(index==n || transactionNo == 2*k){
            return 0;
        }

        if(dp[index][transactionNo]!=-1){
            return dp[index][transactionNo];
        }

        if(transactionNo % 2 == 0){
            //buy
            return dp[index][transactionNo] = max(-prices[index] + f(index+1,transactionNo+1,prices,k,dp),
            0 + f(index+1,transactionNo,prices,k,dp));
        }
        else{
            return dp[index][transactionNo] = max(prices[index] + f(index+1,transactionNo+1,prices,k,dp), 0 + f(index+1,transactionNo,prices,k,dp));
        }

    }
    int maxProfit(int k, vector<int>& prices) {
        n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2*k,-1));
        return f(0,0,prices,k,dp);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int n;

    int maxProfit(int k, vector<int>& prices) {
        n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2*k+1,0));
        
        for(int index=n-1;index>=0;index--){
            for(int transactionNo = 2*k-1;transactionNo>=0;transactionNo--){
                    if(transactionNo % 2 == 0){
                        //buy
                        dp[index][transactionNo] = max(-prices[index] + dp[index+1][transactionNo+1],
                        0 + dp[index+1][transactionNo]);
                    }
                    else{
                        dp[index][transactionNo] = max(prices[index] + dp[index+1][transactionNo+1], 0 + dp[index][transactionNo]);
                    }
            }
        }
        return dp[0][0];
    }
};
*/

//Space Optimised
/*
class Solution {
public:
    int n;

    int maxProfit(int k, vector<int>& prices) {
        n = prices.size();
        vector<int> prev(2*k+1,0);
        vector<int> curr(2*k+1,0);
        
        for(int index=n-1;index>=0;index--){
            for(int transactionNo = 2*k-1;transactionNo>=0;transactionNo--){
                    if(transactionNo % 2 == 0){
                        //buy
                        curr[transactionNo] = max(-prices[index] + prev[transactionNo+1],
                        0 + prev[transactionNo]);
                    }
                    else{
                        curr[transactionNo] = max(prices[index] + prev[transactionNo+1], 0 + prev[transactionNo]);
                    }
            }
            prev=curr;
        }
        return curr[0];
    }
};
*/