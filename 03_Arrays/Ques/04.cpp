//Best time to buy and sell stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// DP CUZ REMEMEBRING THE PAST i.e MINI
/*
mini= arr[0];
profit=0;
for(i=1 to n){
    cost = arr[i]-mini;
    profit = max(profit,cost);
    mini = min(mini,arr[i]);
}
return profit;
TC => O(n)
SC => O(1)
*/
