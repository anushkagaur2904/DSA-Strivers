//Rod Cutting Problem
//https://www.geeksforgeeks.org/problems/rod-cutting0840/1

//Recursive
/*
class Solution {
  public
    int f(int index,int N,vector<int> &price){
        if(index==0){//length 1
            return N * price[0];
        }
        int notTake = 0 + f(index-1,N,price);
        int take = INT_MIN;
        int rodLength = index+1;
        if(rodLength<=N){
            take = price[index] + f(index,N-rodLength,price);
        }
        return max(take,notTake);
    }
    int cutRod(vector<int> &price) {
        // code here
        int N = price.size();
        return f(N-1,N,price);
    }
};
*/

//Memoization
/*
class Solution {
  public:
    int f(int index,int N,vector<int> &price,vector<vector<int>> &dp){
        if(index==0){//length 1
            return N * price[0];
        }
        
        if(dp[index][N]!=-1) return dp[index][N];
        
        int notTake = 0 + f(index-1,N,price,dp);
        int take = INT_MIN;
        int rodLength = index+1;
        if(rodLength<=N){
            take = price[index] + f(index,N-rodLength,price,dp);
        }
        return dp[index][N]=max(take,notTake);
    }
    int cutRod(vector<int> &price) {
        // code here
        int N = price.size();
        vector<vector<int>> dp(N,vector<int>(N+1,-1));
        return f(N-1,N,price,dp);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int cutRod(vector<int> &price) {

        int N = price.size();

        vector<vector<int>> dp(N, vector<int>(N + 1, 0));

        // Base Case
        // index = 0 means only rod length 1 is available
        for(int len = 0; len <= N; len++) {
            dp[0][len] = len * price[0];
        }

        for(int index = 1; index < N; index++) {

            int rodLength = index + 1;

            for(int len = 0; len <= N; len++) {

                int notTake = dp[index - 1][len];

                int take = INT_MIN;

                if(rodLength <= len) {
                    take = price[index] + dp[index][len - rodLength];
                }

                dp[index][len] = max(take, notTake);
            }
        }

        return dp[N - 1][N];
    }
};
*/

//Space Optimised
/*
class Solution {
public:
    int cutRod(vector<int> &price) {

        int N = price.size();

        vector<int> prev(N + 1, 0);
        vector<int> curr(N + 1, 0);

        // Base Case
        for(int len = 0; len <= N; len++) {
            prev[len] = len * price[0];
        }

        for(int index = 1; index < N; index++) {

            int rodLength = index + 1;

            for(int len = 0; len <= N; len++) {

                int notTake = prev[len];

                int take = INT_MIN;

                if(rodLength <= len) {
                    take = price[index] + curr[len - rodLength];
                }

                curr[len] = max(take, notTake);
            }

            prev = curr;
        }

        return prev[N];
    }
};
*/