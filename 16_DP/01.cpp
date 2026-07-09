// O/1 Knapsack Recursive
//https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

/*
class Solution {
public:

    int solve(int n, int W, vector<int> &val, vector<int> &wt) {

        // Base Case
        if(n == 0 || W == 0)
            return 0;

        // Choice: Pick or Not Pick
        if(wt[n-1] <= W) {

            return max(
                val[n-1] + solve(n-1, W - wt[n-1], val, wt), // Pick
                solve(n-1, W, val, wt)                       // Don't Pick
            );
        }

        // Cannot pick the item
        return solve(n-1, W, val, wt);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {

        int n = wt.size();

        return solve(n, W, val, wt);
    }
};
*/