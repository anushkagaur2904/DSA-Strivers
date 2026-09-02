//Best Time to Buy and Sell Stock with Transaction Fee
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

/*
class Solution {
public:
    int n;

    int maxProfit(vector<int>& prices,int fee) {
        n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));

        for(int index=n-1;index>=0;index--){
            for(int buy=0;buy<=1;buy++){
            if(buy==1){
                dp[index][buy] = max(-prices[index] + dp[index+1][0], 0 + dp[index+1][1]);
            }
            else{
                dp[index][buy] = max(prices[index] - fee + dp[index+1][1] , 0 + dp[index+1][0]);
            }
            //sell ya buy kisi bhi time fee minus krdo
        }
        }
        return dp[0][1];
    }
};
*/