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


//BRUTE
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted(n);

        for(int r=0;r<=n;r++){
            int idx=0;
            for(int i=r;i<n;i++){
                sorted[idx]=nums[i];
                idx++;
            }
            for(int i=0;i<r;i++){
                sorted[idx]=nums[i];
                idx++;
            }

            //check if sorted
            bool isSorted = true;
            for(int i=0;i<n-1;i++){
                if(sorted[i]>sorted[i+1]){
                    isSorted=false;
                    break;
                }
            }
            if(isSorted){
                return true;
            }
        }
        return false;
    }
};
*/

//BETTER
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted = nums;
        sort(begin(sorted),end(sorted));

        for(int r=0;r<=n;r++){
            bool isSorted = true;
            for(int i=0;i<n;i++){
                if(sorted[i]!=nums[(i+r)%n]){
                    isSorted=false;
                    break;
                }
            }
            if(isSorted){
                return true;
            }
        }
        return false;
    }
};
*/

//OPTIMAL
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int peak=0;

        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                peak++;
            }
        }
        if(peak>1){
            return false;
        }
        return true;
    }
};
*/