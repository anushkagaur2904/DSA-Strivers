//Peak Element
//https://leetcode.com/problems/find-peak-element/description/

/*
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        //single element
        if(n==1){
            return 0;
        }

        while(low<=high){
            int mid = low + (high-low)/2;
            if(mid>0 && mid<n-1){
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                    return mid;
                }
                else if(nums[mid-1]>nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }

            else if(mid==0){
                if(nums[mid]>nums[mid+1]){//50 40 30 20 10
                    return 0;
                }
                else{
                    return 1;// 40 50 30 20 10
                }
            }

            else if(mid==n-1){
                if(nums[mid-1]>nums[mid-2]){ //10 20 30 40 50
                    return n-1;
                }
                else{
                    return n-2;
                }
            }
        }
        return -1;
    }
};
*/