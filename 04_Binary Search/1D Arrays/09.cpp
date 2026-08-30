//SEARCH IN ROTATED SORTED ARRAY - II (WITH DUPLICATES)
//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

/*
class Solution {
public:

    int findPivot(vector<int>& nums,int n){
        int l=0,r=n-1;

        while(l<r){
            //skip duplicates from left and right
            while(l<r && nums[l] == nums[l+1]){
                l++;
            }
            while(l<r && nums[r] == nums[r-1]){
                r--;
            }
            int mid = l + (r-l)/2;

            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return r;
    }

    bool binarySearch(int l,int r,vector<int>& nums, int target){
        int idx=-1;

        while(l<=r){
            int mid = l + (r-l)/2;

            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findPivot(nums,n);
        if(binarySearch(0,pivot-1,nums,target)){
            return true;//left side of pivot
        }
        return binarySearch(pivot,n-1,nums,target);//right side of pivot
    }
};
*/

//OR
/*
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(nums[mid] == target) {
                return true;
            }

            // Cannot determine sorted side because of duplicates
            if(nums[l] == nums[mid] && nums[mid] == nums[r]) {
                l++;
                r--;
            }

            // Left half is sorted
            else if(nums[l] <= nums[mid]) {

                if(nums[l] <= target && target < nums[mid]) {
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }

            // Right half is sorted
            else {

                if(nums[mid] < target && target <= nums[r]) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
        }

        return false;
    }
};
*/