//Maximum Sum Subarray of size K
//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

/*
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i = 0, j = 0;
        int sum = 0;
        int maxi = INT_MIN;

    while (j < arr.size()) {

        // calculation
        sum += arr[j];

        // window size < k
        if (j - i + 1 < k) {
            j++;
        }

        // window size == k
        else if (j - i + 1 == k) {

            // answer calculation
            maxi = max(maxi, sum);

            // slide the window
            sum = sum - arr[i];
            i++;
            j++;
        }
    }

    return maxi;
    }
};
*/