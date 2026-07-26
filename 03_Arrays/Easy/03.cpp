//https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
//check if array is sorted
/*
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};
*/

//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
//check if array is sorted and rotated
//KEY TAKEAWAY Sorted + rotated array ⇒ at most ONE order violation
//TC -> O(N)
//SC -> O(1)
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
            if(count>1){
                return false;
            }
            }
        return true;
    }
};
*/