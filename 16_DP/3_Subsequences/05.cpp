//Count Partitions with given difference
//https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1

/*
class Solution {
  public:
    int t[1001][1001];
    int solve(int n,int target,vector<int>& arr){
        if(n==0){//{1,2,0,0,0} target=3 aisi type ki arrays
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
        }

        if(t[n][target]!=-1){
            return t[n][target];
        }

        int skip = solve(n-1,target,arr);

        int take = 0;
        if(arr[n-1]<=target){
            take = solve(n-1,target-arr[n-1],arr);
        }
        return t[n][target]=take+skip;
    }
    int countPartitions(vector<int>& arr, int diff) {
        // Code here
        int n = arr.size();

        memset(t,-1,sizeof(t));
        
        int S = accumulate(begin(arr),end(arr),0);
        
        if((S+diff)%2!=0){
            return 0;
        }
        
        int target = (S+diff)/2;
        return solve(n,target,arr);
    }
};
*/