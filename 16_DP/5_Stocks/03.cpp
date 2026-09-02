//Best time to buy and sell stock III
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/

//Recursion
/*
class Solution {
public:
    int n;

    int f(int index,int buy,int cap,vector<int>& prices){
        if(index==n || cap==0) return 0;

        if(buy==1){
            return max(-prices[index] + f(index+1,0,cap,prices),
                        0 + f(index+1,1,cap,prices));
        }
        else{
            return max(prices[index] + f(index+1,1,cap-1,prices),
                        0 + f(index+1,0,cap,prices));
        }
    }
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        return f(0,1,2,prices);
        //index, buy , cap
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;

    int f(int index,int buy,int cap,vector<int>& prices, vector<vector<vector<int>>>& dp){
        if(index==n || cap==0) return 0;

        if(dp[index][buy][cap]!=-1){
            return dp[index][buy][cap];
        }
        if(buy==1){
            return dp[index][buy][cap]=max(-prices[index] + f(index+1,0,cap,prices,dp),0 + f(index+1,1,cap,prices,dp));
        }
        else{
            return dp[index][buy][cap]=max(prices[index] + f(index+1,1,cap-1,prices,dp),0 + f(index+1,0,cap,prices,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,1,2,prices,dp);
        //index, buy , cap
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
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));

        for(int index = n-1;index >= 0;index--){
            for(int buy = 0 ;buy <= 1;buy++){
                for(int cap = 1;cap <= 2;cap++){//cuz cap = 0 vala -1 ho jayega agar cap-1 krege toh
                    if(buy==1){
                        dp[index][buy][cap]=max(-prices[index] + dp[index+1][0][cap],0 + dp[index+1][1][cap]);
                    }
                    else{
                        dp[index][buy][cap]=max(prices[index] + dp[index+1][1][cap-1],0 + dp[index+1][0][cap]);
                    }
                }
            }
        }
        return dp[0][1][2];
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
        vector<vector<int>> prev(2,vector<int>(3,0));
        vector<vector<int>> curr(2,vector<int>(3,0));

        for(int index = n-1;index >= 0;index--){
            for(int buy = 0 ;buy <= 1;buy++){
                for(int cap = 1;cap <= 2;cap++){//cuz cap = 0 vala -1 ho jayega agar cap-1 krege toh
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
        return curr[1][2];
    }
};
*/