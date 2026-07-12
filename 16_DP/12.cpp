//Partition Equal Subset Sum
//https://leetcode.com/problems/partition-equal-subset-sum/

/*
class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        
        vector<vector<bool>> t(n+1, vector<bool>(sum+1,false));
        
        for(int i=0;i<n+1;i++){
            t[i][0] = true;
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                bool skip = t[i-1][j];
                bool take = false;
                if(arr[i-1]<=j){
                    take = t[i-1][j-arr[i-1]];
                }
                t[i][j] = take || skip;
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int SUM = accumulate(begin(nums),end(nums),0);
        
        if(SUM%2 !=0){
            return false;
        }
        int S = SUM/2; // S1==S2==S

        return isSubsetSum(nums,S);
    }
};
*/