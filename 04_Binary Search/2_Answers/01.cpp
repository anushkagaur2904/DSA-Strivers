//Find square root of a number
//https://www.geeksforgeeks.org/problems/square-root/1

//Brute
/*
class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int ans = 0;
        for(int i=1;i<=n;i++){
            if(i*i<=n){
                ans=i;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
*/

//BS
/*
class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        int low = 1;
        int high = n;
        int ans;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(mid*mid<=n){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};
*/