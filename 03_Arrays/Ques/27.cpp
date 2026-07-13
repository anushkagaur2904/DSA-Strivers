//Maximum Product Subarray
//https://leetcode.com/problems/maximum-product-subarray/

//Brute Force Array Approach O(n^3)
/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                int prod = 1;

                // Calculate product from i to j
                for (int k = i; k <= j; k++) {
                    prod *= nums[k];
                }

                maxi = max(maxi, prod);
            }
        }

        return maxi;
    }
};
*/

//Better O(n^2)
/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {

            int prod = 1;

            for (int j = i; j < n; j++) {

                prod *= nums[j];
                maxi = max(maxi, prod);
            }
        }

        return maxi;
    }
};
*/

//Optimal
/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int suffix = 1;
        int ans = INT_MIN;

        int n = nums.size();

        for(int i=0;i<n;i++){
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;

            prefix = prefix * nums[i];
            suffix = suffix * nums[n-i-1];
            ans = max(ans,max(prefix,suffix));

        }
        return ans;
    }
};
*/