//SEARCH INSERT POSITION
//https://leetcode.com/problems/search-insert-position/
/* given sorted array of distinct values and u have to find target 
if target present then return index
vrna btao ki sorted array mein kaha hota

eg arr[] = [1,2,4,7] x=6
index = 3 where 6 will be inserted

THIS IS A CASE OF LOWER BOUND

if x=2 insert wherever first 2 is
basically return index where arr[index]>=x
*/


/*
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
*/