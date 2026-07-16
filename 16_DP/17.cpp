//Super Egg Drop
//https://leetcode.com/problems/super-egg-drop/description/

//Recursive
/*
class Solution {
public:
    int superEggDrop(int e, int f) {
        // e = eggs, f=floor
        int mn = INT_MAX;
        if(f==0 || f==1){
            return f;
        }
        if(e==1){
            return f;
        }
        for(int k=1;k<=f;k++){
            int eggBreak = superEggDrop(e-1,k-1);
            int notBreak = superEggDrop(e,f-k);
            //Since we don't know which case will happen, we consider the worst case:
            int temp = 1 + max(eggBreak,notBreak);
            //Finally, choose the floor that minimizes the worst-case number of attempts:
            mn = min(mn,temp);
        }
        return mn;
    }
};
*/

//Memoization
/*
class Solution {
public:
    vector<vector<int>> dp;

    int solve(int e, int f) {

        // Base Cases
        if (f == 0 || f == 1)
            return f;

        if (e == 1)
            return f;

        // Already computed
        if (dp[e][f] != -1)
            return dp[e][f];

        int mn = INT_MAX;

        // Try dropping from every floor
        for (int k = 1; k <= f; k++) {

            int eggBreak = solve(e - 1, k - 1);

            int notBreak = solve(e, f - k);

            int temp = 1 + max(eggBreak, notBreak);

            mn = min(mn, temp);
        }

        return dp[e][f] = mn;
    }

    int superEggDrop(int e, int f) {

        dp.assign(e + 1, vector<int>(f + 1, -1));

        return solve(e, f);
    }
};
*/

//Optimized Memoization
/*
class Solution {
public:
    vector<vector<int>> dp;

    int solve(int e, int f) {

        if (f == 0 || f == 1)
            return f;

        if (e == 1)
            return f;

        if (dp[e][f] != -1)
            return dp[e][f];

        int mn = INT_MAX;

        for (int k = 1; k <= f; k++) {

            int eggBreak, notBreak;

            if (dp[e - 1][k - 1] != -1)
                eggBreak = dp[e - 1][k - 1];
            else
                eggBreak = dp[e - 1][k - 1] = solve(e - 1, k - 1);

            if (dp[e][f - k] != -1)
                notBreak = dp[e][f - k];
            else
                notBreak = dp[e][f - k] = solve(e, f - k);

            int temp = 1 + max(eggBreak, notBreak);

            mn = min(mn, temp);
        }

        return dp[e][f] = mn;
    }

    int superEggDrop(int e, int f) {

        dp.assign(e + 1, vector<int>(f + 1, -1));

        return solve(e, f);
    }
};
*/

//Binary Search + Memoization
/*
class Solution {
public:
    vector<vector<int>> dp;

    int solve(int e, int f) {

        if (f == 0 || f == 1)
            return f;

        if (e == 1)
            return f;

        if (dp[e][f] != -1)
            return dp[e][f];

        int low = 1;
        int high = f;
        int ans = INT_MAX;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int eggBreak = solve(e - 1, mid - 1);
            int notBreak = solve(e, f - mid);

            int temp = 1 + max(eggBreak, notBreak);

            ans = min(ans, temp);

            if (eggBreak < notBreak) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return dp[e][f] = ans;
    }

    int superEggDrop(int e, int f) {

        dp.assign(e + 1, vector<int>(f + 1, -1));

        return solve(e, f);
    }
};
*/