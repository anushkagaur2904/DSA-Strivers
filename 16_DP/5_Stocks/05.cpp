//Best Time to Buy and Sell Stock with Cooldown
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/

//Recursion
/*
class Solution {
public:
    int n;
    int f(int index,int buy,vector<int>& prices){
        if(index>=n){//index + 2 ke time out of bound ho skta hai
            return 0;
        }

        int profit = 0;
        if(buy==1){
            profit = max(-prices[index] + f(index+1,0,prices), 0 + f(index+1,1,prices));
        }
        else{
            //sell krke next day buy nhi hoga
            profit = max(prices[index] + f(index+2,1,prices) , 0 + f(index+1,0,prices));
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
        if(index>=n){
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
            profit = max(prices[index] + f(index+2,1,prices,dp) , 0 + f(index+1,0,prices,dp));
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
        vector<vector<int>> dp(n+2,vector<int>(2,0));

        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
            if(buy==1){
                dp[index][buy] = max(-prices[index] + dp[index+1][0], 0 + dp[index+1][1]);
            }
            else{
                dp[index][buy] = max(prices[index] + dp[index+2][1] , 0 + dp[index+1][0]);
            }
        }
        }
        return dp[0][1];
    }
};
*/

//Buy vala for loop hata do
/*
class Solution {
public:
    int n;

    int maxProfit(vector<int>& prices) {
        n = prices.size();
        vector<vector<int>> dp(n+2,vector<int>(2,0));

        for(int index=n-1;index>=0;index--){
                dp[index][1] = max(-prices[index] + dp[index+1][0], 0 + dp[index+1][1]);
            
                dp[index][0] = max(prices[index] + dp[index+2][1] , 0 + dp[index+1][0]);
            
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
        vector<int> front1(2,0);//for index 1
        vector<int> front2(2,0);//for index 2
        vector<int> curr(2,0);

        for(int index=n-1;index>=0;index--){
            curr[1] = max(-prices[index] + front1[0], 0 + front1[1]);
            
            curr[0] = max(prices[index] + front2[1] , 0 + front1[0]);

            front2 = front1;
            front1 = curr;

        }
        return curr[1];
    }
    
};
*/