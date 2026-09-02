//COUNT OCCURRENCES OF A NUMBER IN A SORTED ARRAY WITH DUPLICATES
//https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

/*
class Solution {
  public:

    int findRightMost(vector<int>& nums, int target, int n){
        int l = 0, r = n - 1;
        int right_most = -1;

        while(l <= r){
            int mid = l + (r - l) / 2;

            if(nums[mid] == target){
                right_most = mid;
                l = mid + 1; // search further right
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        return right_most;
    }

    int findLeftMost(vector<int>& nums, int target, int n){
        int l = 0, r = n - 1;
        int left_most = -1;

        while(l <= r){
            int mid = l + (r - l) / 2;

            if(nums[mid] == target){
                left_most = mid;
                r = mid - 1; // search further left
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        return left_most;
    }

    int countFreq(vector<int>& arr, int target) {

        int n = arr.size();

        int left_most = findLeftMost(arr, target, n);

        int right_most = findRightMost(arr, target, n);
        
        if(left_most == -1 || right_most==-1){
            return 0;
        }

        return right_most - left_most + 1;
    }
};
*/