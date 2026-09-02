//Best time to buy and sell stock II
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

//Recursion
/*
class Solution {
public:
    int n;
    int f(int index,int buy,vector<int>& prices){
        if(index==n){
            return 0;
        }
        int profit = 0;
        if(buy==1){
            profit = max(-prices[index] + f(index+1,0,prices), 0 + f(index+1,1,prices));
        }
        else{
            profit = max(prices[index] + f(index+1,1,prices) , 0 + f(index+1,0,prices));
        }
        return profit;
    }
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        return f(0,1,prices);
        //0th day pe , 1 mtlb can buy
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;
    int f(int index,int buy,vector<int>& prices, vector<vector<int>>& dp){
        if(index==n){
            return 0;
        }
        if(dp[index][buy]!=-1){
            return dp[index][buy];
        }
        int profit = 0;
        if(buy==1){
            profit = max(-prices[index] + f(index+1,0,prices,dp), 0 + f(index+1,1,prices,dp));
        }
        else{
            profit = max(prices[index] + f(index+1,1,prices,dp) , 0 + f(index+1,0,prices,dp));
        }
        return dp[index][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(0,1,prices,dp);
        //0th day pe , 1 mtlb can buy
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int n;

    int maxProfit(vector<int>& prices) {
        n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));

        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                int profit = 0;
            if(buy==1){
                profit = max(-prices[index] + dp[index+1][0], 0 + dp[index+1][1]);
            }
            else{
                profit = max(prices[index] + dp[index+1][1] , 0 + dp[index+1][0]);
            }
            dp[index][buy]=profit;
        }
        }
        return dp[0][1];
    }
};
*/

//Space Optimised
/*
class Solution {
public:
    int n;

    int maxProfit(vector<int>& prices) {
        n = prices.size();
        vector<int> prev(2,0);
        vector<int> curr(2,0);
        
        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
                int profit = 0;
            if(buy==1){
                profit = max(-prices[index] + prev[0], 0 + prev[1]);
            }
            else{
                profit = max(prices[index] + prev[1] , 0 + prev[0]);
            }
            curr[buy]=profit;
        }
        prev=curr;
        }
        return prev[1];
    }
};
*/