//Find an Element in a Rotated Sorted Array
//https://leetcode.com/problems/search-in-rotated-sorted-array/description/

/*
class Solution {
public:

    int binarySearch(vector<int>& nums, int start, int end, int target) {
        
        while(start <= end) {
            
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target)
                return mid;
            
            else if(nums[mid] < target)
                start = mid + 1;
            
            else
                end = mid - 1;
        }
        
        return -1;
    }

    int findPivot(vector<int>& arr) {
        
        int n = arr.size();
        int start = 0;
        int end = n - 1;

        while(start <= end) {

            // already sorted
            if(arr[start] <= arr[end])
                return start;

            int mid = (start + end) / 2;

            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;

            // minimum element
            if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
                return mid;
            }

            // left part sorted
            else if(arr[start] <= arr[mid]) {
                start = mid + 1;
            }

            // right part sorted
            else if(arr[mid] <= arr[end]) {
                end = mid - 1;
            }
        }

        return 0;
    }

    int search(vector<int>& nums, int target) {
        
        int n = nums.size();

        int pivot = findPivot(nums);

        // target in right sorted half
        if(target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        }

        // target in left sorted half
        return binarySearch(nums, 0, pivot - 1, target);
    }
};
*/